// https://github.com/rigetti/pyquil/blob/f9608d808bfc62c9dc6ec468d95e0bf31f82a4d5/pyquil/_parser/grammar.lark
module.exports = grammar({
  name: "quil",

  // TODO whitespace?
    // extras: $ => [
    //   /^\n$/, // skip blank lines
    // ],  // handle other whitespace ourselves

  rules: {
    quil: $ => $._all_instr,

    _all_instr: $ => choice(
      $.comment,
      $.def_gate,
      $.def_circuit,
      $.def_frame,
      $.def_waveform,
      $.def_calibration,
      $.def_measure_calibration,
      $.instr,
    ),

    instr: $ => choice(
      $.fence,
      $.pulse,
      $.delay,
      $.set_frequency,
      $.shift_frequency,
      $.shift_phase,
      $.set_phase,
      $.swap_phase,
      $.set_scale,
      $.declare,
      $.capture,
      $.raw_capture,
      $.pragma,
      $.measure,
      $.halt,
      $.gate,
      $.nop,
      $.def_label,
      $.jump,
      $.jump_when,
      $.jump_unless,
      $.reset,
      $.wait,
      $.store,
      $.load,
      $.convert,
      $.exchange,
      $.move,
      $.classical_unary,
      $.classical_binary,
      $.classical_comparison,
      $.include,
      $.gate_no_qubits,
    ),

    comment: $ => token(seq("#", /[^\n]*/, "\n")),

    def_gate: $ => choice(
      $.def_gate_matrix,
      $.def_gate_as_permutation,
      $.def_pauli_gate,
    ),

    def_gate_matrix: $ => seq(
      "DEFGATE",
      $.name,
      optional(seq("AS", "MATRIX")),
      optional($.variables),
      ":",
      $.matrix,
    ),

    def_gate_as_permutation: $ => seq(
      "DEFGATE",
      $.name,
      "AS",
      "PERMUTATION",
      ":",
      $.newline_tab,
      $.matrix_row,
    ),

    def_pauli_gate: $ => seq(
      "DEFGATE",
      $.name,
      optional($.variables),
      $.qubit_variables,
      "AS",
      "PAULI-SUM",
      ":",
      $.pauli_terms,
    ),

    pauli_terms: $ => repeat(seq($._newline_tab, $.pauli_term)),
    pauli_term: $ => seq($.name, "(", $.expression, ")", $.qubit_variables),

    def_circuit: $ => seq(
      "DEFCIRCUIT",
      $.name, 
      optional($.variables),
      optional($.qubit_designators),
      ":",
      $.indented_instrs,
    ),

    def_frame: $ => seq(
      "DEFFRAME",
      $.frame,
      repeat(seq(":", repeat1($.frame_spec))),
    ),
    frame_spec: $ => seq(
      $._newline_tab,
      $.frame_attr,
      ":",
      choice($.expression, $._string),
    ),
    frame_attr: $ => choice(
      "SAMPLE-RATE",
      "INITIAL-FREQUENCY",
      "DIRECTION",
      "HARDWARE-OBJECT",
      "CENTER-FREQUENCY",
    ),

    def_waveform: $ => seq(
      "DEFWAVEFORM",
      $.waveform_name,
      $.params,
      ":",
      $.matrix
    ),

    def_calibration: $ => seq(
      "DEFCAL",
      $.name,
      $.params,
      $.qubit_designators,
      ":",
      $.indented_instrs,
    ),

    def_measure_calibration: $ => seq(
      "DEFCAL",
      "MEASURE",
      $.qubit_designator,
      optional($.name),
      ":",
      $.indented_instrs,
    ),

    gate: $ => seq(
      optional($.modifiers),
      $.name,
      optional($.params),
      $.qubit_designators,
    ),
    gate_no_qubits: $ => $.name,  // TODO will this need precedence like lark?

    modifiers: $ => repeat1($.modifier),
    modifier: $ => choice("CONTROLLED", "DAGGER", "FORKED"),

    indented_instrs: $ => repeat1(seq($._newline_tab, $.instr)),

    params: $ => optional(
      seq(
        "(",
        $.param,
        repeat(seq(",", $.param)),
        ")"
      )
    ),
    param: $ => $.expression,

    matrix: $ => repeat($._newline_tab, $.matrix_row),
    matrix_row: $ => seq(
      $.expression,
      repeat(seq(",", $.expression)),
    ),

    expression: $ => choice(
      $.product,
      seq($.expression, "+", $.expression),
      seq($.expression, "-", $.product),
    ),
    product: $ => choice(
      $.power,
      seq($.product, "*", $.power),
      seq($.product, "/", $.power),
    ),
    power: $ => choice(
      $.atom,
      seq($.atom, "^", $.power),
    ),
    atom: $ => choice(
      $.number,
      seq("-", $.atom),
      seq("+", $.atom),
      seq($.function, "(", $.expression, ")"),
      seq("(", $.expression, ")"),
      $.variable,
      $.add,
    ),

    variables: $ => optional(
      seq("(", $.variable, repeat(seq(",", $.variable)), ")")
    ),
    variable: $ => seq("%", $.identifier),

    fence: $ => choice("FENCE", seq("FENCE", $.qubit_designators)),
    pulse: $ => seq(
      optional($.nonblocking),
      "PULSE",
      $.frame,
      $.waveform,
    ),

    delay: $ => choice($.delay_qubits, $.delay_frames),
    delay_qubits: $ => choice(
      seq("DELAY", $.qubit_designators, $.expression),
      seq("DELAY", $.qubit_designators),
    ),
    delay_frames: $ => seq(
      "DELAY",
      $.qubit_designator,
      repeat1('"', $.name, '"'),
      $.expression,
    ),

    set_frequency: $ => seq(
      "SET-FREQUENCY",
      $.frame,
      $.expression
    ),
    shift_frequency: $ => seq(
      "SHIFT-FREQUENCY",
      $.frame,
      $.expression
    ),
    shift_phase: $ => seq(
      "SHIFT-PHASE",
      $.frame,
      $.expression
    ),
    set_phase: $ => seq(
      "SET-PHASE",
      $.frame,
      $.expression
    ),
    swap_phase: $ => seq(
      "SWAP-PHASE",
      $.frame,
      $.expression
    ),
    set_scale: $ => seq(
      "SET-SCALE",
      $.frame,
      $.expression
    ),

    declare: $ => seq(
      "DECLARE",
      $.identifier,
      $.identifier,
      optional(seq("[", $.int, "]")),
      optional(seq("SHARING", $.identifier, repeat($.offset_descriptor))),
    ),


    name: $ => $.identifier,
    identifier: $ => seq(
      choice("_", $.letter),
      optional(
        seq(
          repeat(choice("_", "-", $.letter, $.digit)),
          choice("_", $.letter, $.digit),
        )
      )
    ),
    _newline_tab: $ => seq($._newline, choice("    ", "\t")),
    _newline: $ => "\n",

    // https://github.com/lark-parser/lark/blob/master/lark/grammars/common.lark
    _float: $ => choice(
      seq($._int, choice("e", "E"), $._signed_int),
      seq($._decimal, optional(seq(choice("e", "E"), $._signed_int))),
    ),
    _decimal: $ => choice(
      seq($._int, ".", optional($._int)),
      seq(".", $._int),
    ),
    _signed_int: $ => seq(choice("+", "-"), $.int),
    _int: $ => repeat1($.digit),
    _digit: $ => /0-9/,
    _letter: $ => /A-Za-z/,
    _string: $ => $._escaped_string,
    _escaped_string: $ => seq('"', _string_esc_inner, '"'),
    _string_esc_inner: $ => seq($._string_inner, /(?<!\\)(\\\\)*?/),
    _string_inner: $ => /.*?/,

  },
});
