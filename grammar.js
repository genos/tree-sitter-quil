// https://github.com/rigetti/pyquil/blob/f9608d808bfc62c9dc6ec468d95e0bf31f82a4d5/pyquil/_parser/grammar.lark
module.exports = grammar({
  name: "quil",

    extras: $ => [],  // handle whitespace ourselves

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

    comment: $ => token(seq("#", /.*/)),

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
      ":"
    ),

    def_pauli_gate: $ => seq(
      "DEFGATE",
      $.name,
      optional($.variables),
      $.qubit_variables,
      "AS",
      "PAULI-SUM",
      ":",
      $.pauli_terms
    ),




    name: $ => $.identifier,
    identifier: $ => seq(
      choice("_", $.letter),
      optional(
        repeat(choice("_", "-", $.letter, $.digit)),
        choice("_", $.letter, $.digit),
      )
    ),
    newline: $ => "\n",
    newline_tab: $ => seq($.newline, choice("    ", "\t")),

    float: $ => choice(
           
    ),
    signed_int: $ => seq(choice("+", "-"), $.int),
    int: $ => repeat1($.digit),
    digit: $ => /0-9/,
    letter: $ => /A-Za-z/,

  },
});
