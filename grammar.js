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

    comment: _ => token(seq("#", /[^\n]*/, "\n")),

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
      optional($.matrix),
    ),

    def_gate_as_permutation: $ => seq(
      "DEFGATE",
      $.name,
      "AS",
      "PERMUTATION",
      ":",
      $._newline_tab,
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
      repeat(seq($._newline_tab, $.pauli_term)),
    ),

    pauli_term: $ => seq($.name, "(", $.expression, ")", $.qubit_variables),

    def_circuit: $ => seq(
      "DEFCIRCUIT",
      $.name,
      optional($.variables),
      repeat($.qubit_designator),
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
    frame_attr: _ => choice(
      "SAMPLE-RATE",
      "INITIAL-FREQUENCY",
      "DIRECTION",
      "HARDWARE-OBJECT",
      "CENTER-FREQUENCY",
    ),

    def_waveform: $ => seq(
      "DEFWAVEFORM",
      $.waveform_name,
      optional($.params),
      ":",
      optional($.matrix),
    ),

    def_calibration: $ => seq(
      "DEFCAL",
      $.name,
      optional($.params),
      repeat1($.qubit_designator),
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
      repeat1($.qubit_designator),
    ),
    gate_no_qubits: $ => $.name,  // TODO does this need precedence like lark?

    modifiers: $ => repeat1($.modifier),
    modifier: _ => choice("CONTROLLED", "DAGGER", "FORKED"),

    indented_instrs: $ => repeat1(seq($._newline_tab, $.instr)),

    params: $ => seq(
        "(",
        $.param,
        repeat(seq(",", $.param)),
        ")"
    ),
    param: $ => $.expression,

    matrix: $ => repeat1(seq($._newline_tab, $.matrix_row)),
    matrix_row: $ => seq(
      $.expression,
      repeat(seq(",", $.expression)),
    ),

    expression: $ => choice(
      prec.left(3, $.product),
      prec.left(2, seq($.expression, "+", $.expression)),
      prec.left(1, seq($.expression, "-", $.product)),
    ),
    product: $ => choice(
      $.power,
      seq($.product, "*", $.power),
      seq($.product, "/", $.power),
    ),
    power: $ => choice($.atom, seq($.atom, "^", $.power)),
    atom: $ => choice(
      $.number,
      seq("-", $.atom),
      seq("+", $.atom),
      seq($.function, "(", $.expression, ")"),
      seq("(", $.expression, ")"),
      $.variable,
      $.addr,
    ),

    variables: $ => seq("(", $.variable, repeat(seq(",", $.variable)), ")"),
    variable: $ => seq("%", $.identifier),

    // Instructions

    fence: $ => choice("FENCE", seq("FENCE", repeat1($.qubit_designator))),
    pulse: $ => seq(
      optional($.nonblocking),
      "PULSE",
      $.frame,
      $.waveform,
    ),

    delay: $ => choice($.delay_qubits, $.delay_frames),
    delay_qubits: $ => seq("DELAY", repeat1($.qubit_designator), optional($.expression)),
    delay_frames: $ => seq(
      "DELAY",
      $.qubit_designator,
      repeat1(seq('"', $.name, '"')),
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
      optional(seq("[", $._int, "]")),
      optional(seq("SHARING", $.identifier, repeat($.offset_descriptor))),
    ),
    offset_descriptor: $ => seq("OFFSET", $._int, $.identifier),

    capture: $ => seq(
      optional($.nonblocking),
      "CAPTURE",
      $.frame,
      $.waveform,
      $.addr,
    ),

    raw_capture: $ => seq(
      optional($.nonblocking),
      "RAW-CAPTURE",
      $.frame,
      $.waveform,
      $.addr,
    ),

    addr: $ => choice(
      prec.left(2, $.identifier),
      prec.left(1, seq(optional($.identifier), "[", $._int, "]")),
    ),

    pragma: $ => seq(
      "PRAGMA",
      choice($.identifier, $.keyword),
      repeat($.pragma_name),
      optional($._string),
    ),
    pragma_name: $ => choice(
      prec.left(3, $.identifier),
      prec.left(2, $.keyword),
      prec.left(1, $._int),
    ),

    measure: $ => seq("MEASURE", $.qubit_designator, optional($.addr)),

    halt: _ => "HALT",

    nop: _ => "NOP",

    include: $ => seq("INCLUDE", $._string),

    def_label: $ => seq("LABEL", $.label),

    jump: $ => seq("JUMP", $.label),
    jump_when: $ => seq("JUMP-WHEN", $.label),
    jump_unless: $ => seq("JUMP-UNLESS", $.label),
    label: $ => seq("@", $.name),

    reset: $ => seq("RESET", $.qubit),
    wait: _ => "WAIT",
    store: $ => seq("STORE", $.name, $.addr, choice($.addr, $.number)),
    load: $ => seq("LOAD", $.addr, $.name, $.addr),
    convert: $ => seq("CONVERT", $.addr, $.addr),
    exchange: $ => seq("EXCHANGE", $.addr, $.addr),
    move: $ => seq("MOVE", $.addr, choice($.addr, $.signed_number)),
    classical_unary: $ => seq(
      choice("NEG", "NOT", "TRUE", "FALSE"),
      $.addr,
    ),
    classical_binary: $ => choice($.logical_binary_op, $.arithmetic_binary_op),
    logical_binary_op: $ => seq(
      choice("AND", "OR", "IOR", "XOR"),
      $.addr,
      choice($.addr, $.int_n),
    ),
    arithmetic_binary_op: $ => seq(
      choice("ADD", "SUB", "MUL", "DIV"),
      $.addr,
      choice($.addr, $.signed_number),
    ),
    classical_comparison: $ => seq(
      choice("EQ", "GT", "GE", "LT", "LE"),
      $.addr,
      $.addr,
      choice($.addr, $.signed_number),
    ),

    // Qubits, frames, waveforms

    qubit_designator: $ => prec.left(1, choice($.qubit, $.variable)),
    qubit: $ => prec.left(1, $.int_n),
    qubit_variables: $ => repeat1($.qubit_variable),
    qubit_variable: $ => $.identifier,
    named_param: $ => seq($.identifier, ":", $.expression),
    waveform: $ => seq(
      $.waveform_name,
      optional(
        seq(
          "(",
          $.named_param,
          repeat(seq(",", $.named_param)),
          ")",
        ),
      ),
    ),
    waveform_name: $ => seq($.name, optional(seq("/", $.name))),
    frame: $ => seq(repeat1($.qubit_designator), '"', $.name, '"'),

    function: _ => choice("SIN", "COS", "SQRT", "EXP", "CIS"),

    // Numbers

    number: $ => choice(
      seq(choice($.int_n, $.float_n), "i"),
      $.int_n,
      $.float_n,
      "i",
      "pi",
    ),
    int_n: $ => prec.left(1, $._int),
    float_n: $ => $._float,
    signed_number: $ => seq(choice("+", "-"), $.number),

    // Lexer

    nonblocking: _ => "NONBLOCKING",

    keyword: $ => choice(

      "DEFGATE",
      "DEFCIRCUIT",
      "MEASURE",

      "LABEL",
      "HALT",
      "JUMP",
      "JUMP-WHEN",
      "JUMP-UNLESS",

      "RESET",
      "WAIT",
      "NOP",
      "INCLUDE",
      "PRAGMA",

      "DECLARE",
      "SHARING",
      "OFFSET",

      "AS",
      "MATRIX",
      "PERMUTATION",
      "PAULI-SUM",

      "NEG",
      "NOT",
      "TRUE",  // Deprecated
      "FALSE",  // Deprecated

      "AND",
      "IOR",
      "XOR",
      "OR",    // Deprecated

      "ADD",
      "SUB",
      "MUL",
      "DIV",

      "MOVE",
      "EXCHANGE",
      "CONVERT",

      "EQ",
      "GT",
      "GE",
      "LT",
      "LE",

      "LOAD",
      "STORE",

      "pi",
      "i",

      "SIN",
      "COS",
      "SQRT",
      "EXP",
      "CIS",

      // Operators

      "+",
      "-",
      "*",
      "/",
      "^",

      // analog keywords

      "CAPTURE",
      "DEFCAL",
      "DEFFRAME",
      "DEFWAVEFORM",
      "DELAY",
      "FENCE",
      "HARDWARE-OBJECT",
      "INITIAL-FREQUENCY",
      "CENTER-FREQUENCY",
      $.nonblocking,
      "PULSE",
      "SAMPLE-RATE",
      "SET-FREQUENCY",
      "SHIFT-FREQUENCY",
      "SET-PHASE",
      "SET-SCALE",
      "SHIFT-PHASE",
      "SWAP-PHASE",
      "RAW-CAPTURE",
      "FILTER-NODE",

      // Modifiers

      "CONTROLLED",
      "DAGGER",
      "FORKED",
    ),

    name: $ => $.identifier,
    identifier: _ => /[_A-Za-z](([_\-A-Za-z0-9])*([_A-Za-z0-9]))?/,
    _newline_tab: $ => seq($._newline, choice("    ", "\t")),
    _newline: _ => "\n",

    // https://github.com/lark-parser/lark/blob/master/lark/grammars/common.lark
    _float: $ => choice(
      seq($._int, choice("e", "E"), $._signed_int),
      seq($._decimal, optional(seq(choice("e", "E"), $._signed_int))),
    ),
    _decimal: $ => choice(
      seq($._int, ".", optional($._int)),
      seq(".", $._int),
    ),
    _signed_int: $ => seq(choice("+", "-"), $._int),
    _int: _ => repeat1(/0-9/),
    _string: $ => $._escaped_string,
    _escaped_string: $ => seq('"', $._string_esc_inner, '"'),
    _string_esc_inner: $ => seq($._string_inner, /(\\\\)*?/),
    _string_inner: _ => /.*?/,

  },
});
