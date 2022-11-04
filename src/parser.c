#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 454
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 200
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

enum {
  sym_comment = 1,
  anon_sym_DEFGATE = 2,
  anon_sym_AS = 3,
  anon_sym_MATRIX = 4,
  anon_sym_COLON = 5,
  anon_sym_PERMUTATION = 6,
  anon_sym_PAULI_DASHSUM = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_DEFCIRCUIT = 10,
  anon_sym_DEFFRAME = 11,
  anon_sym_SAMPLE_DASHRATE = 12,
  anon_sym_INITIAL_DASHFREQUENCY = 13,
  anon_sym_DIRECTION = 14,
  anon_sym_HARDWARE_DASHOBJECT = 15,
  anon_sym_CENTER_DASHFREQUENCY = 16,
  anon_sym_DEFWAVEFORM = 17,
  anon_sym_DEFCAL = 18,
  anon_sym_MEASURE = 19,
  anon_sym_CONTROLLED = 20,
  anon_sym_DAGGER = 21,
  anon_sym_FORKED = 22,
  anon_sym_COMMA = 23,
  anon_sym_PLUS = 24,
  anon_sym_DASH = 25,
  anon_sym_STAR = 26,
  anon_sym_SLASH = 27,
  anon_sym_CARET = 28,
  anon_sym_PERCENT = 29,
  anon_sym_FENCE = 30,
  anon_sym_PULSE = 31,
  anon_sym_DELAY = 32,
  anon_sym_DQUOTE = 33,
  anon_sym_SET_DASHFREQUENCY = 34,
  anon_sym_SHIFT_DASHFREQUENCY = 35,
  anon_sym_SHIFT_DASHPHASE = 36,
  anon_sym_SET_DASHPHASE = 37,
  anon_sym_SWAP_DASHPHASE = 38,
  anon_sym_SET_DASHSCALE = 39,
  anon_sym_DECLARE = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  anon_sym_SHARING = 43,
  anon_sym_OFFSET = 44,
  anon_sym_CAPTURE = 45,
  anon_sym_RAW_DASHCAPTURE = 46,
  anon_sym_PRAGMA = 47,
  anon_sym_HALT = 48,
  anon_sym_NOP = 49,
  anon_sym_INCLUDE = 50,
  anon_sym_LABEL = 51,
  anon_sym_JUMP = 52,
  anon_sym_JUMP_DASHWHEN = 53,
  anon_sym_JUMP_DASHUNLESS = 54,
  anon_sym_AT = 55,
  anon_sym_RESET = 56,
  anon_sym_WAIT = 57,
  anon_sym_STORE = 58,
  anon_sym_LOAD = 59,
  anon_sym_CONVERT = 60,
  anon_sym_EXCHANGE = 61,
  anon_sym_MOVE = 62,
  anon_sym_NEG = 63,
  anon_sym_NOT = 64,
  anon_sym_TRUE = 65,
  anon_sym_FALSE = 66,
  anon_sym_AND = 67,
  anon_sym_OR = 68,
  anon_sym_IOR = 69,
  anon_sym_XOR = 70,
  anon_sym_ADD = 71,
  anon_sym_SUB = 72,
  anon_sym_MUL = 73,
  anon_sym_DIV = 74,
  anon_sym_EQ = 75,
  anon_sym_GT = 76,
  anon_sym_GE = 77,
  anon_sym_LT = 78,
  anon_sym_LE = 79,
  anon_sym_SIN = 80,
  anon_sym_COS = 81,
  anon_sym_SQRT = 82,
  anon_sym_EXP = 83,
  anon_sym_CIS = 84,
  anon_sym_i = 85,
  anon_sym_pi = 86,
  sym_nonblocking = 87,
  anon_sym_FILTER_DASHNODE = 88,
  sym_identifier = 89,
  anon_sym_ = 90,
  anon_sym_TAB = 91,
  sym__newline = 92,
  anon_sym_e = 93,
  anon_sym_E = 94,
  anon_sym_DOT = 95,
  aux_sym__int_token1 = 96,
  aux_sym__string_esc_inner_token1 = 97,
  sym__string_inner = 98,
  sym_quil = 99,
  sym__all_instr = 100,
  sym__instr = 101,
  sym_def_gate = 102,
  sym_def_gate_matrix = 103,
  sym_def_gate_as_permutation = 104,
  sym_def_pauli_gate = 105,
  sym_pauli_term = 106,
  sym_def_circuit = 107,
  sym_def_frame = 108,
  sym_frame_spec = 109,
  sym_frame_attr = 110,
  sym_def_waveform = 111,
  sym_def_calibration = 112,
  sym_def_measure_calibration = 113,
  sym_gate = 114,
  sym_modifiers = 115,
  sym__indented_instrs = 116,
  sym_params = 117,
  sym_matrix = 118,
  sym_matrix_row = 119,
  sym_expression = 120,
  sym__product = 121,
  sym__power = 122,
  sym__atom = 123,
  sym_variables = 124,
  sym_variable = 125,
  sym_fence = 126,
  sym_pulse = 127,
  sym_delay = 128,
  sym_delay_qubits = 129,
  sym_delay_frames = 130,
  sym_set_frequency = 131,
  sym_shift_frequency = 132,
  sym_shift_phase = 133,
  sym_set_phase = 134,
  sym_swap_phase = 135,
  sym_set_scale = 136,
  sym_declare = 137,
  sym_offset_descriptor = 138,
  sym_capture = 139,
  sym_raw_capture = 140,
  sym_addr = 141,
  sym_pragma = 142,
  sym_pragma_name = 143,
  sym_measure = 144,
  sym_halt = 145,
  sym_nop = 146,
  sym_include = 147,
  sym_def_label = 148,
  sym_jump = 149,
  sym_jump_when = 150,
  sym_jump_unless = 151,
  sym_label = 152,
  sym_reset = 153,
  sym_wait = 154,
  sym_store = 155,
  sym_load = 156,
  sym_convert = 157,
  sym_exchange = 158,
  sym_move = 159,
  sym_classical_unary = 160,
  sym_classical_binary = 161,
  sym_logical_binary_op = 162,
  sym_arithmetic_binary_op = 163,
  sym_classical_comparison = 164,
  sym_qubit_designator = 165,
  sym_qubit = 166,
  sym_qubit_variables = 167,
  sym_qubit_variable = 168,
  sym_named_param = 169,
  sym_waveform = 170,
  sym_waveform_name = 171,
  sym_frame = 172,
  sym_function = 173,
  sym_number = 174,
  sym_signed_number = 175,
  sym_keyword = 176,
  sym__newline_tab = 177,
  sym__float = 178,
  sym__decimal = 179,
  sym__signed_int = 180,
  aux_sym__int = 181,
  sym__string = 182,
  sym__escaped_string = 183,
  sym__string_esc_inner = 184,
  aux_sym_quil_repeat1 = 185,
  aux_sym_quil_repeat2 = 186,
  aux_sym_def_pauli_gate_repeat1 = 187,
  aux_sym_def_circuit_repeat1 = 188,
  aux_sym_def_frame_repeat1 = 189,
  aux_sym_modifiers_repeat1 = 190,
  aux_sym__indented_instrs_repeat1 = 191,
  aux_sym_params_repeat1 = 192,
  aux_sym_matrix_repeat1 = 193,
  aux_sym_variables_repeat1 = 194,
  aux_sym_delay_frames_repeat1 = 195,
  aux_sym_declare_repeat1 = 196,
  aux_sym_pragma_repeat1 = 197,
  aux_sym_qubit_variables_repeat1 = 198,
  aux_sym_waveform_repeat1 = 199,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DEFGATE] = "DEFGATE",
  [anon_sym_AS] = "AS",
  [anon_sym_MATRIX] = "MATRIX",
  [anon_sym_COLON] = ":",
  [anon_sym_PERMUTATION] = "PERMUTATION",
  [anon_sym_PAULI_DASHSUM] = "PAULI-SUM",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DEFCIRCUIT] = "DEFCIRCUIT",
  [anon_sym_DEFFRAME] = "DEFFRAME",
  [anon_sym_SAMPLE_DASHRATE] = "SAMPLE-RATE",
  [anon_sym_INITIAL_DASHFREQUENCY] = "INITIAL-FREQUENCY",
  [anon_sym_DIRECTION] = "DIRECTION",
  [anon_sym_HARDWARE_DASHOBJECT] = "HARDWARE-OBJECT",
  [anon_sym_CENTER_DASHFREQUENCY] = "CENTER-FREQUENCY",
  [anon_sym_DEFWAVEFORM] = "DEFWAVEFORM",
  [anon_sym_DEFCAL] = "DEFCAL",
  [anon_sym_MEASURE] = "MEASURE",
  [anon_sym_CONTROLLED] = "CONTROLLED",
  [anon_sym_DAGGER] = "DAGGER",
  [anon_sym_FORKED] = "FORKED",
  [anon_sym_COMMA] = ",",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_CARET] = "^",
  [anon_sym_PERCENT] = "%",
  [anon_sym_FENCE] = "FENCE",
  [anon_sym_PULSE] = "PULSE",
  [anon_sym_DELAY] = "DELAY",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SET_DASHFREQUENCY] = "SET-FREQUENCY",
  [anon_sym_SHIFT_DASHFREQUENCY] = "SHIFT-FREQUENCY",
  [anon_sym_SHIFT_DASHPHASE] = "SHIFT-PHASE",
  [anon_sym_SET_DASHPHASE] = "SET-PHASE",
  [anon_sym_SWAP_DASHPHASE] = "SWAP-PHASE",
  [anon_sym_SET_DASHSCALE] = "SET-SCALE",
  [anon_sym_DECLARE] = "DECLARE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SHARING] = "SHARING",
  [anon_sym_OFFSET] = "OFFSET",
  [anon_sym_CAPTURE] = "CAPTURE",
  [anon_sym_RAW_DASHCAPTURE] = "RAW-CAPTURE",
  [anon_sym_PRAGMA] = "PRAGMA",
  [anon_sym_HALT] = "HALT",
  [anon_sym_NOP] = "NOP",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_LABEL] = "LABEL",
  [anon_sym_JUMP] = "JUMP",
  [anon_sym_JUMP_DASHWHEN] = "JUMP-WHEN",
  [anon_sym_JUMP_DASHUNLESS] = "JUMP-UNLESS",
  [anon_sym_AT] = "@",
  [anon_sym_RESET] = "RESET",
  [anon_sym_WAIT] = "WAIT",
  [anon_sym_STORE] = "STORE",
  [anon_sym_LOAD] = "LOAD",
  [anon_sym_CONVERT] = "CONVERT",
  [anon_sym_EXCHANGE] = "EXCHANGE",
  [anon_sym_MOVE] = "MOVE",
  [anon_sym_NEG] = "NEG",
  [anon_sym_NOT] = "NOT",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_IOR] = "IOR",
  [anon_sym_XOR] = "XOR",
  [anon_sym_ADD] = "ADD",
  [anon_sym_SUB] = "SUB",
  [anon_sym_MUL] = "MUL",
  [anon_sym_DIV] = "DIV",
  [anon_sym_EQ] = "EQ",
  [anon_sym_GT] = "GT",
  [anon_sym_GE] = "GE",
  [anon_sym_LT] = "LT",
  [anon_sym_LE] = "LE",
  [anon_sym_SIN] = "SIN",
  [anon_sym_COS] = "COS",
  [anon_sym_SQRT] = "SQRT",
  [anon_sym_EXP] = "EXP",
  [anon_sym_CIS] = "CIS",
  [anon_sym_i] = "i",
  [anon_sym_pi] = "pi",
  [sym_nonblocking] = "nonblocking",
  [anon_sym_FILTER_DASHNODE] = "FILTER-NODE",
  [sym_identifier] = "identifier",
  [anon_sym_] = "    ",
  [anon_sym_TAB] = "\t",
  [sym__newline] = "_newline",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_DOT] = ".",
  [aux_sym__int_token1] = "_int_token1",
  [aux_sym__string_esc_inner_token1] = "_string_esc_inner_token1",
  [sym__string_inner] = "_string_inner",
  [sym_quil] = "quil",
  [sym__all_instr] = "_all_instr",
  [sym__instr] = "_instr",
  [sym_def_gate] = "def_gate",
  [sym_def_gate_matrix] = "def_gate_matrix",
  [sym_def_gate_as_permutation] = "def_gate_as_permutation",
  [sym_def_pauli_gate] = "def_pauli_gate",
  [sym_pauli_term] = "pauli_term",
  [sym_def_circuit] = "def_circuit",
  [sym_def_frame] = "def_frame",
  [sym_frame_spec] = "frame_spec",
  [sym_frame_attr] = "frame_attr",
  [sym_def_waveform] = "def_waveform",
  [sym_def_calibration] = "def_calibration",
  [sym_def_measure_calibration] = "def_measure_calibration",
  [sym_gate] = "gate",
  [sym_modifiers] = "modifiers",
  [sym__indented_instrs] = "_indented_instrs",
  [sym_params] = "params",
  [sym_matrix] = "matrix",
  [sym_matrix_row] = "matrix_row",
  [sym_expression] = "expression",
  [sym__product] = "_product",
  [sym__power] = "_power",
  [sym__atom] = "_atom",
  [sym_variables] = "variables",
  [sym_variable] = "variable",
  [sym_fence] = "fence",
  [sym_pulse] = "pulse",
  [sym_delay] = "delay",
  [sym_delay_qubits] = "delay_qubits",
  [sym_delay_frames] = "delay_frames",
  [sym_set_frequency] = "set_frequency",
  [sym_shift_frequency] = "shift_frequency",
  [sym_shift_phase] = "shift_phase",
  [sym_set_phase] = "set_phase",
  [sym_swap_phase] = "swap_phase",
  [sym_set_scale] = "set_scale",
  [sym_declare] = "declare",
  [sym_offset_descriptor] = "offset_descriptor",
  [sym_capture] = "capture",
  [sym_raw_capture] = "raw_capture",
  [sym_addr] = "addr",
  [sym_pragma] = "pragma",
  [sym_pragma_name] = "pragma_name",
  [sym_measure] = "measure",
  [sym_halt] = "halt",
  [sym_nop] = "nop",
  [sym_include] = "include",
  [sym_def_label] = "def_label",
  [sym_jump] = "jump",
  [sym_jump_when] = "jump_when",
  [sym_jump_unless] = "jump_unless",
  [sym_label] = "label",
  [sym_reset] = "reset",
  [sym_wait] = "wait",
  [sym_store] = "store",
  [sym_load] = "load",
  [sym_convert] = "convert",
  [sym_exchange] = "exchange",
  [sym_move] = "move",
  [sym_classical_unary] = "classical_unary",
  [sym_classical_binary] = "classical_binary",
  [sym_logical_binary_op] = "logical_binary_op",
  [sym_arithmetic_binary_op] = "arithmetic_binary_op",
  [sym_classical_comparison] = "classical_comparison",
  [sym_qubit_designator] = "qubit_designator",
  [sym_qubit] = "qubit",
  [sym_qubit_variables] = "qubit_variables",
  [sym_qubit_variable] = "qubit_variable",
  [sym_named_param] = "named_param",
  [sym_waveform] = "waveform",
  [sym_waveform_name] = "waveform_name",
  [sym_frame] = "frame",
  [sym_function] = "function",
  [sym_number] = "number",
  [sym_signed_number] = "signed_number",
  [sym_keyword] = "keyword",
  [sym__newline_tab] = "_newline_tab",
  [sym__float] = "_float",
  [sym__decimal] = "_decimal",
  [sym__signed_int] = "_signed_int",
  [aux_sym__int] = "_int",
  [sym__string] = "_string",
  [sym__escaped_string] = "_escaped_string",
  [sym__string_esc_inner] = "_string_esc_inner",
  [aux_sym_quil_repeat1] = "quil_repeat1",
  [aux_sym_quil_repeat2] = "quil_repeat2",
  [aux_sym_def_pauli_gate_repeat1] = "def_pauli_gate_repeat1",
  [aux_sym_def_circuit_repeat1] = "def_circuit_repeat1",
  [aux_sym_def_frame_repeat1] = "def_frame_repeat1",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
  [aux_sym__indented_instrs_repeat1] = "_indented_instrs_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_matrix_repeat1] = "matrix_repeat1",
  [aux_sym_variables_repeat1] = "variables_repeat1",
  [aux_sym_delay_frames_repeat1] = "delay_frames_repeat1",
  [aux_sym_declare_repeat1] = "declare_repeat1",
  [aux_sym_pragma_repeat1] = "pragma_repeat1",
  [aux_sym_qubit_variables_repeat1] = "qubit_variables_repeat1",
  [aux_sym_waveform_repeat1] = "waveform_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_DEFGATE] = anon_sym_DEFGATE,
  [anon_sym_AS] = anon_sym_AS,
  [anon_sym_MATRIX] = anon_sym_MATRIX,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PERMUTATION] = anon_sym_PERMUTATION,
  [anon_sym_PAULI_DASHSUM] = anon_sym_PAULI_DASHSUM,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DEFCIRCUIT] = anon_sym_DEFCIRCUIT,
  [anon_sym_DEFFRAME] = anon_sym_DEFFRAME,
  [anon_sym_SAMPLE_DASHRATE] = anon_sym_SAMPLE_DASHRATE,
  [anon_sym_INITIAL_DASHFREQUENCY] = anon_sym_INITIAL_DASHFREQUENCY,
  [anon_sym_DIRECTION] = anon_sym_DIRECTION,
  [anon_sym_HARDWARE_DASHOBJECT] = anon_sym_HARDWARE_DASHOBJECT,
  [anon_sym_CENTER_DASHFREQUENCY] = anon_sym_CENTER_DASHFREQUENCY,
  [anon_sym_DEFWAVEFORM] = anon_sym_DEFWAVEFORM,
  [anon_sym_DEFCAL] = anon_sym_DEFCAL,
  [anon_sym_MEASURE] = anon_sym_MEASURE,
  [anon_sym_CONTROLLED] = anon_sym_CONTROLLED,
  [anon_sym_DAGGER] = anon_sym_DAGGER,
  [anon_sym_FORKED] = anon_sym_FORKED,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_FENCE] = anon_sym_FENCE,
  [anon_sym_PULSE] = anon_sym_PULSE,
  [anon_sym_DELAY] = anon_sym_DELAY,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SET_DASHFREQUENCY] = anon_sym_SET_DASHFREQUENCY,
  [anon_sym_SHIFT_DASHFREQUENCY] = anon_sym_SHIFT_DASHFREQUENCY,
  [anon_sym_SHIFT_DASHPHASE] = anon_sym_SHIFT_DASHPHASE,
  [anon_sym_SET_DASHPHASE] = anon_sym_SET_DASHPHASE,
  [anon_sym_SWAP_DASHPHASE] = anon_sym_SWAP_DASHPHASE,
  [anon_sym_SET_DASHSCALE] = anon_sym_SET_DASHSCALE,
  [anon_sym_DECLARE] = anon_sym_DECLARE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SHARING] = anon_sym_SHARING,
  [anon_sym_OFFSET] = anon_sym_OFFSET,
  [anon_sym_CAPTURE] = anon_sym_CAPTURE,
  [anon_sym_RAW_DASHCAPTURE] = anon_sym_RAW_DASHCAPTURE,
  [anon_sym_PRAGMA] = anon_sym_PRAGMA,
  [anon_sym_HALT] = anon_sym_HALT,
  [anon_sym_NOP] = anon_sym_NOP,
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [anon_sym_LABEL] = anon_sym_LABEL,
  [anon_sym_JUMP] = anon_sym_JUMP,
  [anon_sym_JUMP_DASHWHEN] = anon_sym_JUMP_DASHWHEN,
  [anon_sym_JUMP_DASHUNLESS] = anon_sym_JUMP_DASHUNLESS,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_RESET] = anon_sym_RESET,
  [anon_sym_WAIT] = anon_sym_WAIT,
  [anon_sym_STORE] = anon_sym_STORE,
  [anon_sym_LOAD] = anon_sym_LOAD,
  [anon_sym_CONVERT] = anon_sym_CONVERT,
  [anon_sym_EXCHANGE] = anon_sym_EXCHANGE,
  [anon_sym_MOVE] = anon_sym_MOVE,
  [anon_sym_NEG] = anon_sym_NEG,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_IOR] = anon_sym_IOR,
  [anon_sym_XOR] = anon_sym_XOR,
  [anon_sym_ADD] = anon_sym_ADD,
  [anon_sym_SUB] = anon_sym_SUB,
  [anon_sym_MUL] = anon_sym_MUL,
  [anon_sym_DIV] = anon_sym_DIV,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GE] = anon_sym_GE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LE] = anon_sym_LE,
  [anon_sym_SIN] = anon_sym_SIN,
  [anon_sym_COS] = anon_sym_COS,
  [anon_sym_SQRT] = anon_sym_SQRT,
  [anon_sym_EXP] = anon_sym_EXP,
  [anon_sym_CIS] = anon_sym_CIS,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_pi] = anon_sym_pi,
  [sym_nonblocking] = sym_nonblocking,
  [anon_sym_FILTER_DASHNODE] = anon_sym_FILTER_DASHNODE,
  [sym_identifier] = sym_identifier,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [sym__newline] = sym__newline,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__int_token1] = aux_sym__int_token1,
  [aux_sym__string_esc_inner_token1] = aux_sym__string_esc_inner_token1,
  [sym__string_inner] = sym__string_inner,
  [sym_quil] = sym_quil,
  [sym__all_instr] = sym__all_instr,
  [sym__instr] = sym__instr,
  [sym_def_gate] = sym_def_gate,
  [sym_def_gate_matrix] = sym_def_gate_matrix,
  [sym_def_gate_as_permutation] = sym_def_gate_as_permutation,
  [sym_def_pauli_gate] = sym_def_pauli_gate,
  [sym_pauli_term] = sym_pauli_term,
  [sym_def_circuit] = sym_def_circuit,
  [sym_def_frame] = sym_def_frame,
  [sym_frame_spec] = sym_frame_spec,
  [sym_frame_attr] = sym_frame_attr,
  [sym_def_waveform] = sym_def_waveform,
  [sym_def_calibration] = sym_def_calibration,
  [sym_def_measure_calibration] = sym_def_measure_calibration,
  [sym_gate] = sym_gate,
  [sym_modifiers] = sym_modifiers,
  [sym__indented_instrs] = sym__indented_instrs,
  [sym_params] = sym_params,
  [sym_matrix] = sym_matrix,
  [sym_matrix_row] = sym_matrix_row,
  [sym_expression] = sym_expression,
  [sym__product] = sym__product,
  [sym__power] = sym__power,
  [sym__atom] = sym__atom,
  [sym_variables] = sym_variables,
  [sym_variable] = sym_variable,
  [sym_fence] = sym_fence,
  [sym_pulse] = sym_pulse,
  [sym_delay] = sym_delay,
  [sym_delay_qubits] = sym_delay_qubits,
  [sym_delay_frames] = sym_delay_frames,
  [sym_set_frequency] = sym_set_frequency,
  [sym_shift_frequency] = sym_shift_frequency,
  [sym_shift_phase] = sym_shift_phase,
  [sym_set_phase] = sym_set_phase,
  [sym_swap_phase] = sym_swap_phase,
  [sym_set_scale] = sym_set_scale,
  [sym_declare] = sym_declare,
  [sym_offset_descriptor] = sym_offset_descriptor,
  [sym_capture] = sym_capture,
  [sym_raw_capture] = sym_raw_capture,
  [sym_addr] = sym_addr,
  [sym_pragma] = sym_pragma,
  [sym_pragma_name] = sym_pragma_name,
  [sym_measure] = sym_measure,
  [sym_halt] = sym_halt,
  [sym_nop] = sym_nop,
  [sym_include] = sym_include,
  [sym_def_label] = sym_def_label,
  [sym_jump] = sym_jump,
  [sym_jump_when] = sym_jump_when,
  [sym_jump_unless] = sym_jump_unless,
  [sym_label] = sym_label,
  [sym_reset] = sym_reset,
  [sym_wait] = sym_wait,
  [sym_store] = sym_store,
  [sym_load] = sym_load,
  [sym_convert] = sym_convert,
  [sym_exchange] = sym_exchange,
  [sym_move] = sym_move,
  [sym_classical_unary] = sym_classical_unary,
  [sym_classical_binary] = sym_classical_binary,
  [sym_logical_binary_op] = sym_logical_binary_op,
  [sym_arithmetic_binary_op] = sym_arithmetic_binary_op,
  [sym_classical_comparison] = sym_classical_comparison,
  [sym_qubit_designator] = sym_qubit_designator,
  [sym_qubit] = sym_qubit,
  [sym_qubit_variables] = sym_qubit_variables,
  [sym_qubit_variable] = sym_qubit_variable,
  [sym_named_param] = sym_named_param,
  [sym_waveform] = sym_waveform,
  [sym_waveform_name] = sym_waveform_name,
  [sym_frame] = sym_frame,
  [sym_function] = sym_function,
  [sym_number] = sym_number,
  [sym_signed_number] = sym_signed_number,
  [sym_keyword] = sym_keyword,
  [sym__newline_tab] = sym__newline_tab,
  [sym__float] = sym__float,
  [sym__decimal] = sym__decimal,
  [sym__signed_int] = sym__signed_int,
  [aux_sym__int] = aux_sym__int,
  [sym__string] = sym__string,
  [sym__escaped_string] = sym__escaped_string,
  [sym__string_esc_inner] = sym__string_esc_inner,
  [aux_sym_quil_repeat1] = aux_sym_quil_repeat1,
  [aux_sym_quil_repeat2] = aux_sym_quil_repeat2,
  [aux_sym_def_pauli_gate_repeat1] = aux_sym_def_pauli_gate_repeat1,
  [aux_sym_def_circuit_repeat1] = aux_sym_def_circuit_repeat1,
  [aux_sym_def_frame_repeat1] = aux_sym_def_frame_repeat1,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
  [aux_sym__indented_instrs_repeat1] = aux_sym__indented_instrs_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_matrix_repeat1] = aux_sym_matrix_repeat1,
  [aux_sym_variables_repeat1] = aux_sym_variables_repeat1,
  [aux_sym_delay_frames_repeat1] = aux_sym_delay_frames_repeat1,
  [aux_sym_declare_repeat1] = aux_sym_declare_repeat1,
  [aux_sym_pragma_repeat1] = aux_sym_pragma_repeat1,
  [aux_sym_qubit_variables_repeat1] = aux_sym_qubit_variables_repeat1,
  [aux_sym_waveform_repeat1] = aux_sym_waveform_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DEFGATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MATRIX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERMUTATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PAULI_DASHSUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFCIRCUIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFFRAME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAMPLE_DASHRATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INITIAL_DASHFREQUENCY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIRECTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HARDWARE_DASHOBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CENTER_DASHFREQUENCY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFWAVEFORM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFCAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MEASURE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTROLLED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DAGGER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FORKED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FENCE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PULSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET_DASHFREQUENCY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHIFT_DASHFREQUENCY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHIFT_DASHPHASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET_DASHPHASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SWAP_DASHPHASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET_DASHSCALE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DECLARE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHARING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OFFSET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAPTURE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RAW_DASHCAPTURE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRAGMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HALT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LABEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JUMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JUMP_DASHWHEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JUMP_DASHUNLESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RESET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WAIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONVERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXCHANGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MUL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQRT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CIS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pi] = {
    .visible = true,
    .named = false,
  },
  [sym_nonblocking] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_FILTER_DASHNODE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_esc_inner_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__string_inner] = {
    .visible = false,
    .named = true,
  },
  [sym_quil] = {
    .visible = true,
    .named = true,
  },
  [sym__all_instr] = {
    .visible = false,
    .named = true,
  },
  [sym__instr] = {
    .visible = false,
    .named = true,
  },
  [sym_def_gate] = {
    .visible = true,
    .named = true,
  },
  [sym_def_gate_matrix] = {
    .visible = true,
    .named = true,
  },
  [sym_def_gate_as_permutation] = {
    .visible = true,
    .named = true,
  },
  [sym_def_pauli_gate] = {
    .visible = true,
    .named = true,
  },
  [sym_pauli_term] = {
    .visible = true,
    .named = true,
  },
  [sym_def_circuit] = {
    .visible = true,
    .named = true,
  },
  [sym_def_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_frame_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_frame_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_def_waveform] = {
    .visible = true,
    .named = true,
  },
  [sym_def_calibration] = {
    .visible = true,
    .named = true,
  },
  [sym_def_measure_calibration] = {
    .visible = true,
    .named = true,
  },
  [sym_gate] = {
    .visible = true,
    .named = true,
  },
  [sym_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__indented_instrs] = {
    .visible = false,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_matrix] = {
    .visible = true,
    .named = true,
  },
  [sym_matrix_row] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__product] = {
    .visible = false,
    .named = true,
  },
  [sym__power] = {
    .visible = false,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_fence] = {
    .visible = true,
    .named = true,
  },
  [sym_pulse] = {
    .visible = true,
    .named = true,
  },
  [sym_delay] = {
    .visible = true,
    .named = true,
  },
  [sym_delay_qubits] = {
    .visible = true,
    .named = true,
  },
  [sym_delay_frames] = {
    .visible = true,
    .named = true,
  },
  [sym_set_frequency] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_frequency] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_phase] = {
    .visible = true,
    .named = true,
  },
  [sym_set_phase] = {
    .visible = true,
    .named = true,
  },
  [sym_swap_phase] = {
    .visible = true,
    .named = true,
  },
  [sym_set_scale] = {
    .visible = true,
    .named = true,
  },
  [sym_declare] = {
    .visible = true,
    .named = true,
  },
  [sym_offset_descriptor] = {
    .visible = true,
    .named = true,
  },
  [sym_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_addr] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma_name] = {
    .visible = true,
    .named = true,
  },
  [sym_measure] = {
    .visible = true,
    .named = true,
  },
  [sym_halt] = {
    .visible = true,
    .named = true,
  },
  [sym_nop] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_def_label] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_jump_when] = {
    .visible = true,
    .named = true,
  },
  [sym_jump_unless] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_reset] = {
    .visible = true,
    .named = true,
  },
  [sym_wait] = {
    .visible = true,
    .named = true,
  },
  [sym_store] = {
    .visible = true,
    .named = true,
  },
  [sym_load] = {
    .visible = true,
    .named = true,
  },
  [sym_convert] = {
    .visible = true,
    .named = true,
  },
  [sym_exchange] = {
    .visible = true,
    .named = true,
  },
  [sym_move] = {
    .visible = true,
    .named = true,
  },
  [sym_classical_unary] = {
    .visible = true,
    .named = true,
  },
  [sym_classical_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_binary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic_binary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_classical_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_qubit_designator] = {
    .visible = true,
    .named = true,
  },
  [sym_qubit] = {
    .visible = true,
    .named = true,
  },
  [sym_qubit_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_qubit_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_named_param] = {
    .visible = true,
    .named = true,
  },
  [sym_waveform] = {
    .visible = true,
    .named = true,
  },
  [sym_waveform_name] = {
    .visible = true,
    .named = true,
  },
  [sym_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_signed_number] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__newline_tab] = {
    .visible = false,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__signed_int] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__int] = {
    .visible = false,
    .named = false,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__escaped_string] = {
    .visible = false,
    .named = true,
  },
  [sym__string_esc_inner] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_quil_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quil_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_pauli_gate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_circuit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__indented_instrs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_matrix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_delay_frames_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declare_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pragma_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qubit_variables_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_waveform_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_declaration = 1,
  field_variable = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_declaration] = "declaration",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_declaration, 2},
    {field_variable, 1},
  [2] =
    {field_declaration, 2},
    {field_declaration, 3},
    {field_declaration, 4},
    {field_declaration, 5},
    {field_variable, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 24,
  [31] = 31,
  [32] = 29,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 22,
  [38] = 34,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 43,
  [46] = 46,
  [47] = 46,
  [48] = 9,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 9,
  [56] = 9,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 16,
  [62] = 9,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 67,
  [71] = 71,
  [72] = 51,
  [73] = 73,
  [74] = 73,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 76,
  [80] = 80,
  [81] = 51,
  [82] = 50,
  [83] = 83,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 50,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 83,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 88,
  [109] = 102,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 102,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 125,
  [128] = 128,
  [129] = 123,
  [130] = 126,
  [131] = 131,
  [132] = 128,
  [133] = 120,
  [134] = 134,
  [135] = 131,
  [136] = 134,
  [137] = 121,
  [138] = 138,
  [139] = 139,
  [140] = 138,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 83,
  [149] = 149,
  [150] = 125,
  [151] = 126,
  [152] = 143,
  [153] = 139,
  [154] = 145,
  [155] = 125,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 16,
  [160] = 83,
  [161] = 53,
  [162] = 162,
  [163] = 163,
  [164] = 9,
  [165] = 165,
  [166] = 126,
  [167] = 165,
  [168] = 53,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 169,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 181,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 188,
  [195] = 58,
  [196] = 196,
  [197] = 197,
  [198] = 174,
  [199] = 9,
  [200] = 53,
  [201] = 201,
  [202] = 202,
  [203] = 53,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 58,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 210,
  [243] = 241,
  [244] = 204,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 238,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 219,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 231,
  [259] = 259,
  [260] = 260,
  [261] = 240,
  [262] = 51,
  [263] = 263,
  [264] = 204,
  [265] = 265,
  [266] = 266,
  [267] = 58,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 251,
  [273] = 273,
  [274] = 274,
  [275] = 269,
  [276] = 276,
  [277] = 277,
  [278] = 276,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 239,
  [283] = 283,
  [284] = 284,
  [285] = 231,
  [286] = 234,
  [287] = 233,
  [288] = 288,
  [289] = 239,
  [290] = 239,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 231,
  [296] = 296,
  [297] = 281,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 302,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 301,
  [312] = 306,
  [313] = 302,
  [314] = 232,
  [315] = 315,
  [316] = 316,
  [317] = 301,
  [318] = 318,
  [319] = 316,
  [320] = 316,
  [321] = 316,
  [322] = 223,
  [323] = 323,
  [324] = 51,
  [325] = 325,
  [326] = 58,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 310,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 305,
  [340] = 257,
  [341] = 341,
  [342] = 60,
  [343] = 223,
  [344] = 344,
  [345] = 327,
  [346] = 83,
  [347] = 338,
  [348] = 302,
  [349] = 349,
  [350] = 245,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 60,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 16,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 374,
  [414] = 411,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 415,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 374,
  [429] = 411,
  [430] = 430,
  [431] = 431,
  [432] = 415,
  [433] = 433,
  [434] = 374,
  [435] = 334,
  [436] = 436,
  [437] = 437,
  [438] = 374,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 412,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 412,
  [449] = 449,
  [450] = 337,
  [451] = 451,
  [452] = 391,
  [453] = 453,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(393);
      if (lookahead == '"') ADVANCE(453);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '%') ADVANCE(445);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(408);
      if (lookahead == '*') ADVANCE(439);
      if (lookahead == '+') ADVANCE(435);
      if (lookahead == ',') ADVANCE(434);
      if (lookahead == '-') ADVANCE(437);
      if (lookahead == '.') ADVANCE(891);
      if (lookahead == '/') ADVANCE(441);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(401);
      if (lookahead == '@') ADVANCE(496);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(889);
      if (lookahead == 'F') ADVANCE(57);
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(58);
      if (lookahead == 'I') ADVANCE(251);
      if (lookahead == 'J') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(59);
      if (lookahead == 'M') ADVANCE(60);
      if (lookahead == 'N') ADVANCE(161);
      if (lookahead == 'O') ADVANCE(189);
      if (lookahead == 'P') ADVANCE(77);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(304);
      if (lookahead == 'W') ADVANCE(62);
      if (lookahead == 'X') ADVANCE(275);
      if (lookahead == '[') ADVANCE(469);
      if (lookahead == ']') ADVANCE(471);
      if (lookahead == '^') ADVANCE(443);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(877);
      if (lookahead == ' ') ADVANCE(876);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(877);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(877);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(877);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(878);
      if (lookahead == '"') ADVANCE(454);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'D') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(290);
      if (lookahead == 'F') ADVANCE(71);
      if (lookahead == 'G') ADVANCE(159);
      if (lookahead == 'H') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'J') ADVANCE(362);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'M') ADVANCE(89);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == 'P') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(301);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == 'X') ADVANCE(272);
      if (lookahead == '^') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(878);
      if (lookahead == '"') ADVANCE(454);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(621);
      if (lookahead == 'C') ADVANCE(564);
      if (lookahead == 'D') ADVANCE(566);
      if (lookahead == 'E') ADVANCE(769);
      if (lookahead == 'F') ADVANCE(569);
      if (lookahead == 'G') ADVANCE(631);
      if (lookahead == 'H') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(737);
      if (lookahead == 'J') ADVANCE(837);
      if (lookahead == 'L') ADVANCE(571);
      if (lookahead == 'M') ADVANCE(587);
      if (lookahead == 'N') ADVANCE(654);
      if (lookahead == 'O') ADVANCE(679);
      if (lookahead == 'P') ADVANCE(584);
      if (lookahead == 'R') ADVANCE(572);
      if (lookahead == 'S') ADVANCE(591);
      if (lookahead == 'T') ADVANCE(775);
      if (lookahead == 'W') ADVANCE(578);
      if (lookahead == 'X') ADVANCE(754);
      if (lookahead == '^') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 'p') ADVANCE(863);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(879);
      if (lookahead == '%') ADVANCE(445);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(439);
      if (lookahead == '+') ADVANCE(435);
      if (lookahead == ',') ADVANCE(434);
      if (lookahead == '-') ADVANCE(437);
      if (lookahead == '.') ADVANCE(891);
      if (lookahead == '/') ADVANCE(441);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(401);
      if (lookahead == 'E') ADVANCE(887);
      if (lookahead == 'O') ADVANCE(188);
      if (lookahead == 'S') ADVANCE(208);
      if (lookahead == '[') ADVANCE(469);
      if (lookahead == '^') ADVANCE(443);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(880);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(622);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(566);
      if (lookahead == 'E') ADVANCE(768);
      if (lookahead == 'F') ADVANCE(570);
      if (lookahead == 'G') ADVANCE(631);
      if (lookahead == 'H') ADVANCE(576);
      if (lookahead == 'I') ADVANCE(740);
      if (lookahead == 'J') ADVANCE(837);
      if (lookahead == 'L') ADVANCE(571);
      if (lookahead == 'M') ADVANCE(655);
      if (lookahead == 'N') ADVANCE(654);
      if (lookahead == 'O') ADVANCE(774);
      if (lookahead == 'P') ADVANCE(781);
      if (lookahead == 'R') ADVANCE(572);
      if (lookahead == 'S') ADVANCE(632);
      if (lookahead == 'T') ADVANCE(775);
      if (lookahead == 'W') ADVANCE(578);
      if (lookahead == 'X') ADVANCE(754);
      if (lookahead == 'i' ||
          lookahead == 'p') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(881);
      if (lookahead == '"') ADVANCE(454);
      if (lookahead == '%') ADVANCE(446);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(215);
      if (lookahead == 'E') ADVANCE(382);
      if (lookahead == 'S') ADVANCE(216);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == '^') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(881);
      if (lookahead == '"') ADVANCE(454);
      if (lookahead == '%') ADVANCE(446);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(698);
      if (lookahead == 'E') ADVANCE(857);
      if (lookahead == 'S') ADVANCE(701);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == '^') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 'p') ADVANCE(863);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(882);
      if (lookahead == '%') ADVANCE(446);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(215);
      if (lookahead == 'E') ADVANCE(890);
      if (lookahead == 'S') ADVANCE(216);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == '^') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(886);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(882);
      if (lookahead == '%') ADVANCE(446);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(698);
      if (lookahead == 'E') ADVANCE(888);
      if (lookahead == 'S') ADVANCE(701);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == '^') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(885);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 'p') ADVANCE(863);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(883);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == 'i' ||
          lookahead == 'p') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(883);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'i' &&
          lookahead != 'p' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(453);
      if (lookahead == '%') ADVANCE(445);
      if (lookahead == ')') ADVANCE(408);
      if (lookahead == '*') ADVANCE(439);
      if (lookahead == '+') ADVANCE(435);
      if (lookahead == ',') ADVANCE(434);
      if (lookahead == '-') ADVANCE(437);
      if (lookahead == '.') ADVANCE(891);
      if (lookahead == '/') ADVANCE(441);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(401);
      if (lookahead == 'E') ADVANCE(887);
      if (lookahead == ']') ADVANCE(471);
      if (lookahead == '^') ADVANCE(443);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(454);
      if (lookahead == '%') ADVANCE(446);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(215);
      if (lookahead == 'E') ADVANCE(382);
      if (lookahead == 'S') ADVANCE(216);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(454);
      if (lookahead == '%') ADVANCE(446);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(698);
      if (lookahead == 'E') ADVANCE(857);
      if (lookahead == 'S') ADVANCE(701);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 'p') ADVANCE(863);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(622);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(566);
      if (lookahead == 'E') ADVANCE(768);
      if (lookahead == 'F') ADVANCE(570);
      if (lookahead == 'G') ADVANCE(631);
      if (lookahead == 'H') ADVANCE(576);
      if (lookahead == 'I') ADVANCE(740);
      if (lookahead == 'J') ADVANCE(837);
      if (lookahead == 'L') ADVANCE(571);
      if (lookahead == 'M') ADVANCE(655);
      if (lookahead == 'N') ADVANCE(654);
      if (lookahead == 'O') ADVANCE(774);
      if (lookahead == 'P') ADVANCE(781);
      if (lookahead == 'R') ADVANCE(572);
      if (lookahead == 'S') ADVANCE(632);
      if (lookahead == 'T') ADVANCE(775);
      if (lookahead == 'W') ADVANCE(578);
      if (lookahead == 'X') ADVANCE(754);
      if (lookahead == 'i' ||
          lookahead == 'p') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(402);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == 'i' ||
          lookahead == 'p') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(402);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != 'i' &&
          lookahead != 'p' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ':') ADVANCE(402);
      if (lookahead == 'A') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != 'i' &&
          lookahead != 'p' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ':') ADVANCE(402);
      if (lookahead == 'A') ADVANCE(803);
      if (lookahead == 'i' ||
          lookahead == 'p') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'D') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(290);
      if (lookahead == 'F') ADVANCE(71);
      if (lookahead == 'G') ADVANCE(159);
      if (lookahead == 'H') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'J') ADVANCE(362);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'M') ADVANCE(89);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == 'P') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(301);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == 'X') ADVANCE(272);
      if (lookahead == '^') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(440);
      if (lookahead == '+') ADVANCE(436);
      if (lookahead == '-') ADVANCE(438);
      if (lookahead == '/') ADVANCE(442);
      if (lookahead == 'A') ADVANCE(621);
      if (lookahead == 'C') ADVANCE(564);
      if (lookahead == 'D') ADVANCE(566);
      if (lookahead == 'E') ADVANCE(769);
      if (lookahead == 'F') ADVANCE(569);
      if (lookahead == 'G') ADVANCE(631);
      if (lookahead == 'H') ADVANCE(575);
      if (lookahead == 'I') ADVANCE(737);
      if (lookahead == 'J') ADVANCE(837);
      if (lookahead == 'L') ADVANCE(571);
      if (lookahead == 'M') ADVANCE(587);
      if (lookahead == 'N') ADVANCE(654);
      if (lookahead == 'O') ADVANCE(679);
      if (lookahead == 'P') ADVANCE(584);
      if (lookahead == 'R') ADVANCE(572);
      if (lookahead == 'S') ADVANCE(591);
      if (lookahead == 'T') ADVANCE(775);
      if (lookahead == 'W') ADVANCE(578);
      if (lookahead == 'X') ADVANCE(754);
      if (lookahead == '^') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 'p') ADVANCE(863);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(193);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(195);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(795);
      if (lookahead == 'P') ADVANCE(691);
      if (lookahead == 'S') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(799);
      if (lookahead == 'P') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(752);
      if (lookahead == 'W') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(196);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(123);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(336);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(287);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(273);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(262);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(322);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(197);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 'p') ADVANCE(863);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 54:
      if (lookahead == '9') ADVANCE(893);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(284);
      if (lookahead == 'E') ADVANCE(261);
      if (lookahead == 'I') ADVANCE(326);
      if (lookahead == 'O') ADVANCE(252);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(201);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(295);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(237);
      if (lookahead == 'E') ADVANCE(253);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == 'O') ADVANCE(296);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(231);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(543);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(541);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(353);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'O') ADVANCE(377);
      if (lookahead == 'U') ADVANCE(225);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(379);
      if (lookahead == 'E') ADVANCE(329);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(217);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(383);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(480);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(69);
      if (lookahead == 'E') ADVANCE(289);
      if (lookahead == 'F') ADVANCE(72);
      if (lookahead == 'G') ADVANCE(159);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'J') ADVANCE(362);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'M') ADVANCE(164);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(300);
      if (lookahead == 'P') ADVANCE(306);
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'S') ADVANCE(160);
      if (lookahead == 'T') ADVANCE(301);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == 'X') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'i' &&
          lookahead != 'p' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(764);
      if (lookahead == 'E') ADVANCE(748);
      if (lookahead == 'I') ADVANCE(804);
      if (lookahead == 'O') ADVANCE(734);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(764);
      if (lookahead == 'O') ADVANCE(735);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'E') ADVANCE(611);
      if (lookahead == 'I') ADVANCE(851);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'E') ADVANCE(612);
      if (lookahead == 'I') ADVANCE(851);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(687);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(723);
      if (lookahead == 'E') ADVANCE(741);
      if (lookahead == 'I') ADVANCE(725);
      if (lookahead == 'O') ADVANCE(776);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(723);
      if (lookahead == 'E') ADVANCE(741);
      if (lookahead == 'O') ADVANCE(776);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(601);
      if (lookahead == 'E') ADVANCE(544);
      if (lookahead == 'O') ADVANCE(579);
      if (lookahead == 'T') ADVANCE(542);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(854);
      if (lookahead == 'E') ADVANCE(806);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(622);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(567);
      if (lookahead == 'E') ADVANCE(768);
      if (lookahead == 'F') ADVANCE(570);
      if (lookahead == 'G') ADVANCE(631);
      if (lookahead == 'H') ADVANCE(576);
      if (lookahead == 'I') ADVANCE(740);
      if (lookahead == 'J') ADVANCE(837);
      if (lookahead == 'L') ADVANCE(571);
      if (lookahead == 'M') ADVANCE(655);
      if (lookahead == 'N') ADVANCE(654);
      if (lookahead == 'O') ADVANCE(774);
      if (lookahead == 'P') ADVANCE(781);
      if (lookahead == 'R') ADVANCE(572);
      if (lookahead == 'S') ADVANCE(632);
      if (lookahead == 'T') ADVANCE(775);
      if (lookahead == 'W') ADVANCE(578);
      if (lookahead == 'X') ADVANCE(754);
      if (lookahead == 'i' ||
          lookahead == 'p') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(712);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(367);
      if (lookahead == 'E') ADVANCE(303);
      if (lookahead == 'R') ADVANCE(84);
      if (lookahead == 'U') ADVANCE(239);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(713);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(697);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(338);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(129);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(285);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(269);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(202);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(250);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(841);
      if (lookahead == 'E') ADVANCE(784);
      if (lookahead == 'R') ADVANCE(583);
      if (lookahead == 'U') ADVANCE(724);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(308);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(308);
      if (lookahead == 'I') ADVANCE(191);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(830);
      if (lookahead == 'E') ADVANCE(577);
      if (lookahead == 'O') ADVANCE(852);
      if (lookahead == 'U') ADVANCE(709);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(227);
      if (lookahead == 'I') ADVANCE(307);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(241);
      END_STATE();
    case 92:
      if (lookahead == 'A') ADVANCE(247);
      if (lookahead == 'E') ADVANCE(348);
      if (lookahead == 'H') ADVANCE(88);
      if (lookahead == 'I') ADVANCE(254);
      if (lookahead == 'Q') ADVANCE(311);
      if (lookahead == 'T') ADVANCE(277);
      if (lookahead == 'U') ADVANCE(105);
      if (lookahead == 'W') ADVANCE(82);
      END_STATE();
    case 93:
      if (lookahead == 'A') ADVANCE(378);
      END_STATE();
    case 94:
      if (lookahead == 'A') ADVANCE(730);
      if (lookahead == 'E') ADVANCE(824);
      if (lookahead == 'H') ADVANCE(589);
      if (lookahead == 'I') ADVANCE(738);
      if (lookahead == 'Q') ADVANCE(792);
      if (lookahead == 'T') ADVANCE(755);
      if (lookahead == 'U') ADVANCE(602);
      if (lookahead == 'W') ADVANCE(580);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 95:
      if (lookahead == 'A') ADVANCE(356);
      END_STATE();
    case 96:
      if (lookahead == 'A') ADVANCE(358);
      END_STATE();
    case 97:
      if (lookahead == 'A') ADVANCE(357);
      END_STATE();
    case 98:
      if (lookahead == 'A') ADVANCE(317);
      END_STATE();
    case 99:
      if (lookahead == 'A') ADVANCE(333);
      END_STATE();
    case 100:
      if (lookahead == 'A') ADVANCE(236);
      END_STATE();
    case 101:
      if (lookahead == 'A') ADVANCE(334);
      END_STATE();
    case 102:
      if (lookahead == 'A') ADVANCE(335);
      END_STATE();
    case 103:
      if (lookahead == 'A') ADVANCE(320);
      END_STATE();
    case 104:
      if (lookahead == 'A') ADVANCE(288);
      END_STATE();
    case 105:
      if (lookahead == 'B') ADVANCE(529);
      END_STATE();
    case 106:
      if (lookahead == 'B') ADVANCE(222);
      END_STATE();
    case 107:
      if (lookahead == 'B') ADVANCE(170);
      END_STATE();
    case 108:
      if (lookahead == 'B') ADVANCE(228);
      END_STATE();
    case 109:
      if (lookahead == 'C') ADVANCE(205);
      if (lookahead == 'P') ADVANCE(551);
      END_STATE();
    case 110:
      if (lookahead == 'C') ADVANCE(90);
      if (lookahead == 'F') ADVANCE(313);
      if (lookahead == 'G') ADVANCE(95);
      if (lookahead == 'W') ADVANCE(93);
      END_STATE();
    case 111:
      if (lookahead == 'C') ADVANCE(224);
      END_STATE();
    case 112:
      if (lookahead == 'C') ADVANCE(384);
      END_STATE();
    case 113:
      if (lookahead == 'C') ADVANCE(282);
      if (lookahead == 'D') ADVANCE(70);
      if (lookahead == 'F') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'i' &&
          lookahead != 'p' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 114:
      if (lookahead == 'C') ADVANCE(761);
      if (lookahead == 'D') ADVANCE(568);
      if (lookahead == 'F') ADVANCE(753);
      if (lookahead == 'i' ||
          lookahead == 'p') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 115:
      if (lookahead == 'C') ADVANCE(385);
      END_STATE();
    case 116:
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'F') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(63);
      END_STATE();
    case 117:
      if (lookahead == 'C') ADVANCE(386);
      END_STATE();
    case 118:
      if (lookahead == 'C') ADVANCE(230);
      if (lookahead == 'I') ADVANCE(347);
      END_STATE();
    case 119:
      if (lookahead == 'C') ADVANCE(387);
      END_STATE();
    case 120:
      if (lookahead == 'C') ADVANCE(373);
      END_STATE();
    case 121:
      if (lookahead == 'C') ADVANCE(141);
      END_STATE();
    case 122:
      if (lookahead == 'C') ADVANCE(351);
      END_STATE();
    case 123:
      if (lookahead == 'C') ADVANCE(104);
      END_STATE();
    case 124:
      if (lookahead == 'C') ADVANCE(346);
      END_STATE();
    case 125:
      if (lookahead == 'C') ADVANCE(100);
      END_STATE();
    case 126:
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'N') ADVANCE(128);
      if (lookahead == 'S') ADVANCE(397);
      END_STATE();
    case 127:
      if (lookahead == 'D') ADVANCE(527);
      END_STATE();
    case 128:
      if (lookahead == 'D') ADVANCE(519);
      END_STATE();
    case 129:
      if (lookahead == 'D') ADVANCE(503);
      END_STATE();
    case 130:
      if (lookahead == 'D') ADVANCE(432);
      END_STATE();
    case 131:
      if (lookahead == 'D') ADVANCE(428);
      END_STATE();
    case 132:
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 133:
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'N') ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 134:
      if (lookahead == 'D') ADVANCE(380);
      END_STATE();
    case 135:
      if (lookahead == 'D') ADVANCE(147);
      END_STATE();
    case 136:
      if (lookahead == 'D') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(539);
      if (lookahead == 'T') ADVANCE(537);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(509);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(515);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(517);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(447);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(449);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(501);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(476);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(467);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(395);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(486);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(426);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(291);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(411);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(507);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(461);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(465);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(463);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(561);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(478);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(413);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(459);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(540);
      if (lookahead == 'T') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(824);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'T') ADVANCE(755);
      if (lookahead == 'U') ADVANCE(602);
      if (lookahead == 'W') ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead == 'O') ADVANCE(260);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(683);
      if (lookahead == 'O') ADVANCE(742);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(577);
      if (lookahead == 'O') ADVANCE(852);
      if (lookahead == 'U') ADVANCE(709);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(192);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(330);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(226);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(256);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(342);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 175:
      if (lookahead == 'E') ADVANCE(265);
      END_STATE();
    case 176:
      if (lookahead == 'E') ADVANCE(343);
      END_STATE();
    case 177:
      if (lookahead == 'E') ADVANCE(310);
      END_STATE();
    case 178:
      if (lookahead == 'E') ADVANCE(266);
      END_STATE();
    case 179:
      if (lookahead == 'E') ADVANCE(299);
      END_STATE();
    case 180:
      if (lookahead == 'E') ADVANCE(267);
      END_STATE();
    case 181:
      if (lookahead == 'E') ADVANCE(268);
      END_STATE();
    case 182:
      if (lookahead == 'E') ADVANCE(312);
      END_STATE();
    case 183:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 184:
      if (lookahead == 'E') ADVANCE(315);
      END_STATE();
    case 185:
      if (lookahead == 'E') ADVANCE(292);
      END_STATE();
    case 186:
      if (lookahead == 'E') ADVANCE(293);
      END_STATE();
    case 187:
      if (lookahead == 'E') ADVANCE(294);
      END_STATE();
    case 188:
      if (lookahead == 'F') ADVANCE(194);
      END_STATE();
    case 189:
      if (lookahead == 'F') ADVANCE(194);
      if (lookahead == 'R') ADVANCE(521);
      END_STATE();
    case 190:
      if (lookahead == 'F') ADVANCE(682);
      if (lookahead == 'R') ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 191:
      if (lookahead == 'F') ADVANCE(350);
      END_STATE();
    case 192:
      if (lookahead == 'F') ADVANCE(280);
      END_STATE();
    case 193:
      if (lookahead == 'F') ADVANCE(319);
      if (lookahead == 'P') ADVANCE(206);
      if (lookahead == 'S') ADVANCE(125);
      END_STATE();
    case 194:
      if (lookahead == 'F') ADVANCE(337);
      END_STATE();
    case 195:
      if (lookahead == 'F') ADVANCE(323);
      if (lookahead == 'P') ADVANCE(210);
      END_STATE();
    case 196:
      if (lookahead == 'F') ADVANCE(324);
      END_STATE();
    case 197:
      if (lookahead == 'F') ADVANCE(325);
      END_STATE();
    case 198:
      if (lookahead == 'G') ADVANCE(511);
      END_STATE();
    case 199:
      if (lookahead == 'G') ADVANCE(472);
      END_STATE();
    case 200:
      if (lookahead == 'G') ADVANCE(559);
      END_STATE();
    case 201:
      if (lookahead == 'G') ADVANCE(204);
      END_STATE();
    case 202:
      if (lookahead == 'G') ADVANCE(249);
      END_STATE();
    case 203:
      if (lookahead == 'G') ADVANCE(151);
      END_STATE();
    case 204:
      if (lookahead == 'G') ADVANCE(179);
      END_STATE();
    case 205:
      if (lookahead == 'H') ADVANCE(83);
      END_STATE();
    case 206:
      if (lookahead == 'H') ADVANCE(99);
      END_STATE();
    case 207:
      if (lookahead == 'H') ADVANCE(172);
      END_STATE();
    case 208:
      if (lookahead == 'H') ADVANCE(87);
      END_STATE();
    case 209:
      if (lookahead == 'H') ADVANCE(101);
      END_STATE();
    case 210:
      if (lookahead == 'H') ADVANCE(102);
      END_STATE();
    case 211:
      if (lookahead == 'I') ADVANCE(381);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(276);
      END_STATE();
    case 213:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 214:
      if (lookahead == 'I') ADVANCE(263);
      END_STATE();
    case 215:
      if (lookahead == 'I') ADVANCE(804);
      if (lookahead == 'O') ADVANCE(805);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 216:
      if (lookahead == 'I') ADVANCE(738);
      if (lookahead == 'Q') ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 217:
      if (lookahead == 'I') ADVANCE(341);
      END_STATE();
    case 218:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 219:
      if (lookahead == 'I') ADVANCE(345);
      END_STATE();
    case 220:
      if (lookahead == 'I') ADVANCE(278);
      END_STATE();
    case 221:
      if (lookahead == 'I') ADVANCE(264);
      END_STATE();
    case 222:
      if (lookahead == 'J') ADVANCE(183);
      END_STATE();
    case 223:
      if (lookahead == 'K') ADVANCE(167);
      END_STATE();
    case 224:
      if (lookahead == 'K') ADVANCE(221);
      END_STATE();
    case 225:
      if (lookahead == 'L') ADVANCE(531);
      END_STATE();
    case 226:
      if (lookahead == 'L') ADVANCE(488);
      END_STATE();
    case 227:
      if (lookahead == 'L') ADVANCE(424);
      END_STATE();
    case 228:
      if (lookahead == 'L') ADVANCE(274);
      END_STATE();
    case 229:
      if (lookahead == 'L') ADVANCE(213);
      END_STATE();
    case 230:
      if (lookahead == 'L') ADVANCE(365);
      END_STATE();
    case 231:
      if (lookahead == 'L') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(134);
      END_STATE();
    case 232:
      if (lookahead == 'L') ADVANCE(98);
      END_STATE();
    case 233:
      if (lookahead == 'L') ADVANCE(171);
      END_STATE();
    case 234:
      if (lookahead == 'L') ADVANCE(169);
      END_STATE();
    case 235:
      if (lookahead == 'L') ADVANCE(168);
      END_STATE();
    case 236:
      if (lookahead == 'L') ADVANCE(153);
      END_STATE();
    case 237:
      if (lookahead == 'L') ADVANCE(331);
      END_STATE();
    case 238:
      if (lookahead == 'L') ADVANCE(234);
      END_STATE();
    case 239:
      if (lookahead == 'L') ADVANCE(332);
      END_STATE();
    case 240:
      if (lookahead == 'L') ADVANCE(359);
      END_STATE();
    case 241:
      if (lookahead == 'L') ADVANCE(51);
      END_STATE();
    case 242:
      if (lookahead == 'M') ADVANCE(405);
      END_STATE();
    case 243:
      if (lookahead == 'M') ADVANCE(422);
      END_STATE();
    case 244:
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'i' &&
          lookahead != 'p' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 245:
      if (lookahead == 'M') ADVANCE(656);
      if (lookahead == 'i' ||
          lookahead == 'p') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 246:
      if (lookahead == 'M') ADVANCE(283);
      END_STATE();
    case 247:
      if (lookahead == 'M') ADVANCE(286);
      END_STATE();
    case 248:
      if (lookahead == 'M') ADVANCE(368);
      END_STATE();
    case 249:
      if (lookahead == 'M') ADVANCE(64);
      END_STATE();
    case 250:
      if (lookahead == 'M') ADVANCE(150);
      END_STATE();
    case 251:
      if (lookahead == 'N') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(297);
      END_STATE();
    case 252:
      if (lookahead == 'N') ADVANCE(354);
      if (lookahead == 'S') ADVANCE(547);
      END_STATE();
    case 253:
      if (lookahead == 'N') ADVANCE(121);
      END_STATE();
    case 254:
      if (lookahead == 'N') ADVANCE(545);
      END_STATE();
    case 255:
      if (lookahead == 'N') ADVANCE(417);
      END_STATE();
    case 256:
      if (lookahead == 'N') ADVANCE(492);
      END_STATE();
    case 257:
      if (lookahead == 'N') ADVANCE(403);
      END_STATE();
    case 258:
      if (lookahead == 'N') ADVANCE(615);
      if (lookahead == 'O') ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 259:
      if (lookahead == 'N') ADVANCE(616);
      if (lookahead == 'O') ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 260:
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == 'P') ADVANCE(484);
      if (lookahead == 'T') ADVANCE(513);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(352);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(281);
      END_STATE();
    case 263:
      if (lookahead == 'N') ADVANCE(199);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(200);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(115);
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(117);
      END_STATE();
    case 268:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(203);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(235);
      END_STATE();
    case 271:
      if (lookahead == 'O') ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 272:
      if (lookahead == 'O') ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 273:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 274:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 275:
      if (lookahead == 'O') ADVANCE(298);
      END_STATE();
    case 276:
      if (lookahead == 'O') ADVANCE(255);
      END_STATE();
    case 277:
      if (lookahead == 'O') ADVANCE(314);
      END_STATE();
    case 278:
      if (lookahead == 'O') ADVANCE(257);
      END_STATE();
    case 279:
      if (lookahead == 'O') ADVANCE(238);
      END_STATE();
    case 280:
      if (lookahead == 'O') ADVANCE(309);
      END_STATE();
    case 281:
      if (lookahead == 'O') ADVANCE(136);
      END_STATE();
    case 282:
      if (lookahead == 'O') ADVANCE(750);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 283:
      if (lookahead == 'P') ADVANCE(490);
      END_STATE();
    case 284:
      if (lookahead == 'P') ADVANCE(349);
      END_STATE();
    case 285:
      if (lookahead == 'P') ADVANCE(47);
      END_STATE();
    case 286:
      if (lookahead == 'P') ADVANCE(233);
      END_STATE();
    case 287:
      if (lookahead == 'P') ADVANCE(209);
      END_STATE();
    case 288:
      if (lookahead == 'P') ADVANCE(360);
      END_STATE();
    case 289:
      if (lookahead == 'Q') ADVANCE(536);
      if (lookahead == 'X') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 290:
      if (lookahead == 'Q') ADVANCE(536);
      if (lookahead == 'X') ADVANCE(605);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 291:
      if (lookahead == 'Q') ADVANCE(369);
      END_STATE();
    case 292:
      if (lookahead == 'Q') ADVANCE(370);
      END_STATE();
    case 293:
      if (lookahead == 'Q') ADVANCE(371);
      END_STATE();
    case 294:
      if (lookahead == 'Q') ADVANCE(372);
      END_STATE();
    case 295:
      if (lookahead == 'R') ADVANCE(162);
      if (lookahead == 'V') ADVANCE(533);
      END_STATE();
    case 296:
      if (lookahead == 'R') ADVANCE(223);
      END_STATE();
    case 297:
      if (lookahead == 'R') ADVANCE(523);
      END_STATE();
    case 298:
      if (lookahead == 'R') ADVANCE(525);
      END_STATE();
    case 299:
      if (lookahead == 'R') ADVANCE(430);
      END_STATE();
    case 300:
      if (lookahead == 'R') ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 301:
      if (lookahead == 'R') ADVANCE(838);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 302:
      if (lookahead == 'R') ADVANCE(279);
      END_STATE();
    case 303:
      if (lookahead == 'R') ADVANCE(248);
      END_STATE();
    case 304:
      if (lookahead == 'R') ADVANCE(364);
      END_STATE();
    case 305:
      if (lookahead == 'R') ADVANCE(211);
      END_STATE();
    case 306:
      if (lookahead == 'R') ADVANCE(583);
      if (lookahead == 'U') ADVANCE(724);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 307:
      if (lookahead == 'R') ADVANCE(120);
      END_STATE();
    case 308:
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 309:
      if (lookahead == 'R') ADVANCE(243);
      END_STATE();
    case 310:
      if (lookahead == 'R') ADVANCE(44);
      END_STATE();
    case 311:
      if (lookahead == 'R') ADVANCE(340);
      END_STATE();
    case 312:
      if (lookahead == 'R') ADVANCE(49);
      END_STATE();
    case 313:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 314:
      if (lookahead == 'R') ADVANCE(143);
      END_STATE();
    case 315:
      if (lookahead == 'R') ADVANCE(344);
      END_STATE();
    case 316:
      if (lookahead == 'R') ADVANCE(144);
      END_STATE();
    case 317:
      if (lookahead == 'R') ADVANCE(145);
      END_STATE();
    case 318:
      if (lookahead == 'R') ADVANCE(148);
      END_STATE();
    case 319:
      if (lookahead == 'R') ADVANCE(149);
      END_STATE();
    case 320:
      if (lookahead == 'R') ADVANCE(174);
      END_STATE();
    case 321:
      if (lookahead == 'R') ADVANCE(156);
      END_STATE();
    case 322:
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(185);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(186);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(187);
      END_STATE();
    case 326:
      if (lookahead == 'S') ADVANCE(553);
      END_STATE();
    case 327:
      if (lookahead == 'S') ADVANCE(494);
      END_STATE();
    case 328:
      if (lookahead == 'S') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 329:
      if (lookahead == 'S') ADVANCE(173);
      END_STATE();
    case 330:
      if (lookahead == 'S') ADVANCE(327);
      END_STATE();
    case 331:
      if (lookahead == 'S') ADVANCE(140);
      END_STATE();
    case 332:
      if (lookahead == 'S') ADVANCE(142);
      END_STATE();
    case 333:
      if (lookahead == 'S') ADVANCE(152);
      END_STATE();
    case 334:
      if (lookahead == 'S') ADVANCE(154);
      END_STATE();
    case 335:
      if (lookahead == 'S') ADVANCE(158);
      END_STATE();
    case 336:
      if (lookahead == 'S') ADVANCE(363);
      END_STATE();
    case 337:
      if (lookahead == 'S') ADVANCE(176);
      END_STATE();
    case 338:
      if (lookahead == 'S') ADVANCE(375);
      END_STATE();
    case 339:
      if (lookahead == 'T') ADVANCE(482);
      END_STATE();
    case 340:
      if (lookahead == 'T') ADVANCE(549);
      END_STATE();
    case 341:
      if (lookahead == 'T') ADVANCE(499);
      END_STATE();
    case 342:
      if (lookahead == 'T') ADVANCE(497);
      END_STATE();
    case 343:
      if (lookahead == 'T') ADVANCE(474);
      END_STATE();
    case 344:
      if (lookahead == 'T') ADVANCE(505);
      END_STATE();
    case 345:
      if (lookahead == 'T') ADVANCE(409);
      END_STATE();
    case 346:
      if (lookahead == 'T') ADVANCE(418);
      END_STATE();
    case 347:
      if (lookahead == 'T') ADVANCE(218);
      END_STATE();
    case 348:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 349:
      if (lookahead == 'T') ADVANCE(374);
      END_STATE();
    case 350:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 351:
      if (lookahead == 'T') ADVANCE(212);
      END_STATE();
    case 352:
      if (lookahead == 'T') ADVANCE(177);
      END_STATE();
    case 353:
      if (lookahead == 'T') ADVANCE(305);
      END_STATE();
    case 354:
      if (lookahead == 'T') ADVANCE(302);
      if (lookahead == 'V') ADVANCE(184);
      END_STATE();
    case 355:
      if (lookahead == 'T') ADVANCE(96);
      END_STATE();
    case 356:
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 357:
      if (lookahead == 'T') ADVANCE(157);
      END_STATE();
    case 358:
      if (lookahead == 'T') ADVANCE(220);
      END_STATE();
    case 359:
      if (lookahead == 'T') ADVANCE(182);
      END_STATE();
    case 360:
      if (lookahead == 'T') ADVANCE(376);
      END_STATE();
    case 361:
      if (lookahead == 'U') ADVANCE(246);
      END_STATE();
    case 362:
      if (lookahead == 'U') ADVANCE(729);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 363:
      if (lookahead == 'U') ADVANCE(242);
      END_STATE();
    case 364:
      if (lookahead == 'U') ADVANCE(139);
      END_STATE();
    case 365:
      if (lookahead == 'U') ADVANCE(135);
      END_STATE();
    case 366:
      if (lookahead == 'U') ADVANCE(270);
      if (lookahead == 'W') ADVANCE(207);
      END_STATE();
    case 367:
      if (lookahead == 'U') ADVANCE(229);
      END_STATE();
    case 368:
      if (lookahead == 'U') ADVANCE(355);
      END_STATE();
    case 369:
      if (lookahead == 'U') ADVANCE(175);
      END_STATE();
    case 370:
      if (lookahead == 'U') ADVANCE(178);
      END_STATE();
    case 371:
      if (lookahead == 'U') ADVANCE(180);
      END_STATE();
    case 372:
      if (lookahead == 'U') ADVANCE(181);
      END_STATE();
    case 373:
      if (lookahead == 'U') ADVANCE(219);
      END_STATE();
    case 374:
      if (lookahead == 'U') ADVANCE(316);
      END_STATE();
    case 375:
      if (lookahead == 'U') ADVANCE(318);
      END_STATE();
    case 376:
      if (lookahead == 'U') ADVANCE(321);
      END_STATE();
    case 377:
      if (lookahead == 'V') ADVANCE(138);
      END_STATE();
    case 378:
      if (lookahead == 'V') ADVANCE(166);
      END_STATE();
    case 379:
      if (lookahead == 'W') ADVANCE(45);
      END_STATE();
    case 380:
      if (lookahead == 'W') ADVANCE(103);
      END_STATE();
    case 381:
      if (lookahead == 'X') ADVANCE(399);
      END_STATE();
    case 382:
      if (lookahead == 'X') ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 383:
      if (lookahead == 'Y') ADVANCE(451);
      END_STATE();
    case 384:
      if (lookahead == 'Y') ADVANCE(455);
      END_STATE();
    case 385:
      if (lookahead == 'Y') ADVANCE(457);
      END_STATE();
    case 386:
      if (lookahead == 'Y') ADVANCE(420);
      END_STATE();
    case 387:
      if (lookahead == 'Y') ADVANCE(415);
      END_STATE();
    case 388:
      if (lookahead == '\\') ADVANCE(894);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 390:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 391:
      if (eof) ADVANCE(393);
      if (lookahead == '\n') ADVANCE(880);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(289);
      if (lookahead == 'F') ADVANCE(72);
      if (lookahead == 'G') ADVANCE(159);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'J') ADVANCE(362);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'M') ADVANCE(164);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(300);
      if (lookahead == 'P') ADVANCE(306);
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'S') ADVANCE(160);
      if (lookahead == 'T') ADVANCE(301);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == 'X') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'i' &&
          lookahead != 'p' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 392:
      if (eof) ADVANCE(393);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(289);
      if (lookahead == 'F') ADVANCE(72);
      if (lookahead == 'G') ADVANCE(159);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'J') ADVANCE(362);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'M') ADVANCE(164);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(300);
      if (lookahead == 'P') ADVANCE(306);
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'S') ADVANCE(160);
      if (lookahead == 'T') ADVANCE(301);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == 'X') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'i' &&
          lookahead != 'p' &&
          lookahead != '|') ADVANCE(390);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_DEFGATE);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_DEFGATE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_MATRIX);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_MATRIX);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_PERMUTATION);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_PERMUTATION);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_PAULI_DASHSUM);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_PAULI_DASHSUM);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DEFCIRCUIT);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_DEFCIRCUIT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DEFFRAME);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_DEFFRAME);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_SAMPLE_DASHRATE);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_SAMPLE_DASHRATE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_INITIAL_DASHFREQUENCY);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_INITIAL_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DIRECTION);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_HARDWARE_DASHOBJECT);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_HARDWARE_DASHOBJECT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_CENTER_DASHFREQUENCY);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_CENTER_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_DEFWAVEFORM);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_DEFWAVEFORM);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_DEFCAL);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_DEFCAL);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_MEASURE);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_MEASURE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_CONTROLLED);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_CONTROLLED);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_DAGGER);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_DAGGER);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_FORKED);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_FORKED);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_FENCE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_FENCE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_PULSE);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_PULSE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_DELAY);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_DELAY);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_SET_DASHFREQUENCY);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_SET_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_SHIFT_DASHFREQUENCY);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_SHIFT_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_SHIFT_DASHPHASE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_SHIFT_DASHPHASE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_SET_DASHPHASE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_SET_DASHPHASE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_SWAP_DASHPHASE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_SWAP_DASHPHASE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_SET_DASHSCALE);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_SET_DASHSCALE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_DECLARE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_DECLARE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_SHARING);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_SHARING);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_CAPTURE);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_CAPTURE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_RAW_DASHCAPTURE);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_RAW_DASHCAPTURE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_PRAGMA);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_PRAGMA);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_HALT);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_HALT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_NOP);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_NOP);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_LABEL);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LABEL);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_JUMP);
      if (lookahead == '-') ADVANCE(366);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_JUMP);
      if (lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_JUMP_DASHWHEN);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_JUMP_DASHWHEN);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_JUMP_DASHUNLESS);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_JUMP_DASHUNLESS);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_RESET);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_RESET);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_WAIT);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_STORE);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_STORE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_LOAD);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LOAD);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_CONVERT);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_CONVERT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_EXCHANGE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_EXCHANGE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_MOVE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_MOVE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_NEG);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_NEG);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_IOR);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_IOR);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_ADD);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_ADD);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_MUL);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_MUL);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_DIV);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DIV);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_GE);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_GE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_LE);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_LE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_SIN);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_SIN);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_COS);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_COS);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_SQRT);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_SQRT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_EXP);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_EXP);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_CIS);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_CIS);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_pi);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_pi);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_nonblocking);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_nonblocking);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_FILTER_DASHNODE);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_FILTER_DASHNODE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(764);
      if (lookahead == 'E') ADVANCE(748);
      if (lookahead == 'I') ADVANCE(804);
      if (lookahead == 'O') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(764);
      if (lookahead == 'O') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'E') ADVANCE(611);
      if (lookahead == 'I') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'E') ADVANCE(612);
      if (lookahead == 'I') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(723);
      if (lookahead == 'E') ADVANCE(741);
      if (lookahead == 'I') ADVANCE(725);
      if (lookahead == 'O') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(723);
      if (lookahead == 'E') ADVANCE(741);
      if (lookahead == 'O') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(601);
      if (lookahead == 'E') ADVANCE(544);
      if (lookahead == 'O') ADVANCE(579);
      if (lookahead == 'T') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(854);
      if (lookahead == 'E') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(841);
      if (lookahead == 'E') ADVANCE(784);
      if (lookahead == 'R') ADVANCE(583);
      if (lookahead == 'U') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(711);
      if (lookahead == 'I') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(830);
      if (lookahead == 'E') ADVANCE(577);
      if (lookahead == 'O') ADVANCE(852);
      if (lookahead == 'U') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(798);
      if (lookahead == 'I') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(730);
      if (lookahead == 'E') ADVANCE(824);
      if (lookahead == 'H') ADVANCE(589);
      if (lookahead == 'I') ADVANCE(738);
      if (lookahead == 'Q') ADVANCE(792);
      if (lookahead == 'T') ADVANCE(755);
      if (lookahead == 'U') ADVANCE(602);
      if (lookahead == 'W') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'A') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'B') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'B') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'B') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'B') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(690);
      if (lookahead == 'P') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(586);
      if (lookahead == 'F') ADVANCE(789);
      if (lookahead == 'G') ADVANCE(585);
      if (lookahead == 'W') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(716);
      if (lookahead == 'F') ADVANCE(607);
      if (lookahead == 'L') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(716);
      if (lookahead == 'L') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(715);
      if (lookahead == 'I') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'N') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(540);
      if (lookahead == 'T') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(824);
      if (lookahead == 'H') ADVANCE(695);
      if (lookahead == 'T') ADVANCE(755);
      if (lookahead == 'U') ADVANCE(602);
      if (lookahead == 'W') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(683);
      if (lookahead == 'O') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(577);
      if (lookahead == 'O') ADVANCE(852);
      if (lookahead == 'U') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(682);
      if (lookahead == 'R') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'G') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'G') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'G') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'G') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'G') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'G') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'G') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'H') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'H') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'H') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'H') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'H') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(804);
      if (lookahead == 'O') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(738);
      if (lookahead == 'Q') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'J') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'K') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'K') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(815);
      if (lookahead == 'R') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'M') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'M') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'M') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'M') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'M') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'M') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'M') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(827);
      if (lookahead == 'S') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(615);
      if (lookahead == 'O') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(616);
      if (lookahead == 'O') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(604);
      if (lookahead == 'P') ADVANCE(485);
      if (lookahead == 'T') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Q') ADVANCE(536);
      if (lookahead == 'X') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Q') ADVANCE(536);
      if (lookahead == 'X') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Q') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Q') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Q') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Q') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(583);
      if (lookahead == 'U') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(780);
      if (lookahead == 'V') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'V') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'V') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'V') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'X') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'X') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Y') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Y') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Y') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Y') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Y') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(877);
      if (lookahead == ' ') ADVANCE(876);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(877);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(878);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(879);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(880);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(883);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_e);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'X') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'Q') ADVANCE(535);
      if (lookahead == 'X') ADVANCE(109);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'X') ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym__int_token1);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym__string_esc_inner_token1);
      if (lookahead == '\\') ADVANCE(388);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(896);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(896);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 392},
  [2] = {.lex_state = 392},
  [3] = {.lex_state = 392},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 391},
  [15] = {.lex_state = 391},
  [16] = {.lex_state = 65},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 52},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 23},
  [148] = {.lex_state = 52},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 52},
  [151] = {.lex_state = 52},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 113},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 23},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 23},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 113},
  [163] = {.lex_state = 23},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 23},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 17},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 23},
  [184] = {.lex_state = 24},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 17},
  [189] = {.lex_state = 17},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 24},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 23},
  [200] = {.lex_state = 23},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 23},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 23},
  [207] = {.lex_state = 23},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 23},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 23},
  [212] = {.lex_state = 23},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 23},
  [222] = {.lex_state = 23},
  [223] = {.lex_state = 23},
  [224] = {.lex_state = 23},
  [225] = {.lex_state = 23},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 23},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 23},
  [237] = {.lex_state = 23},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 23},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 23},
  [253] = {.lex_state = 23},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 23},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 23},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 23},
  [260] = {.lex_state = 23},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 17},
  [263] = {.lex_state = 23},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 23},
  [267] = {.lex_state = 17},
  [268] = {.lex_state = 23},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 23},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 23},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 23},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 10},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 10},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 23},
  [299] = {.lex_state = 895},
  [300] = {.lex_state = 23},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 23},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 10},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 244},
  [310] = {.lex_state = 23},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 23},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 23},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 23},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 23},
  [332] = {.lex_state = 23},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 23},
  [335] = {.lex_state = 8},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 23},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 17},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 8},
  [342] = {.lex_state = 10},
  [343] = {.lex_state = 8},
  [344] = {.lex_state = 10},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 23},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 23},
  [351] = {.lex_state = 8},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 8},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 23},
  [357] = {.lex_state = 8},
  [358] = {.lex_state = 8},
  [359] = {.lex_state = 8},
  [360] = {.lex_state = 8},
  [361] = {.lex_state = 8},
  [362] = {.lex_state = 8},
  [363] = {.lex_state = 8},
  [364] = {.lex_state = 23},
  [365] = {.lex_state = 8},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 23},
  [369] = {.lex_state = 8},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 23},
  [372] = {.lex_state = 23},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 23},
  [375] = {.lex_state = 8},
  [376] = {.lex_state = 8},
  [377] = {.lex_state = 23},
  [378] = {.lex_state = 8},
  [379] = {.lex_state = 8},
  [380] = {.lex_state = 8},
  [381] = {.lex_state = 8},
  [382] = {.lex_state = 8},
  [383] = {.lex_state = 8},
  [384] = {.lex_state = 8},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 8},
  [387] = {.lex_state = 8},
  [388] = {.lex_state = 8},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 8},
  [393] = {.lex_state = 8},
  [394] = {.lex_state = 8},
  [395] = {.lex_state = 23},
  [396] = {.lex_state = 8},
  [397] = {.lex_state = 8},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 8},
  [400] = {.lex_state = 23},
  [401] = {.lex_state = 8},
  [402] = {.lex_state = 8},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 23},
  [405] = {.lex_state = 23},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 8},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 8},
  [411] = {.lex_state = 23},
  [412] = {.lex_state = 23},
  [413] = {.lex_state = 23},
  [414] = {.lex_state = 23},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 8},
  [417] = {.lex_state = 8},
  [418] = {.lex_state = 8},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 8},
  [423] = {.lex_state = 23},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 8},
  [426] = {.lex_state = 8},
  [427] = {.lex_state = 8},
  [428] = {.lex_state = 23},
  [429] = {.lex_state = 23},
  [430] = {.lex_state = 8},
  [431] = {.lex_state = 8},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 8},
  [434] = {.lex_state = 23},
  [435] = {.lex_state = 8},
  [436] = {.lex_state = 8},
  [437] = {.lex_state = 8},
  [438] = {.lex_state = 23},
  [439] = {.lex_state = 8},
  [440] = {.lex_state = 8},
  [441] = {.lex_state = 894},
  [442] = {.lex_state = 23},
  [443] = {.lex_state = 23},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 8},
  [446] = {.lex_state = 8},
  [447] = {.lex_state = 8},
  [448] = {.lex_state = 23},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 8},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 23},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DEFGATE] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_MATRIX] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PERMUTATION] = ACTIONS(1),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DEFCIRCUIT] = ACTIONS(1),
    [anon_sym_DEFFRAME] = ACTIONS(1),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(1),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(1),
    [anon_sym_DIRECTION] = ACTIONS(1),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(1),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(1),
    [anon_sym_DEFWAVEFORM] = ACTIONS(1),
    [anon_sym_DEFCAL] = ACTIONS(1),
    [anon_sym_MEASURE] = ACTIONS(1),
    [anon_sym_CONTROLLED] = ACTIONS(1),
    [anon_sym_DAGGER] = ACTIONS(1),
    [anon_sym_FORKED] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_FENCE] = ACTIONS(1),
    [anon_sym_PULSE] = ACTIONS(1),
    [anon_sym_DELAY] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(1),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(1),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(1),
    [anon_sym_SET_DASHPHASE] = ACTIONS(1),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(1),
    [anon_sym_SET_DASHSCALE] = ACTIONS(1),
    [anon_sym_DECLARE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SHARING] = ACTIONS(1),
    [anon_sym_OFFSET] = ACTIONS(1),
    [anon_sym_CAPTURE] = ACTIONS(1),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(1),
    [anon_sym_PRAGMA] = ACTIONS(1),
    [anon_sym_HALT] = ACTIONS(1),
    [anon_sym_NOP] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_LABEL] = ACTIONS(1),
    [anon_sym_JUMP] = ACTIONS(1),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(1),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_RESET] = ACTIONS(1),
    [anon_sym_WAIT] = ACTIONS(1),
    [anon_sym_STORE] = ACTIONS(1),
    [anon_sym_LOAD] = ACTIONS(1),
    [anon_sym_CONVERT] = ACTIONS(1),
    [anon_sym_EXCHANGE] = ACTIONS(1),
    [anon_sym_MOVE] = ACTIONS(1),
    [anon_sym_NEG] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_IOR] = ACTIONS(1),
    [anon_sym_XOR] = ACTIONS(1),
    [anon_sym_ADD] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_MUL] = ACTIONS(1),
    [anon_sym_DIV] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LE] = ACTIONS(1),
    [anon_sym_SIN] = ACTIONS(1),
    [anon_sym_COS] = ACTIONS(1),
    [anon_sym_SQRT] = ACTIONS(1),
    [anon_sym_EXP] = ACTIONS(1),
    [anon_sym_CIS] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_pi] = ACTIONS(1),
    [sym_nonblocking] = ACTIONS(1),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym__int_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_quil] = STATE(389),
    [sym__all_instr] = STATE(335),
    [sym__instr] = STATE(335),
    [sym_def_gate] = STATE(335),
    [sym_def_gate_matrix] = STATE(383),
    [sym_def_gate_as_permutation] = STATE(383),
    [sym_def_pauli_gate] = STATE(383),
    [sym_def_circuit] = STATE(335),
    [sym_def_frame] = STATE(335),
    [sym_def_waveform] = STATE(335),
    [sym_def_calibration] = STATE(335),
    [sym_def_measure_calibration] = STATE(335),
    [sym_gate] = STATE(335),
    [sym_modifiers] = STATE(377),
    [sym_fence] = STATE(335),
    [sym_pulse] = STATE(335),
    [sym_delay] = STATE(335),
    [sym_delay_qubits] = STATE(376),
    [sym_delay_frames] = STATE(376),
    [sym_set_frequency] = STATE(335),
    [sym_shift_frequency] = STATE(335),
    [sym_shift_phase] = STATE(335),
    [sym_set_phase] = STATE(335),
    [sym_swap_phase] = STATE(335),
    [sym_set_scale] = STATE(335),
    [sym_declare] = STATE(335),
    [sym_capture] = STATE(335),
    [sym_raw_capture] = STATE(335),
    [sym_pragma] = STATE(335),
    [sym_measure] = STATE(335),
    [sym_halt] = STATE(335),
    [sym_nop] = STATE(335),
    [sym_include] = STATE(335),
    [sym_def_label] = STATE(335),
    [sym_jump] = STATE(335),
    [sym_jump_when] = STATE(335),
    [sym_jump_unless] = STATE(335),
    [sym_reset] = STATE(335),
    [sym_wait] = STATE(335),
    [sym_store] = STATE(335),
    [sym_load] = STATE(335),
    [sym_convert] = STATE(335),
    [sym_exchange] = STATE(335),
    [sym_move] = STATE(335),
    [sym_classical_unary] = STATE(335),
    [sym_classical_binary] = STATE(335),
    [sym_logical_binary_op] = STATE(351),
    [sym_arithmetic_binary_op] = STATE(351),
    [sym_classical_comparison] = STATE(335),
    [aux_sym_quil_repeat2] = STATE(3),
    [aux_sym_modifiers_repeat1] = STATE(156),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DEFGATE] = ACTIONS(7),
    [anon_sym_DEFCIRCUIT] = ACTIONS(9),
    [anon_sym_DEFFRAME] = ACTIONS(11),
    [anon_sym_DEFWAVEFORM] = ACTIONS(13),
    [anon_sym_DEFCAL] = ACTIONS(15),
    [anon_sym_MEASURE] = ACTIONS(17),
    [anon_sym_CONTROLLED] = ACTIONS(19),
    [anon_sym_DAGGER] = ACTIONS(19),
    [anon_sym_FORKED] = ACTIONS(19),
    [anon_sym_FENCE] = ACTIONS(21),
    [anon_sym_PULSE] = ACTIONS(23),
    [anon_sym_DELAY] = ACTIONS(25),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(27),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(29),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(31),
    [anon_sym_SET_DASHPHASE] = ACTIONS(33),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(35),
    [anon_sym_SET_DASHSCALE] = ACTIONS(37),
    [anon_sym_DECLARE] = ACTIONS(39),
    [anon_sym_CAPTURE] = ACTIONS(41),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(43),
    [anon_sym_PRAGMA] = ACTIONS(45),
    [anon_sym_HALT] = ACTIONS(47),
    [anon_sym_NOP] = ACTIONS(49),
    [anon_sym_INCLUDE] = ACTIONS(51),
    [anon_sym_LABEL] = ACTIONS(53),
    [anon_sym_JUMP] = ACTIONS(55),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(57),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(59),
    [anon_sym_RESET] = ACTIONS(61),
    [anon_sym_WAIT] = ACTIONS(63),
    [anon_sym_STORE] = ACTIONS(65),
    [anon_sym_LOAD] = ACTIONS(67),
    [anon_sym_CONVERT] = ACTIONS(69),
    [anon_sym_EXCHANGE] = ACTIONS(71),
    [anon_sym_MOVE] = ACTIONS(73),
    [anon_sym_NEG] = ACTIONS(75),
    [anon_sym_NOT] = ACTIONS(75),
    [anon_sym_TRUE] = ACTIONS(75),
    [anon_sym_FALSE] = ACTIONS(75),
    [anon_sym_AND] = ACTIONS(77),
    [anon_sym_OR] = ACTIONS(77),
    [anon_sym_IOR] = ACTIONS(77),
    [anon_sym_XOR] = ACTIONS(77),
    [anon_sym_ADD] = ACTIONS(79),
    [anon_sym_SUB] = ACTIONS(79),
    [anon_sym_MUL] = ACTIONS(79),
    [anon_sym_DIV] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_GE] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_LE] = ACTIONS(81),
    [sym_nonblocking] = ACTIONS(83),
    [sym_identifier] = ACTIONS(85),
  },
  [2] = {
    [sym__all_instr] = STATE(335),
    [sym__instr] = STATE(335),
    [sym_def_gate] = STATE(335),
    [sym_def_gate_matrix] = STATE(383),
    [sym_def_gate_as_permutation] = STATE(383),
    [sym_def_pauli_gate] = STATE(383),
    [sym_def_circuit] = STATE(335),
    [sym_def_frame] = STATE(335),
    [sym_def_waveform] = STATE(335),
    [sym_def_calibration] = STATE(335),
    [sym_def_measure_calibration] = STATE(335),
    [sym_gate] = STATE(335),
    [sym_modifiers] = STATE(377),
    [sym_fence] = STATE(335),
    [sym_pulse] = STATE(335),
    [sym_delay] = STATE(335),
    [sym_delay_qubits] = STATE(376),
    [sym_delay_frames] = STATE(376),
    [sym_set_frequency] = STATE(335),
    [sym_shift_frequency] = STATE(335),
    [sym_shift_phase] = STATE(335),
    [sym_set_phase] = STATE(335),
    [sym_swap_phase] = STATE(335),
    [sym_set_scale] = STATE(335),
    [sym_declare] = STATE(335),
    [sym_capture] = STATE(335),
    [sym_raw_capture] = STATE(335),
    [sym_pragma] = STATE(335),
    [sym_measure] = STATE(335),
    [sym_halt] = STATE(335),
    [sym_nop] = STATE(335),
    [sym_include] = STATE(335),
    [sym_def_label] = STATE(335),
    [sym_jump] = STATE(335),
    [sym_jump_when] = STATE(335),
    [sym_jump_unless] = STATE(335),
    [sym_reset] = STATE(335),
    [sym_wait] = STATE(335),
    [sym_store] = STATE(335),
    [sym_load] = STATE(335),
    [sym_convert] = STATE(335),
    [sym_exchange] = STATE(335),
    [sym_move] = STATE(335),
    [sym_classical_unary] = STATE(335),
    [sym_classical_binary] = STATE(335),
    [sym_logical_binary_op] = STATE(351),
    [sym_arithmetic_binary_op] = STATE(351),
    [sym_classical_comparison] = STATE(335),
    [aux_sym_quil_repeat2] = STATE(2),
    [aux_sym_modifiers_repeat1] = STATE(156),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_comment] = ACTIONS(89),
    [anon_sym_DEFGATE] = ACTIONS(92),
    [anon_sym_DEFCIRCUIT] = ACTIONS(95),
    [anon_sym_DEFFRAME] = ACTIONS(98),
    [anon_sym_DEFWAVEFORM] = ACTIONS(101),
    [anon_sym_DEFCAL] = ACTIONS(104),
    [anon_sym_MEASURE] = ACTIONS(107),
    [anon_sym_CONTROLLED] = ACTIONS(110),
    [anon_sym_DAGGER] = ACTIONS(110),
    [anon_sym_FORKED] = ACTIONS(110),
    [anon_sym_FENCE] = ACTIONS(113),
    [anon_sym_PULSE] = ACTIONS(116),
    [anon_sym_DELAY] = ACTIONS(119),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(122),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(125),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(128),
    [anon_sym_SET_DASHPHASE] = ACTIONS(131),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(134),
    [anon_sym_SET_DASHSCALE] = ACTIONS(137),
    [anon_sym_DECLARE] = ACTIONS(140),
    [anon_sym_CAPTURE] = ACTIONS(143),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(146),
    [anon_sym_PRAGMA] = ACTIONS(149),
    [anon_sym_HALT] = ACTIONS(152),
    [anon_sym_NOP] = ACTIONS(155),
    [anon_sym_INCLUDE] = ACTIONS(158),
    [anon_sym_LABEL] = ACTIONS(161),
    [anon_sym_JUMP] = ACTIONS(164),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(167),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(170),
    [anon_sym_RESET] = ACTIONS(173),
    [anon_sym_WAIT] = ACTIONS(176),
    [anon_sym_STORE] = ACTIONS(179),
    [anon_sym_LOAD] = ACTIONS(182),
    [anon_sym_CONVERT] = ACTIONS(185),
    [anon_sym_EXCHANGE] = ACTIONS(188),
    [anon_sym_MOVE] = ACTIONS(191),
    [anon_sym_NEG] = ACTIONS(194),
    [anon_sym_NOT] = ACTIONS(194),
    [anon_sym_TRUE] = ACTIONS(194),
    [anon_sym_FALSE] = ACTIONS(194),
    [anon_sym_AND] = ACTIONS(197),
    [anon_sym_OR] = ACTIONS(197),
    [anon_sym_IOR] = ACTIONS(197),
    [anon_sym_XOR] = ACTIONS(197),
    [anon_sym_ADD] = ACTIONS(200),
    [anon_sym_SUB] = ACTIONS(200),
    [anon_sym_MUL] = ACTIONS(200),
    [anon_sym_DIV] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_GE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_LE] = ACTIONS(203),
    [sym_nonblocking] = ACTIONS(206),
    [sym_identifier] = ACTIONS(209),
  },
  [3] = {
    [sym__all_instr] = STATE(335),
    [sym__instr] = STATE(335),
    [sym_def_gate] = STATE(335),
    [sym_def_gate_matrix] = STATE(383),
    [sym_def_gate_as_permutation] = STATE(383),
    [sym_def_pauli_gate] = STATE(383),
    [sym_def_circuit] = STATE(335),
    [sym_def_frame] = STATE(335),
    [sym_def_waveform] = STATE(335),
    [sym_def_calibration] = STATE(335),
    [sym_def_measure_calibration] = STATE(335),
    [sym_gate] = STATE(335),
    [sym_modifiers] = STATE(377),
    [sym_fence] = STATE(335),
    [sym_pulse] = STATE(335),
    [sym_delay] = STATE(335),
    [sym_delay_qubits] = STATE(376),
    [sym_delay_frames] = STATE(376),
    [sym_set_frequency] = STATE(335),
    [sym_shift_frequency] = STATE(335),
    [sym_shift_phase] = STATE(335),
    [sym_set_phase] = STATE(335),
    [sym_swap_phase] = STATE(335),
    [sym_set_scale] = STATE(335),
    [sym_declare] = STATE(335),
    [sym_capture] = STATE(335),
    [sym_raw_capture] = STATE(335),
    [sym_pragma] = STATE(335),
    [sym_measure] = STATE(335),
    [sym_halt] = STATE(335),
    [sym_nop] = STATE(335),
    [sym_include] = STATE(335),
    [sym_def_label] = STATE(335),
    [sym_jump] = STATE(335),
    [sym_jump_when] = STATE(335),
    [sym_jump_unless] = STATE(335),
    [sym_reset] = STATE(335),
    [sym_wait] = STATE(335),
    [sym_store] = STATE(335),
    [sym_load] = STATE(335),
    [sym_convert] = STATE(335),
    [sym_exchange] = STATE(335),
    [sym_move] = STATE(335),
    [sym_classical_unary] = STATE(335),
    [sym_classical_binary] = STATE(335),
    [sym_logical_binary_op] = STATE(351),
    [sym_arithmetic_binary_op] = STATE(351),
    [sym_classical_comparison] = STATE(335),
    [aux_sym_quil_repeat2] = STATE(2),
    [aux_sym_modifiers_repeat1] = STATE(156),
    [ts_builtin_sym_end] = ACTIONS(212),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DEFGATE] = ACTIONS(7),
    [anon_sym_DEFCIRCUIT] = ACTIONS(9),
    [anon_sym_DEFFRAME] = ACTIONS(11),
    [anon_sym_DEFWAVEFORM] = ACTIONS(13),
    [anon_sym_DEFCAL] = ACTIONS(15),
    [anon_sym_MEASURE] = ACTIONS(17),
    [anon_sym_CONTROLLED] = ACTIONS(19),
    [anon_sym_DAGGER] = ACTIONS(19),
    [anon_sym_FORKED] = ACTIONS(19),
    [anon_sym_FENCE] = ACTIONS(21),
    [anon_sym_PULSE] = ACTIONS(23),
    [anon_sym_DELAY] = ACTIONS(25),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(27),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(29),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(31),
    [anon_sym_SET_DASHPHASE] = ACTIONS(33),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(35),
    [anon_sym_SET_DASHSCALE] = ACTIONS(37),
    [anon_sym_DECLARE] = ACTIONS(39),
    [anon_sym_CAPTURE] = ACTIONS(41),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(43),
    [anon_sym_PRAGMA] = ACTIONS(45),
    [anon_sym_HALT] = ACTIONS(47),
    [anon_sym_NOP] = ACTIONS(49),
    [anon_sym_INCLUDE] = ACTIONS(51),
    [anon_sym_LABEL] = ACTIONS(53),
    [anon_sym_JUMP] = ACTIONS(55),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(57),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(59),
    [anon_sym_RESET] = ACTIONS(61),
    [anon_sym_WAIT] = ACTIONS(63),
    [anon_sym_STORE] = ACTIONS(65),
    [anon_sym_LOAD] = ACTIONS(67),
    [anon_sym_CONVERT] = ACTIONS(69),
    [anon_sym_EXCHANGE] = ACTIONS(71),
    [anon_sym_MOVE] = ACTIONS(73),
    [anon_sym_NEG] = ACTIONS(75),
    [anon_sym_NOT] = ACTIONS(75),
    [anon_sym_TRUE] = ACTIONS(75),
    [anon_sym_FALSE] = ACTIONS(75),
    [anon_sym_AND] = ACTIONS(77),
    [anon_sym_OR] = ACTIONS(77),
    [anon_sym_IOR] = ACTIONS(77),
    [anon_sym_XOR] = ACTIONS(77),
    [anon_sym_ADD] = ACTIONS(79),
    [anon_sym_SUB] = ACTIONS(79),
    [anon_sym_MUL] = ACTIONS(79),
    [anon_sym_DIV] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_GE] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_LE] = ACTIONS(81),
    [sym_nonblocking] = ACTIONS(83),
    [sym_identifier] = ACTIONS(85),
  },
  [4] = {
    [sym__instr] = STATE(361),
    [sym_gate] = STATE(361),
    [sym_modifiers] = STATE(377),
    [sym_fence] = STATE(361),
    [sym_pulse] = STATE(361),
    [sym_delay] = STATE(361),
    [sym_delay_qubits] = STATE(376),
    [sym_delay_frames] = STATE(376),
    [sym_set_frequency] = STATE(361),
    [sym_shift_frequency] = STATE(361),
    [sym_shift_phase] = STATE(361),
    [sym_set_phase] = STATE(361),
    [sym_swap_phase] = STATE(361),
    [sym_set_scale] = STATE(361),
    [sym_declare] = STATE(361),
    [sym_capture] = STATE(361),
    [sym_raw_capture] = STATE(361),
    [sym_pragma] = STATE(361),
    [sym_measure] = STATE(361),
    [sym_halt] = STATE(361),
    [sym_nop] = STATE(361),
    [sym_include] = STATE(361),
    [sym_def_label] = STATE(361),
    [sym_jump] = STATE(361),
    [sym_jump_when] = STATE(361),
    [sym_jump_unless] = STATE(361),
    [sym_reset] = STATE(361),
    [sym_wait] = STATE(361),
    [sym_store] = STATE(361),
    [sym_load] = STATE(361),
    [sym_convert] = STATE(361),
    [sym_exchange] = STATE(361),
    [sym_move] = STATE(361),
    [sym_classical_unary] = STATE(361),
    [sym_classical_binary] = STATE(361),
    [sym_logical_binary_op] = STATE(351),
    [sym_arithmetic_binary_op] = STATE(351),
    [sym_classical_comparison] = STATE(361),
    [aux_sym_modifiers_repeat1] = STATE(156),
    [anon_sym_MEASURE] = ACTIONS(17),
    [anon_sym_CONTROLLED] = ACTIONS(19),
    [anon_sym_DAGGER] = ACTIONS(19),
    [anon_sym_FORKED] = ACTIONS(19),
    [anon_sym_FENCE] = ACTIONS(21),
    [anon_sym_PULSE] = ACTIONS(23),
    [anon_sym_DELAY] = ACTIONS(25),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(27),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(29),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(31),
    [anon_sym_SET_DASHPHASE] = ACTIONS(33),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(35),
    [anon_sym_SET_DASHSCALE] = ACTIONS(37),
    [anon_sym_DECLARE] = ACTIONS(39),
    [anon_sym_CAPTURE] = ACTIONS(41),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(43),
    [anon_sym_PRAGMA] = ACTIONS(45),
    [anon_sym_HALT] = ACTIONS(47),
    [anon_sym_NOP] = ACTIONS(49),
    [anon_sym_INCLUDE] = ACTIONS(51),
    [anon_sym_LABEL] = ACTIONS(53),
    [anon_sym_JUMP] = ACTIONS(55),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(57),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(59),
    [anon_sym_RESET] = ACTIONS(61),
    [anon_sym_WAIT] = ACTIONS(63),
    [anon_sym_STORE] = ACTIONS(65),
    [anon_sym_LOAD] = ACTIONS(67),
    [anon_sym_CONVERT] = ACTIONS(69),
    [anon_sym_EXCHANGE] = ACTIONS(71),
    [anon_sym_MOVE] = ACTIONS(73),
    [anon_sym_NEG] = ACTIONS(75),
    [anon_sym_NOT] = ACTIONS(75),
    [anon_sym_TRUE] = ACTIONS(75),
    [anon_sym_FALSE] = ACTIONS(75),
    [anon_sym_AND] = ACTIONS(77),
    [anon_sym_OR] = ACTIONS(77),
    [anon_sym_IOR] = ACTIONS(77),
    [anon_sym_XOR] = ACTIONS(77),
    [anon_sym_ADD] = ACTIONS(79),
    [anon_sym_SUB] = ACTIONS(79),
    [anon_sym_MUL] = ACTIONS(79),
    [anon_sym_DIV] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_GE] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_LE] = ACTIONS(81),
    [sym_nonblocking] = ACTIONS(83),
    [sym_identifier] = ACTIONS(85),
  },
  [5] = {
    [sym_pragma_name] = STATE(7),
    [sym_keyword] = STATE(11),
    [aux_sym__int] = STATE(8),
    [sym__string] = STATE(392),
    [sym__escaped_string] = STATE(392),
    [aux_sym_pragma_repeat1] = STATE(7),
    [anon_sym_DEFGATE] = ACTIONS(214),
    [anon_sym_AS] = ACTIONS(214),
    [anon_sym_MATRIX] = ACTIONS(214),
    [anon_sym_PERMUTATION] = ACTIONS(214),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(214),
    [anon_sym_DEFCIRCUIT] = ACTIONS(214),
    [anon_sym_DEFFRAME] = ACTIONS(214),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(214),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(214),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(214),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(214),
    [anon_sym_DEFWAVEFORM] = ACTIONS(214),
    [anon_sym_DEFCAL] = ACTIONS(214),
    [anon_sym_MEASURE] = ACTIONS(214),
    [anon_sym_CONTROLLED] = ACTIONS(214),
    [anon_sym_DAGGER] = ACTIONS(214),
    [anon_sym_FORKED] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym_FENCE] = ACTIONS(214),
    [anon_sym_PULSE] = ACTIONS(214),
    [anon_sym_DELAY] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(214),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(214),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(214),
    [anon_sym_SET_DASHPHASE] = ACTIONS(214),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(214),
    [anon_sym_SET_DASHSCALE] = ACTIONS(214),
    [anon_sym_DECLARE] = ACTIONS(214),
    [anon_sym_SHARING] = ACTIONS(214),
    [anon_sym_OFFSET] = ACTIONS(214),
    [anon_sym_CAPTURE] = ACTIONS(214),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(214),
    [anon_sym_PRAGMA] = ACTIONS(214),
    [anon_sym_HALT] = ACTIONS(214),
    [anon_sym_NOP] = ACTIONS(214),
    [anon_sym_INCLUDE] = ACTIONS(214),
    [anon_sym_LABEL] = ACTIONS(214),
    [anon_sym_JUMP] = ACTIONS(214),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(214),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(214),
    [anon_sym_RESET] = ACTIONS(214),
    [anon_sym_WAIT] = ACTIONS(214),
    [anon_sym_STORE] = ACTIONS(214),
    [anon_sym_LOAD] = ACTIONS(214),
    [anon_sym_CONVERT] = ACTIONS(214),
    [anon_sym_EXCHANGE] = ACTIONS(214),
    [anon_sym_MOVE] = ACTIONS(214),
    [anon_sym_NEG] = ACTIONS(214),
    [anon_sym_NOT] = ACTIONS(214),
    [anon_sym_TRUE] = ACTIONS(214),
    [anon_sym_FALSE] = ACTIONS(214),
    [anon_sym_AND] = ACTIONS(214),
    [anon_sym_OR] = ACTIONS(214),
    [anon_sym_IOR] = ACTIONS(214),
    [anon_sym_XOR] = ACTIONS(214),
    [anon_sym_ADD] = ACTIONS(214),
    [anon_sym_SUB] = ACTIONS(214),
    [anon_sym_MUL] = ACTIONS(214),
    [anon_sym_DIV] = ACTIONS(214),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_GT] = ACTIONS(214),
    [anon_sym_GE] = ACTIONS(214),
    [anon_sym_LT] = ACTIONS(214),
    [anon_sym_LE] = ACTIONS(214),
    [anon_sym_SIN] = ACTIONS(214),
    [anon_sym_COS] = ACTIONS(214),
    [anon_sym_SQRT] = ACTIONS(214),
    [anon_sym_EXP] = ACTIONS(214),
    [anon_sym_CIS] = ACTIONS(214),
    [anon_sym_i] = ACTIONS(214),
    [anon_sym_pi] = ACTIONS(214),
    [sym_nonblocking] = ACTIONS(214),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(214),
    [sym_identifier] = ACTIONS(218),
    [sym__newline] = ACTIONS(220),
    [aux_sym__int_token1] = ACTIONS(222),
  },
  [6] = {
    [sym_pragma_name] = STATE(5),
    [sym_keyword] = STATE(11),
    [aux_sym__int] = STATE(8),
    [sym__string] = STATE(397),
    [sym__escaped_string] = STATE(397),
    [aux_sym_pragma_repeat1] = STATE(5),
    [anon_sym_DEFGATE] = ACTIONS(214),
    [anon_sym_AS] = ACTIONS(214),
    [anon_sym_MATRIX] = ACTIONS(214),
    [anon_sym_PERMUTATION] = ACTIONS(214),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(214),
    [anon_sym_DEFCIRCUIT] = ACTIONS(214),
    [anon_sym_DEFFRAME] = ACTIONS(214),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(214),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(214),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(214),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(214),
    [anon_sym_DEFWAVEFORM] = ACTIONS(214),
    [anon_sym_DEFCAL] = ACTIONS(214),
    [anon_sym_MEASURE] = ACTIONS(214),
    [anon_sym_CONTROLLED] = ACTIONS(214),
    [anon_sym_DAGGER] = ACTIONS(214),
    [anon_sym_FORKED] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym_FENCE] = ACTIONS(214),
    [anon_sym_PULSE] = ACTIONS(214),
    [anon_sym_DELAY] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(214),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(214),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(214),
    [anon_sym_SET_DASHPHASE] = ACTIONS(214),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(214),
    [anon_sym_SET_DASHSCALE] = ACTIONS(214),
    [anon_sym_DECLARE] = ACTIONS(214),
    [anon_sym_SHARING] = ACTIONS(214),
    [anon_sym_OFFSET] = ACTIONS(214),
    [anon_sym_CAPTURE] = ACTIONS(214),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(214),
    [anon_sym_PRAGMA] = ACTIONS(214),
    [anon_sym_HALT] = ACTIONS(214),
    [anon_sym_NOP] = ACTIONS(214),
    [anon_sym_INCLUDE] = ACTIONS(214),
    [anon_sym_LABEL] = ACTIONS(214),
    [anon_sym_JUMP] = ACTIONS(214),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(214),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(214),
    [anon_sym_RESET] = ACTIONS(214),
    [anon_sym_WAIT] = ACTIONS(214),
    [anon_sym_STORE] = ACTIONS(214),
    [anon_sym_LOAD] = ACTIONS(214),
    [anon_sym_CONVERT] = ACTIONS(214),
    [anon_sym_EXCHANGE] = ACTIONS(214),
    [anon_sym_MOVE] = ACTIONS(214),
    [anon_sym_NEG] = ACTIONS(214),
    [anon_sym_NOT] = ACTIONS(214),
    [anon_sym_TRUE] = ACTIONS(214),
    [anon_sym_FALSE] = ACTIONS(214),
    [anon_sym_AND] = ACTIONS(214),
    [anon_sym_OR] = ACTIONS(214),
    [anon_sym_IOR] = ACTIONS(214),
    [anon_sym_XOR] = ACTIONS(214),
    [anon_sym_ADD] = ACTIONS(214),
    [anon_sym_SUB] = ACTIONS(214),
    [anon_sym_MUL] = ACTIONS(214),
    [anon_sym_DIV] = ACTIONS(214),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_GT] = ACTIONS(214),
    [anon_sym_GE] = ACTIONS(214),
    [anon_sym_LT] = ACTIONS(214),
    [anon_sym_LE] = ACTIONS(214),
    [anon_sym_SIN] = ACTIONS(214),
    [anon_sym_COS] = ACTIONS(214),
    [anon_sym_SQRT] = ACTIONS(214),
    [anon_sym_EXP] = ACTIONS(214),
    [anon_sym_CIS] = ACTIONS(214),
    [anon_sym_i] = ACTIONS(214),
    [anon_sym_pi] = ACTIONS(214),
    [sym_nonblocking] = ACTIONS(214),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(214),
    [sym_identifier] = ACTIONS(218),
    [sym__newline] = ACTIONS(224),
    [aux_sym__int_token1] = ACTIONS(222),
  },
  [7] = {
    [sym_pragma_name] = STATE(7),
    [sym_keyword] = STATE(11),
    [aux_sym__int] = STATE(8),
    [aux_sym_pragma_repeat1] = STATE(7),
    [anon_sym_DEFGATE] = ACTIONS(226),
    [anon_sym_AS] = ACTIONS(226),
    [anon_sym_MATRIX] = ACTIONS(226),
    [anon_sym_PERMUTATION] = ACTIONS(226),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(226),
    [anon_sym_DEFCIRCUIT] = ACTIONS(226),
    [anon_sym_DEFFRAME] = ACTIONS(226),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(226),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(226),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(226),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(226),
    [anon_sym_DEFWAVEFORM] = ACTIONS(226),
    [anon_sym_DEFCAL] = ACTIONS(226),
    [anon_sym_MEASURE] = ACTIONS(226),
    [anon_sym_CONTROLLED] = ACTIONS(226),
    [anon_sym_DAGGER] = ACTIONS(226),
    [anon_sym_FORKED] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(226),
    [anon_sym_SLASH] = ACTIONS(226),
    [anon_sym_CARET] = ACTIONS(226),
    [anon_sym_FENCE] = ACTIONS(226),
    [anon_sym_PULSE] = ACTIONS(226),
    [anon_sym_DELAY] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(226),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(226),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(226),
    [anon_sym_SET_DASHPHASE] = ACTIONS(226),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(226),
    [anon_sym_SET_DASHSCALE] = ACTIONS(226),
    [anon_sym_DECLARE] = ACTIONS(226),
    [anon_sym_SHARING] = ACTIONS(226),
    [anon_sym_OFFSET] = ACTIONS(226),
    [anon_sym_CAPTURE] = ACTIONS(226),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(226),
    [anon_sym_PRAGMA] = ACTIONS(226),
    [anon_sym_HALT] = ACTIONS(226),
    [anon_sym_NOP] = ACTIONS(226),
    [anon_sym_INCLUDE] = ACTIONS(226),
    [anon_sym_LABEL] = ACTIONS(226),
    [anon_sym_JUMP] = ACTIONS(226),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(226),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(226),
    [anon_sym_RESET] = ACTIONS(226),
    [anon_sym_WAIT] = ACTIONS(226),
    [anon_sym_STORE] = ACTIONS(226),
    [anon_sym_LOAD] = ACTIONS(226),
    [anon_sym_CONVERT] = ACTIONS(226),
    [anon_sym_EXCHANGE] = ACTIONS(226),
    [anon_sym_MOVE] = ACTIONS(226),
    [anon_sym_NEG] = ACTIONS(226),
    [anon_sym_NOT] = ACTIONS(226),
    [anon_sym_TRUE] = ACTIONS(226),
    [anon_sym_FALSE] = ACTIONS(226),
    [anon_sym_AND] = ACTIONS(226),
    [anon_sym_OR] = ACTIONS(226),
    [anon_sym_IOR] = ACTIONS(226),
    [anon_sym_XOR] = ACTIONS(226),
    [anon_sym_ADD] = ACTIONS(226),
    [anon_sym_SUB] = ACTIONS(226),
    [anon_sym_MUL] = ACTIONS(226),
    [anon_sym_DIV] = ACTIONS(226),
    [anon_sym_EQ] = ACTIONS(226),
    [anon_sym_GT] = ACTIONS(226),
    [anon_sym_GE] = ACTIONS(226),
    [anon_sym_LT] = ACTIONS(226),
    [anon_sym_LE] = ACTIONS(226),
    [anon_sym_SIN] = ACTIONS(226),
    [anon_sym_COS] = ACTIONS(226),
    [anon_sym_SQRT] = ACTIONS(226),
    [anon_sym_EXP] = ACTIONS(226),
    [anon_sym_CIS] = ACTIONS(226),
    [anon_sym_i] = ACTIONS(226),
    [anon_sym_pi] = ACTIONS(226),
    [sym_nonblocking] = ACTIONS(226),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(226),
    [sym_identifier] = ACTIONS(231),
    [sym__newline] = ACTIONS(234),
    [aux_sym__int_token1] = ACTIONS(236),
  },
  [8] = {
    [aux_sym__int] = STATE(9),
    [anon_sym_DEFGATE] = ACTIONS(239),
    [anon_sym_AS] = ACTIONS(239),
    [anon_sym_MATRIX] = ACTIONS(239),
    [anon_sym_PERMUTATION] = ACTIONS(239),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(239),
    [anon_sym_DEFCIRCUIT] = ACTIONS(239),
    [anon_sym_DEFFRAME] = ACTIONS(239),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(239),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(239),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(239),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(239),
    [anon_sym_DEFWAVEFORM] = ACTIONS(239),
    [anon_sym_DEFCAL] = ACTIONS(239),
    [anon_sym_MEASURE] = ACTIONS(239),
    [anon_sym_CONTROLLED] = ACTIONS(239),
    [anon_sym_DAGGER] = ACTIONS(239),
    [anon_sym_FORKED] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_FENCE] = ACTIONS(239),
    [anon_sym_PULSE] = ACTIONS(239),
    [anon_sym_DELAY] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(239),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(239),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(239),
    [anon_sym_SET_DASHPHASE] = ACTIONS(239),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(239),
    [anon_sym_SET_DASHSCALE] = ACTIONS(239),
    [anon_sym_DECLARE] = ACTIONS(239),
    [anon_sym_SHARING] = ACTIONS(239),
    [anon_sym_OFFSET] = ACTIONS(239),
    [anon_sym_CAPTURE] = ACTIONS(239),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(239),
    [anon_sym_PRAGMA] = ACTIONS(239),
    [anon_sym_HALT] = ACTIONS(239),
    [anon_sym_NOP] = ACTIONS(239),
    [anon_sym_INCLUDE] = ACTIONS(239),
    [anon_sym_LABEL] = ACTIONS(239),
    [anon_sym_JUMP] = ACTIONS(239),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(239),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(239),
    [anon_sym_RESET] = ACTIONS(239),
    [anon_sym_WAIT] = ACTIONS(239),
    [anon_sym_STORE] = ACTIONS(239),
    [anon_sym_LOAD] = ACTIONS(239),
    [anon_sym_CONVERT] = ACTIONS(239),
    [anon_sym_EXCHANGE] = ACTIONS(239),
    [anon_sym_MOVE] = ACTIONS(239),
    [anon_sym_NEG] = ACTIONS(239),
    [anon_sym_NOT] = ACTIONS(239),
    [anon_sym_TRUE] = ACTIONS(239),
    [anon_sym_FALSE] = ACTIONS(239),
    [anon_sym_AND] = ACTIONS(239),
    [anon_sym_OR] = ACTIONS(239),
    [anon_sym_IOR] = ACTIONS(239),
    [anon_sym_XOR] = ACTIONS(239),
    [anon_sym_ADD] = ACTIONS(239),
    [anon_sym_SUB] = ACTIONS(239),
    [anon_sym_MUL] = ACTIONS(239),
    [anon_sym_DIV] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_GE] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LE] = ACTIONS(239),
    [anon_sym_SIN] = ACTIONS(239),
    [anon_sym_COS] = ACTIONS(239),
    [anon_sym_SQRT] = ACTIONS(239),
    [anon_sym_EXP] = ACTIONS(239),
    [anon_sym_CIS] = ACTIONS(239),
    [anon_sym_i] = ACTIONS(239),
    [anon_sym_pi] = ACTIONS(239),
    [sym_nonblocking] = ACTIONS(239),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(239),
    [sym_identifier] = ACTIONS(239),
    [sym__newline] = ACTIONS(241),
    [aux_sym__int_token1] = ACTIONS(239),
  },
  [9] = {
    [aux_sym__int] = STATE(9),
    [anon_sym_DEFGATE] = ACTIONS(243),
    [anon_sym_AS] = ACTIONS(243),
    [anon_sym_MATRIX] = ACTIONS(243),
    [anon_sym_PERMUTATION] = ACTIONS(243),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(243),
    [anon_sym_DEFCIRCUIT] = ACTIONS(243),
    [anon_sym_DEFFRAME] = ACTIONS(243),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(243),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(243),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(243),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(243),
    [anon_sym_DEFWAVEFORM] = ACTIONS(243),
    [anon_sym_DEFCAL] = ACTIONS(243),
    [anon_sym_MEASURE] = ACTIONS(243),
    [anon_sym_CONTROLLED] = ACTIONS(243),
    [anon_sym_DAGGER] = ACTIONS(243),
    [anon_sym_FORKED] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_FENCE] = ACTIONS(243),
    [anon_sym_PULSE] = ACTIONS(243),
    [anon_sym_DELAY] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(243),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(243),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(243),
    [anon_sym_SET_DASHPHASE] = ACTIONS(243),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(243),
    [anon_sym_SET_DASHSCALE] = ACTIONS(243),
    [anon_sym_DECLARE] = ACTIONS(243),
    [anon_sym_SHARING] = ACTIONS(243),
    [anon_sym_OFFSET] = ACTIONS(243),
    [anon_sym_CAPTURE] = ACTIONS(243),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(243),
    [anon_sym_PRAGMA] = ACTIONS(243),
    [anon_sym_HALT] = ACTIONS(243),
    [anon_sym_NOP] = ACTIONS(243),
    [anon_sym_INCLUDE] = ACTIONS(243),
    [anon_sym_LABEL] = ACTIONS(243),
    [anon_sym_JUMP] = ACTIONS(243),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(243),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(243),
    [anon_sym_RESET] = ACTIONS(243),
    [anon_sym_WAIT] = ACTIONS(243),
    [anon_sym_STORE] = ACTIONS(243),
    [anon_sym_LOAD] = ACTIONS(243),
    [anon_sym_CONVERT] = ACTIONS(243),
    [anon_sym_EXCHANGE] = ACTIONS(243),
    [anon_sym_MOVE] = ACTIONS(243),
    [anon_sym_NEG] = ACTIONS(243),
    [anon_sym_NOT] = ACTIONS(243),
    [anon_sym_TRUE] = ACTIONS(243),
    [anon_sym_FALSE] = ACTIONS(243),
    [anon_sym_AND] = ACTIONS(243),
    [anon_sym_OR] = ACTIONS(243),
    [anon_sym_IOR] = ACTIONS(243),
    [anon_sym_XOR] = ACTIONS(243),
    [anon_sym_ADD] = ACTIONS(243),
    [anon_sym_SUB] = ACTIONS(243),
    [anon_sym_MUL] = ACTIONS(243),
    [anon_sym_DIV] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GE] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_LE] = ACTIONS(243),
    [anon_sym_SIN] = ACTIONS(243),
    [anon_sym_COS] = ACTIONS(243),
    [anon_sym_SQRT] = ACTIONS(243),
    [anon_sym_EXP] = ACTIONS(243),
    [anon_sym_CIS] = ACTIONS(243),
    [anon_sym_i] = ACTIONS(243),
    [anon_sym_pi] = ACTIONS(243),
    [sym_nonblocking] = ACTIONS(243),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(243),
    [sym_identifier] = ACTIONS(243),
    [sym__newline] = ACTIONS(245),
    [aux_sym__int_token1] = ACTIONS(247),
  },
  [10] = {
    [anon_sym_DEFGATE] = ACTIONS(239),
    [anon_sym_AS] = ACTIONS(239),
    [anon_sym_MATRIX] = ACTIONS(239),
    [anon_sym_PERMUTATION] = ACTIONS(239),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(239),
    [anon_sym_DEFCIRCUIT] = ACTIONS(239),
    [anon_sym_DEFFRAME] = ACTIONS(239),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(239),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(239),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(239),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(239),
    [anon_sym_DEFWAVEFORM] = ACTIONS(239),
    [anon_sym_DEFCAL] = ACTIONS(239),
    [anon_sym_MEASURE] = ACTIONS(239),
    [anon_sym_CONTROLLED] = ACTIONS(239),
    [anon_sym_DAGGER] = ACTIONS(239),
    [anon_sym_FORKED] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_FENCE] = ACTIONS(239),
    [anon_sym_PULSE] = ACTIONS(239),
    [anon_sym_DELAY] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(239),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(239),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(239),
    [anon_sym_SET_DASHPHASE] = ACTIONS(239),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(239),
    [anon_sym_SET_DASHSCALE] = ACTIONS(239),
    [anon_sym_DECLARE] = ACTIONS(239),
    [anon_sym_SHARING] = ACTIONS(239),
    [anon_sym_OFFSET] = ACTIONS(239),
    [anon_sym_CAPTURE] = ACTIONS(239),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(239),
    [anon_sym_PRAGMA] = ACTIONS(239),
    [anon_sym_HALT] = ACTIONS(239),
    [anon_sym_NOP] = ACTIONS(239),
    [anon_sym_INCLUDE] = ACTIONS(239),
    [anon_sym_LABEL] = ACTIONS(239),
    [anon_sym_JUMP] = ACTIONS(239),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(239),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(239),
    [anon_sym_RESET] = ACTIONS(239),
    [anon_sym_WAIT] = ACTIONS(239),
    [anon_sym_STORE] = ACTIONS(239),
    [anon_sym_LOAD] = ACTIONS(239),
    [anon_sym_CONVERT] = ACTIONS(239),
    [anon_sym_EXCHANGE] = ACTIONS(239),
    [anon_sym_MOVE] = ACTIONS(239),
    [anon_sym_NEG] = ACTIONS(239),
    [anon_sym_NOT] = ACTIONS(239),
    [anon_sym_TRUE] = ACTIONS(239),
    [anon_sym_FALSE] = ACTIONS(239),
    [anon_sym_AND] = ACTIONS(239),
    [anon_sym_OR] = ACTIONS(239),
    [anon_sym_IOR] = ACTIONS(239),
    [anon_sym_XOR] = ACTIONS(239),
    [anon_sym_ADD] = ACTIONS(239),
    [anon_sym_SUB] = ACTIONS(239),
    [anon_sym_MUL] = ACTIONS(239),
    [anon_sym_DIV] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_GE] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LE] = ACTIONS(239),
    [anon_sym_SIN] = ACTIONS(239),
    [anon_sym_COS] = ACTIONS(239),
    [anon_sym_SQRT] = ACTIONS(239),
    [anon_sym_EXP] = ACTIONS(239),
    [anon_sym_CIS] = ACTIONS(239),
    [anon_sym_i] = ACTIONS(239),
    [anon_sym_pi] = ACTIONS(239),
    [sym_nonblocking] = ACTIONS(239),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(239),
    [sym_identifier] = ACTIONS(239),
    [sym__newline] = ACTIONS(241),
    [aux_sym__int_token1] = ACTIONS(239),
  },
  [11] = {
    [anon_sym_DEFGATE] = ACTIONS(239),
    [anon_sym_AS] = ACTIONS(239),
    [anon_sym_MATRIX] = ACTIONS(239),
    [anon_sym_PERMUTATION] = ACTIONS(239),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(239),
    [anon_sym_DEFCIRCUIT] = ACTIONS(239),
    [anon_sym_DEFFRAME] = ACTIONS(239),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(239),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(239),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(239),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(239),
    [anon_sym_DEFWAVEFORM] = ACTIONS(239),
    [anon_sym_DEFCAL] = ACTIONS(239),
    [anon_sym_MEASURE] = ACTIONS(239),
    [anon_sym_CONTROLLED] = ACTIONS(239),
    [anon_sym_DAGGER] = ACTIONS(239),
    [anon_sym_FORKED] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_FENCE] = ACTIONS(239),
    [anon_sym_PULSE] = ACTIONS(239),
    [anon_sym_DELAY] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(239),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(239),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(239),
    [anon_sym_SET_DASHPHASE] = ACTIONS(239),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(239),
    [anon_sym_SET_DASHSCALE] = ACTIONS(239),
    [anon_sym_DECLARE] = ACTIONS(239),
    [anon_sym_SHARING] = ACTIONS(239),
    [anon_sym_OFFSET] = ACTIONS(239),
    [anon_sym_CAPTURE] = ACTIONS(239),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(239),
    [anon_sym_PRAGMA] = ACTIONS(239),
    [anon_sym_HALT] = ACTIONS(239),
    [anon_sym_NOP] = ACTIONS(239),
    [anon_sym_INCLUDE] = ACTIONS(239),
    [anon_sym_LABEL] = ACTIONS(239),
    [anon_sym_JUMP] = ACTIONS(239),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(239),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(239),
    [anon_sym_RESET] = ACTIONS(239),
    [anon_sym_WAIT] = ACTIONS(239),
    [anon_sym_STORE] = ACTIONS(239),
    [anon_sym_LOAD] = ACTIONS(239),
    [anon_sym_CONVERT] = ACTIONS(239),
    [anon_sym_EXCHANGE] = ACTIONS(239),
    [anon_sym_MOVE] = ACTIONS(239),
    [anon_sym_NEG] = ACTIONS(239),
    [anon_sym_NOT] = ACTIONS(239),
    [anon_sym_TRUE] = ACTIONS(239),
    [anon_sym_FALSE] = ACTIONS(239),
    [anon_sym_AND] = ACTIONS(239),
    [anon_sym_OR] = ACTIONS(239),
    [anon_sym_IOR] = ACTIONS(239),
    [anon_sym_XOR] = ACTIONS(239),
    [anon_sym_ADD] = ACTIONS(239),
    [anon_sym_SUB] = ACTIONS(239),
    [anon_sym_MUL] = ACTIONS(239),
    [anon_sym_DIV] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_GE] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LE] = ACTIONS(239),
    [anon_sym_SIN] = ACTIONS(239),
    [anon_sym_COS] = ACTIONS(239),
    [anon_sym_SQRT] = ACTIONS(239),
    [anon_sym_EXP] = ACTIONS(239),
    [anon_sym_CIS] = ACTIONS(239),
    [anon_sym_i] = ACTIONS(239),
    [anon_sym_pi] = ACTIONS(239),
    [sym_nonblocking] = ACTIONS(239),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(239),
    [sym_identifier] = ACTIONS(239),
    [sym__newline] = ACTIONS(241),
    [aux_sym__int_token1] = ACTIONS(239),
  },
  [12] = {
    [anon_sym_DEFGATE] = ACTIONS(250),
    [anon_sym_AS] = ACTIONS(250),
    [anon_sym_MATRIX] = ACTIONS(250),
    [anon_sym_PERMUTATION] = ACTIONS(250),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(250),
    [anon_sym_DEFCIRCUIT] = ACTIONS(250),
    [anon_sym_DEFFRAME] = ACTIONS(250),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(250),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(250),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(250),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(250),
    [anon_sym_DEFWAVEFORM] = ACTIONS(250),
    [anon_sym_DEFCAL] = ACTIONS(250),
    [anon_sym_MEASURE] = ACTIONS(250),
    [anon_sym_CONTROLLED] = ACTIONS(250),
    [anon_sym_DAGGER] = ACTIONS(250),
    [anon_sym_FORKED] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_SLASH] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_FENCE] = ACTIONS(250),
    [anon_sym_PULSE] = ACTIONS(250),
    [anon_sym_DELAY] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(250),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(250),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(250),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(250),
    [anon_sym_SET_DASHPHASE] = ACTIONS(250),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(250),
    [anon_sym_SET_DASHSCALE] = ACTIONS(250),
    [anon_sym_DECLARE] = ACTIONS(250),
    [anon_sym_SHARING] = ACTIONS(250),
    [anon_sym_OFFSET] = ACTIONS(250),
    [anon_sym_CAPTURE] = ACTIONS(250),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(250),
    [anon_sym_PRAGMA] = ACTIONS(250),
    [anon_sym_HALT] = ACTIONS(250),
    [anon_sym_NOP] = ACTIONS(250),
    [anon_sym_INCLUDE] = ACTIONS(250),
    [anon_sym_LABEL] = ACTIONS(250),
    [anon_sym_JUMP] = ACTIONS(250),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(250),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(250),
    [anon_sym_RESET] = ACTIONS(250),
    [anon_sym_WAIT] = ACTIONS(250),
    [anon_sym_STORE] = ACTIONS(250),
    [anon_sym_LOAD] = ACTIONS(250),
    [anon_sym_CONVERT] = ACTIONS(250),
    [anon_sym_EXCHANGE] = ACTIONS(250),
    [anon_sym_MOVE] = ACTIONS(250),
    [anon_sym_NEG] = ACTIONS(250),
    [anon_sym_NOT] = ACTIONS(250),
    [anon_sym_TRUE] = ACTIONS(250),
    [anon_sym_FALSE] = ACTIONS(250),
    [anon_sym_AND] = ACTIONS(250),
    [anon_sym_OR] = ACTIONS(250),
    [anon_sym_IOR] = ACTIONS(250),
    [anon_sym_XOR] = ACTIONS(250),
    [anon_sym_ADD] = ACTIONS(250),
    [anon_sym_SUB] = ACTIONS(250),
    [anon_sym_MUL] = ACTIONS(250),
    [anon_sym_DIV] = ACTIONS(250),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GE] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_LE] = ACTIONS(250),
    [anon_sym_SIN] = ACTIONS(250),
    [anon_sym_COS] = ACTIONS(250),
    [anon_sym_SQRT] = ACTIONS(250),
    [anon_sym_EXP] = ACTIONS(250),
    [anon_sym_CIS] = ACTIONS(250),
    [anon_sym_i] = ACTIONS(250),
    [anon_sym_pi] = ACTIONS(250),
    [sym_nonblocking] = ACTIONS(250),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(250),
    [sym_identifier] = ACTIONS(250),
    [sym__newline] = ACTIONS(252),
    [aux_sym__int_token1] = ACTIONS(250),
  },
  [13] = {
    [sym_keyword] = STATE(6),
    [anon_sym_DEFGATE] = ACTIONS(214),
    [anon_sym_AS] = ACTIONS(214),
    [anon_sym_MATRIX] = ACTIONS(214),
    [anon_sym_PERMUTATION] = ACTIONS(214),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(214),
    [anon_sym_DEFCIRCUIT] = ACTIONS(214),
    [anon_sym_DEFFRAME] = ACTIONS(214),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(214),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(214),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(214),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(214),
    [anon_sym_DEFWAVEFORM] = ACTIONS(214),
    [anon_sym_DEFCAL] = ACTIONS(214),
    [anon_sym_MEASURE] = ACTIONS(214),
    [anon_sym_CONTROLLED] = ACTIONS(214),
    [anon_sym_DAGGER] = ACTIONS(214),
    [anon_sym_FORKED] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym_FENCE] = ACTIONS(214),
    [anon_sym_PULSE] = ACTIONS(214),
    [anon_sym_DELAY] = ACTIONS(214),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(214),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(214),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(214),
    [anon_sym_SET_DASHPHASE] = ACTIONS(214),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(214),
    [anon_sym_SET_DASHSCALE] = ACTIONS(214),
    [anon_sym_DECLARE] = ACTIONS(214),
    [anon_sym_SHARING] = ACTIONS(214),
    [anon_sym_OFFSET] = ACTIONS(214),
    [anon_sym_CAPTURE] = ACTIONS(214),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(214),
    [anon_sym_PRAGMA] = ACTIONS(214),
    [anon_sym_HALT] = ACTIONS(214),
    [anon_sym_NOP] = ACTIONS(214),
    [anon_sym_INCLUDE] = ACTIONS(214),
    [anon_sym_LABEL] = ACTIONS(214),
    [anon_sym_JUMP] = ACTIONS(214),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(214),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(214),
    [anon_sym_RESET] = ACTIONS(214),
    [anon_sym_WAIT] = ACTIONS(214),
    [anon_sym_STORE] = ACTIONS(214),
    [anon_sym_LOAD] = ACTIONS(214),
    [anon_sym_CONVERT] = ACTIONS(214),
    [anon_sym_EXCHANGE] = ACTIONS(214),
    [anon_sym_MOVE] = ACTIONS(214),
    [anon_sym_NEG] = ACTIONS(214),
    [anon_sym_NOT] = ACTIONS(214),
    [anon_sym_TRUE] = ACTIONS(214),
    [anon_sym_FALSE] = ACTIONS(214),
    [anon_sym_AND] = ACTIONS(214),
    [anon_sym_OR] = ACTIONS(214),
    [anon_sym_IOR] = ACTIONS(214),
    [anon_sym_XOR] = ACTIONS(214),
    [anon_sym_ADD] = ACTIONS(214),
    [anon_sym_SUB] = ACTIONS(214),
    [anon_sym_MUL] = ACTIONS(214),
    [anon_sym_DIV] = ACTIONS(214),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_GT] = ACTIONS(214),
    [anon_sym_GE] = ACTIONS(214),
    [anon_sym_LT] = ACTIONS(214),
    [anon_sym_LE] = ACTIONS(214),
    [anon_sym_SIN] = ACTIONS(214),
    [anon_sym_COS] = ACTIONS(214),
    [anon_sym_SQRT] = ACTIONS(214),
    [anon_sym_EXP] = ACTIONS(214),
    [anon_sym_CIS] = ACTIONS(214),
    [anon_sym_i] = ACTIONS(214),
    [anon_sym_pi] = ACTIONS(214),
    [sym_nonblocking] = ACTIONS(214),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(214),
    [sym_identifier] = ACTIONS(254),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_quil_repeat1,
    ACTIONS(256), 56,
      sym_comment,
      anon_sym_DEFGATE,
      anon_sym_DEFCIRCUIT,
      anon_sym_DEFFRAME,
      anon_sym_DEFWAVEFORM,
      anon_sym_DEFCAL,
      anon_sym_MEASURE,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
      anon_sym_FENCE,
      anon_sym_PULSE,
      anon_sym_DELAY,
      anon_sym_SET_DASHFREQUENCY,
      anon_sym_SHIFT_DASHFREQUENCY,
      anon_sym_SHIFT_DASHPHASE,
      anon_sym_SET_DASHPHASE,
      anon_sym_SWAP_DASHPHASE,
      anon_sym_SET_DASHSCALE,
      anon_sym_DECLARE,
      anon_sym_CAPTURE,
      anon_sym_RAW_DASHCAPTURE,
      anon_sym_PRAGMA,
      anon_sym_HALT,
      anon_sym_NOP,
      anon_sym_INCLUDE,
      anon_sym_LABEL,
      anon_sym_JUMP,
      anon_sym_JUMP_DASHWHEN,
      anon_sym_JUMP_DASHUNLESS,
      anon_sym_RESET,
      anon_sym_WAIT,
      anon_sym_STORE,
      anon_sym_LOAD,
      anon_sym_CONVERT,
      anon_sym_EXCHANGE,
      anon_sym_MOVE,
      anon_sym_NEG,
      anon_sym_NOT,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_IOR,
      anon_sym_XOR,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_GE,
      anon_sym_LT,
      anon_sym_LE,
      sym_nonblocking,
      sym_identifier,
  [68] = 4,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_quil_repeat1,
    ACTIONS(262), 56,
      sym_comment,
      anon_sym_DEFGATE,
      anon_sym_DEFCIRCUIT,
      anon_sym_DEFFRAME,
      anon_sym_DEFWAVEFORM,
      anon_sym_DEFCAL,
      anon_sym_MEASURE,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
      anon_sym_FENCE,
      anon_sym_PULSE,
      anon_sym_DELAY,
      anon_sym_SET_DASHFREQUENCY,
      anon_sym_SHIFT_DASHFREQUENCY,
      anon_sym_SHIFT_DASHPHASE,
      anon_sym_SET_DASHPHASE,
      anon_sym_SWAP_DASHPHASE,
      anon_sym_SET_DASHSCALE,
      anon_sym_DECLARE,
      anon_sym_CAPTURE,
      anon_sym_RAW_DASHCAPTURE,
      anon_sym_PRAGMA,
      anon_sym_HALT,
      anon_sym_NOP,
      anon_sym_INCLUDE,
      anon_sym_LABEL,
      anon_sym_JUMP,
      anon_sym_JUMP_DASHWHEN,
      anon_sym_JUMP_DASHUNLESS,
      anon_sym_RESET,
      anon_sym_WAIT,
      anon_sym_STORE,
      anon_sym_LOAD,
      anon_sym_CONVERT,
      anon_sym_EXCHANGE,
      anon_sym_MOVE,
      anon_sym_NEG,
      anon_sym_NOT,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_IOR,
      anon_sym_XOR,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_GE,
      anon_sym_LT,
      anon_sym_LE,
      sym_nonblocking,
      sym_identifier,
  [136] = 1,
    ACTIONS(267), 50,
      anon_sym_MEASURE,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
      anon_sym_FENCE,
      anon_sym_PULSE,
      anon_sym_DELAY,
      anon_sym_SET_DASHFREQUENCY,
      anon_sym_SHIFT_DASHFREQUENCY,
      anon_sym_SHIFT_DASHPHASE,
      anon_sym_SET_DASHPHASE,
      anon_sym_SWAP_DASHPHASE,
      anon_sym_SET_DASHSCALE,
      anon_sym_DECLARE,
      anon_sym_CAPTURE,
      anon_sym_RAW_DASHCAPTURE,
      anon_sym_PRAGMA,
      anon_sym_HALT,
      anon_sym_NOP,
      anon_sym_INCLUDE,
      anon_sym_LABEL,
      anon_sym_JUMP,
      anon_sym_JUMP_DASHWHEN,
      anon_sym_JUMP_DASHUNLESS,
      anon_sym_RESET,
      anon_sym_WAIT,
      anon_sym_STORE,
      anon_sym_LOAD,
      anon_sym_CONVERT,
      anon_sym_EXCHANGE,
      anon_sym_MOVE,
      anon_sym_NEG,
      anon_sym_NOT,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_IOR,
      anon_sym_XOR,
      anon_sym_ADD,
      anon_sym_SUB,
      anon_sym_MUL,
      anon_sym_DIV,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_GE,
      anon_sym_LT,
      anon_sym_LE,
      sym_nonblocking,
      sym_identifier,
  [189] = 20,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_PERCENT,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym__newline,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(287), 1,
      aux_sym__int_token1,
    STATE(49), 1,
      aux_sym__int,
    STATE(52), 1,
      sym_variable,
    STATE(58), 1,
      sym_qubit,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(230), 1,
      sym_expression,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(50), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(137), 3,
      sym__atom,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [260] = 18,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(288), 1,
      sym_expression,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(439), 2,
      sym__string,
      sym__escaped_string,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [326] = 18,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      aux_sym_delay_frames_repeat1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(208), 1,
      sym_expression,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [391] = 17,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(157), 1,
      sym_expression,
    STATE(391), 1,
      sym_function,
    STATE(445), 1,
      sym_matrix_row,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [453] = 17,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(157), 1,
      sym_expression,
    STATE(370), 1,
      sym_matrix_row,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [515] = 16,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(165), 1,
      sym_expression,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(143), 2,
      sym__product,
      sym__power,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [574] = 16,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(217), 1,
      sym_expression,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [633] = 16,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(190), 1,
      sym_expression,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(143), 2,
      sym__product,
      sym__power,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [692] = 16,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(220), 1,
      sym_expression,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [751] = 16,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(270), 1,
      sym_expression,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(143), 2,
      sym__product,
      sym__power,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [810] = 16,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(174), 1,
      sym_expression,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(143), 2,
      sym__product,
      sym__power,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [869] = 16,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(198), 1,
      sym_expression,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [928] = 16,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(278), 1,
      sym_expression,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(143), 2,
      sym__product,
      sym__power,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [987] = 16,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(181), 1,
      sym_expression,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1046] = 16,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(175), 1,
      sym_expression,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(143), 2,
      sym__product,
      sym__power,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1105] = 16,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(276), 1,
      sym_expression,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(143), 2,
      sym__product,
      sym__power,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1164] = 16,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(214), 1,
      sym_expression,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1223] = 16,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(242), 1,
      sym_expression,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(143), 2,
      sym__product,
      sym__power,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1282] = 16,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(215), 1,
      sym_expression,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1341] = 16,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(216), 1,
      sym_expression,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1400] = 16,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(167), 1,
      sym_expression,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(143), 2,
      sym__product,
      sym__power,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1459] = 16,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(210), 1,
      sym_expression,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(143), 2,
      sym__product,
      sym__power,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1518] = 16,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(218), 1,
      sym_expression,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(152), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1577] = 15,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(153), 2,
      sym__product,
      sym__power,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1633] = 15,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(139), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1689] = 15,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(154), 1,
      sym__power,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1744] = 15,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(138), 1,
      sym__power,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(121), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1799] = 15,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(145), 1,
      sym__power,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1854] = 15,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(140), 1,
      sym__power,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1909] = 14,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_PERCENT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(84), 1,
      sym__float,
    STATE(452), 1,
      sym_function,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(132), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1961] = 14,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(391), 1,
      sym_function,
    ACTIONS(271), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(128), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(277), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2013] = 4,
    ACTIONS(245), 1,
      sym__newline,
    ACTIONS(313), 1,
      aux_sym__int_token1,
    STATE(48), 1,
      aux_sym__int,
    ACTIONS(243), 19,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_e,
      anon_sym_E,
      anon_sym_DOT,
  [2044] = 5,
    ACTIONS(320), 1,
      sym__newline,
    STATE(48), 1,
      aux_sym__int,
    ACTIONS(322), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(318), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
    ACTIONS(316), 15,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
      aux_sym__int_token1,
  [2077] = 7,
    ACTIONS(326), 1,
      anon_sym_PERCENT,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(331), 1,
      aux_sym__int_token1,
    STATE(53), 1,
      aux_sym__int,
    STATE(50), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(58), 2,
      sym_variable,
      sym_qubit,
    ACTIONS(324), 13,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
  [2113] = 2,
    ACTIONS(336), 1,
      sym__newline,
    ACTIONS(334), 19,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
      aux_sym__int_token1,
  [2138] = 3,
    ACTIONS(342), 1,
      sym__newline,
    ACTIONS(340), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
    ACTIONS(338), 15,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
      aux_sym__int_token1,
  [2164] = 3,
    ACTIONS(320), 1,
      sym__newline,
    STATE(55), 1,
      aux_sym__int,
    ACTIONS(316), 16,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
      aux_sym__int_token1,
  [2189] = 4,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      sym__newline,
    STATE(19), 1,
      aux_sym_delay_frames_repeat1,
    ACTIONS(344), 15,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
      aux_sym__int_token1,
  [2216] = 4,
    ACTIONS(245), 1,
      sym__newline,
    ACTIONS(348), 1,
      aux_sym__int_token1,
    STATE(55), 1,
      aux_sym__int,
    ACTIONS(243), 15,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
  [2243] = 3,
    ACTIONS(351), 1,
      aux_sym__int_token1,
    STATE(56), 1,
      aux_sym__int,
    ACTIONS(245), 15,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
      anon_sym_DOT,
  [2267] = 4,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      aux_sym_delay_frames_repeat1,
    ACTIONS(354), 2,
      anon_sym_LPAREN,
      aux_sym__int_token1,
    ACTIONS(356), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
  [2293] = 2,
    ACTIONS(342), 1,
      sym__newline,
    ACTIONS(338), 16,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
      aux_sym__int_token1,
  [2315] = 2,
    ACTIONS(361), 2,
      anon_sym_LPAREN,
      aux_sym__int_token1,
    ACTIONS(363), 14,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
  [2336] = 2,
    ACTIONS(365), 2,
      anon_sym_LPAREN,
      aux_sym__int_token1,
    ACTIONS(367), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
  [2356] = 2,
    ACTIONS(369), 2,
      anon_sym_LPAREN,
      aux_sym__int_token1,
    ACTIONS(267), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
  [2376] = 4,
    ACTIONS(245), 1,
      sym__newline,
    ACTIONS(371), 1,
      aux_sym__int_token1,
    STATE(62), 1,
      aux_sym__int,
    ACTIONS(243), 11,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
      anon_sym_DOT,
  [2399] = 7,
    ACTIONS(374), 1,
      anon_sym_i,
    ACTIONS(376), 1,
      sym__newline,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      aux_sym__int_token1,
    STATE(62), 1,
      aux_sym__int,
    ACTIONS(322), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(318), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [2427] = 6,
    ACTIONS(382), 1,
      anon_sym_i,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    STATE(56), 1,
      aux_sym__int,
    ACTIONS(384), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(376), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [2453] = 4,
    ACTIONS(392), 1,
      sym__newline,
    ACTIONS(394), 1,
      aux_sym__int_token1,
    STATE(68), 1,
      aux_sym__int,
    ACTIONS(390), 9,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
  [2474] = 3,
    ACTIONS(396), 1,
      aux_sym__int_token1,
    STATE(69), 1,
      aux_sym__int,
    ACTIONS(392), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
  [2493] = 4,
    ACTIONS(380), 1,
      aux_sym__int_token1,
    ACTIONS(392), 1,
      sym__newline,
    STATE(62), 1,
      aux_sym__int,
    ACTIONS(390), 9,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
  [2514] = 4,
    ACTIONS(380), 1,
      aux_sym__int_token1,
    ACTIONS(400), 1,
      sym__newline,
    STATE(62), 1,
      aux_sym__int,
    ACTIONS(398), 9,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
  [2535] = 3,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    STATE(56), 1,
      aux_sym__int,
    ACTIONS(400), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
  [2554] = 3,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    STATE(56), 1,
      aux_sym__int,
    ACTIONS(392), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
  [2573] = 9,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    ACTIONS(279), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(387), 2,
      sym_addr,
      sym_number,
  [2603] = 1,
    ACTIONS(336), 11,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym__int_token1,
  [2617] = 3,
    ACTIONS(404), 1,
      sym__newline,
    ACTIONS(322), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(402), 7,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [2634] = 2,
    ACTIONS(384), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(404), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [2649] = 8,
    ACTIONS(406), 1,
      anon_sym_COLON,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(110), 1,
      sym_variables,
    STATE(161), 1,
      aux_sym__int,
    STATE(104), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [2676] = 3,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    STATE(56), 1,
      aux_sym__int,
    ACTIONS(414), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [2693] = 8,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      sym__newline,
    ACTIONS(420), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      sym_params,
    STATE(203), 1,
      aux_sym__int,
    STATE(94), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [2720] = 8,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      aux_sym__int_token1,
    ACTIONS(422), 1,
      sym__newline,
    STATE(98), 1,
      sym_params,
    STATE(203), 1,
      aux_sym__int,
    STATE(92), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [2747] = 4,
    ACTIONS(380), 1,
      aux_sym__int_token1,
    ACTIONS(414), 1,
      sym__newline,
    STATE(62), 1,
      aux_sym__int,
    ACTIONS(424), 7,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [2766] = 7,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_params,
    STATE(161), 1,
      aux_sym__int,
    STATE(103), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [2790] = 2,
    ACTIONS(336), 1,
      sym__newline,
    ACTIONS(334), 8,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [2804] = 6,
    ACTIONS(428), 1,
      anon_sym_PERCENT,
    ACTIONS(431), 1,
      aux_sym__int_token1,
    STATE(161), 1,
      aux_sym__int,
    ACTIONS(329), 2,
      anon_sym_COLON,
      anon_sym_DQUOTE,
    STATE(82), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [2826] = 2,
    ACTIONS(436), 1,
      anon_sym_LBRACK,
    ACTIONS(434), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [2839] = 2,
    ACTIONS(382), 1,
      anon_sym_i,
    ACTIONS(376), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [2852] = 3,
    ACTIONS(374), 1,
      anon_sym_i,
    ACTIONS(376), 1,
      sym__newline,
    ACTIONS(318), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [2867] = 7,
    ACTIONS(438), 1,
      anon_sym_AS,
    ACTIONS(440), 1,
      anon_sym_COLON,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(158), 1,
      sym_variables,
    STATE(451), 1,
      sym_qubit_variables,
    STATE(184), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [2890] = 6,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(446), 1,
      anon_sym_PERCENT,
    ACTIONS(449), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      aux_sym__int,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [2911] = 1,
    ACTIONS(452), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [2922] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(161), 1,
      aux_sym__int,
    STATE(271), 1,
      sym_frame,
    STATE(119), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [2943] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(161), 1,
      aux_sym__int,
    STATE(268), 1,
      sym_frame,
    STATE(119), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [2964] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(161), 1,
      aux_sym__int,
    STATE(266), 1,
      sym_frame,
    STATE(119), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [2985] = 6,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(420), 1,
      aux_sym__int_token1,
    ACTIONS(454), 1,
      sym__newline,
    STATE(203), 1,
      aux_sym__int,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3006] = 6,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(420), 1,
      aux_sym__int_token1,
    ACTIONS(422), 1,
      sym__newline,
    STATE(203), 1,
      aux_sym__int,
    STATE(92), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3027] = 6,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(420), 1,
      aux_sym__int_token1,
    ACTIONS(422), 1,
      sym__newline,
    STATE(203), 1,
      aux_sym__int,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3048] = 3,
    ACTIONS(434), 1,
      sym__newline,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3063] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(161), 1,
      aux_sym__int,
    STATE(252), 1,
      sym_frame,
    STATE(119), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3084] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    ACTIONS(460), 1,
      anon_sym_COLON,
    STATE(161), 1,
      aux_sym__int,
    STATE(82), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3105] = 6,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(420), 1,
      aux_sym__int_token1,
    ACTIONS(454), 1,
      sym__newline,
    STATE(203), 1,
      aux_sym__int,
    STATE(113), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3126] = 6,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(420), 1,
      aux_sym__int_token1,
    ACTIONS(462), 1,
      sym__newline,
    STATE(203), 1,
      aux_sym__int,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3147] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    ACTIONS(464), 1,
      anon_sym_COLON,
    STATE(161), 1,
      aux_sym__int,
    STATE(82), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3168] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(161), 1,
      aux_sym__int,
    STATE(344), 1,
      sym_frame,
    STATE(102), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3189] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      aux_sym__int,
    STATE(82), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3210] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    ACTIONS(468), 1,
      anon_sym_COLON,
    STATE(161), 1,
      aux_sym__int,
    STATE(82), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3231] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    ACTIONS(470), 1,
      anon_sym_COLON,
    STATE(161), 1,
      aux_sym__int,
    STATE(82), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3252] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(33), 1,
      sym_frame,
    STATE(161), 1,
      aux_sym__int,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3273] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(35), 1,
      sym_frame,
    STATE(161), 1,
      aux_sym__int,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3294] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(36), 1,
      sym_frame,
    STATE(161), 1,
      aux_sym__int,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3315] = 2,
    ACTIONS(452), 1,
      sym__newline,
    ACTIONS(472), 7,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3328] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      aux_sym__int,
    STATE(82), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3349] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    ACTIONS(470), 1,
      anon_sym_COLON,
    STATE(161), 1,
      aux_sym__int,
    STATE(100), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3370] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(23), 1,
      sym_frame,
    STATE(161), 1,
      aux_sym__int,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3391] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(39), 1,
      sym_frame,
    STATE(161), 1,
      aux_sym__int,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3412] = 6,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(420), 1,
      aux_sym__int_token1,
    ACTIONS(476), 1,
      sym__newline,
    STATE(203), 1,
      aux_sym__int,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3433] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(25), 1,
      sym_frame,
    STATE(161), 1,
      aux_sym__int,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3454] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(161), 1,
      aux_sym__int,
    STATE(250), 1,
      sym_frame,
    STATE(119), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3475] = 6,
    ACTIONS(291), 1,
      anon_sym_PERCENT,
    ACTIONS(420), 1,
      aux_sym__int_token1,
    ACTIONS(478), 1,
      sym__newline,
    STATE(203), 1,
      aux_sym__int,
    STATE(99), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3496] = 7,
    ACTIONS(293), 1,
      aux_sym__int_token1,
    ACTIONS(482), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(85), 1,
      sym__float,
    STATE(381), 1,
      sym_number,
    ACTIONS(480), 2,
      anon_sym_i,
      anon_sym_pi,
  [3519] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(161), 1,
      aux_sym__int,
    STATE(253), 1,
      sym_frame,
    STATE(119), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3540] = 6,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    ACTIONS(484), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      aux_sym__int,
    STATE(82), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3561] = 1,
    ACTIONS(486), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3571] = 2,
    ACTIONS(490), 1,
      anon_sym_CARET,
    ACTIONS(488), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3583] = 6,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(494), 1,
      aux_sym__int_token1,
    STATE(17), 1,
      aux_sym_def_circuit_repeat1,
    STATE(53), 1,
      aux_sym__int,
    STATE(54), 1,
      sym_qubit_designator,
    STATE(58), 2,
      sym_variable,
      sym_qubit,
  [3603] = 2,
    ACTIONS(498), 1,
      sym__newline,
    ACTIONS(496), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3615] = 5,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      aux_sym__int_token1,
    STATE(161), 1,
      aux_sym__int,
    STATE(97), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(195), 2,
      sym_variable,
      sym_qubit,
  [3633] = 1,
    ACTIONS(500), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3643] = 1,
    ACTIONS(502), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3653] = 2,
    ACTIONS(500), 1,
      sym__newline,
    ACTIONS(504), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3665] = 2,
    ACTIONS(508), 1,
      sym__newline,
    ACTIONS(506), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3677] = 1,
    ACTIONS(498), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3687] = 2,
    ACTIONS(502), 1,
      sym__newline,
    ACTIONS(510), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3699] = 1,
    ACTIONS(512), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3709] = 1,
    ACTIONS(508), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3719] = 2,
    ACTIONS(486), 1,
      sym__newline,
    ACTIONS(514), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3731] = 2,
    ACTIONS(376), 1,
      sym__newline,
    ACTIONS(318), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3743] = 2,
    ACTIONS(512), 1,
      sym__newline,
    ACTIONS(516), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3755] = 1,
    ACTIONS(376), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3765] = 3,
    ACTIONS(488), 1,
      sym__newline,
    ACTIONS(520), 1,
      anon_sym_CARET,
    ACTIONS(518), 5,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3779] = 1,
    ACTIONS(522), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3788] = 3,
    ACTIONS(528), 1,
      sym__newline,
    ACTIONS(526), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(524), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3801] = 2,
    ACTIONS(522), 1,
      sym__newline,
    ACTIONS(530), 5,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3812] = 5,
    ACTIONS(532), 1,
      anon_sym_PERCENT,
    ACTIONS(534), 1,
      aux_sym__int_token1,
    STATE(168), 1,
      aux_sym__int,
    STATE(189), 1,
      sym_qubit_designator,
    STATE(267), 2,
      sym_variable,
      sym_qubit,
  [3829] = 2,
    STATE(354), 1,
      sym_frame_attr,
    ACTIONS(536), 5,
      anon_sym_SAMPLE_DASHRATE,
      anon_sym_INITIAL_DASHFREQUENCY,
      anon_sym_DIRECTION,
      anon_sym_HARDWARE_DASHOBJECT,
      anon_sym_CENTER_DASHFREQUENCY,
  [3840] = 2,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(538), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3851] = 4,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(542), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(380), 2,
      sym_addr,
      sym_signed_number,
  [3866] = 2,
    ACTIONS(548), 1,
      sym__newline,
    ACTIONS(546), 5,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3877] = 4,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(542), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(425), 2,
      sym_addr,
      sym_signed_number,
  [3892] = 4,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(542), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(427), 2,
      sym_addr,
      sym_signed_number,
  [3907] = 2,
    ACTIONS(434), 1,
      aux_sym__int_token1,
    ACTIONS(456), 5,
      anon_sym_LBRACK,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
  [3918] = 5,
    ACTIONS(550), 1,
      anon_sym_PERCENT,
    ACTIONS(552), 1,
      aux_sym__int_token1,
    STATE(200), 1,
      aux_sym__int,
    STATE(331), 1,
      sym_qubit_designator,
    STATE(326), 2,
      sym_variable,
      sym_qubit,
  [3935] = 2,
    ACTIONS(500), 1,
      aux_sym__int_token1,
    ACTIONS(504), 5,
      anon_sym_LBRACK,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
  [3946] = 2,
    ACTIONS(502), 1,
      aux_sym__int_token1,
    ACTIONS(510), 5,
      anon_sym_LBRACK,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
  [3957] = 3,
    ACTIONS(538), 1,
      sym__newline,
    ACTIONS(526), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(554), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3970] = 2,
    ACTIONS(540), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(528), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3981] = 1,
    ACTIONS(548), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3990] = 2,
    ACTIONS(500), 2,
      sym_identifier,
      aux_sym__int_token1,
    ACTIONS(504), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
  [4000] = 3,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(162), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(556), 3,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
  [4012] = 5,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_PLUS,
    ACTIONS(564), 1,
      anon_sym_DASH,
    ACTIONS(566), 1,
      sym__newline,
    STATE(291), 1,
      aux_sym_params_repeat1,
  [4028] = 4,
    ACTIONS(568), 1,
      anon_sym_COLON,
    ACTIONS(570), 1,
      sym_identifier,
    STATE(421), 1,
      sym_qubit_variables,
    STATE(184), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4042] = 1,
    ACTIONS(369), 5,
      anon_sym_SAMPLE_DASHRATE,
      anon_sym_INITIAL_DASHFREQUENCY,
      anon_sym_DIRECTION,
      anon_sym_HARDWARE_DASHOBJECT,
      anon_sym_CENTER_DASHFREQUENCY,
  [4050] = 2,
    ACTIONS(434), 2,
      sym_identifier,
      aux_sym__int_token1,
    ACTIONS(456), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
  [4060] = 2,
    STATE(56), 1,
      aux_sym__int,
    ACTIONS(320), 4,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym__int_token1,
  [4070] = 3,
    ACTIONS(575), 1,
      sym_identifier,
    STATE(162), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(572), 3,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
  [4082] = 5,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(577), 1,
      aux_sym__int_token1,
    STATE(273), 1,
      aux_sym__int,
    STATE(426), 1,
      sym_addr,
  [4098] = 4,
    ACTIONS(245), 1,
      sym__newline,
    ACTIONS(579), 1,
      aux_sym__int_token1,
    STATE(164), 1,
      aux_sym__int,
    ACTIONS(243), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [4112] = 5,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_PLUS,
    ACTIONS(588), 1,
      anon_sym_DASH,
    STATE(261), 1,
      aux_sym_params_repeat1,
  [4128] = 2,
    ACTIONS(502), 2,
      sym_identifier,
      aux_sym__int_token1,
    ACTIONS(510), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
  [4138] = 5,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_PLUS,
    ACTIONS(588), 1,
      anon_sym_DASH,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_params_repeat1,
  [4154] = 4,
    ACTIONS(320), 1,
      sym__newline,
    ACTIONS(592), 1,
      aux_sym__int_token1,
    STATE(164), 1,
      aux_sym__int,
    ACTIONS(316), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [4168] = 3,
    ACTIONS(594), 1,
      sym_identifier,
    ACTIONS(596), 1,
      sym__newline,
    STATE(188), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4179] = 3,
    ACTIONS(598), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(378), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4190] = 3,
    ACTIONS(600), 1,
      anon_sym_OFFSET,
    ACTIONS(602), 1,
      sym__newline,
    STATE(178), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4201] = 3,
    ACTIONS(598), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(418), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4212] = 4,
    ACTIONS(604), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(247), 1,
      aux_sym_matrix_repeat1,
    STATE(446), 1,
      sym_matrix,
  [4225] = 3,
    ACTIONS(586), 1,
      anon_sym_PLUS,
    ACTIONS(588), 1,
      anon_sym_DASH,
    ACTIONS(606), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4236] = 3,
    ACTIONS(586), 1,
      anon_sym_PLUS,
    ACTIONS(588), 1,
      anon_sym_DASH,
    ACTIONS(608), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4247] = 3,
    ACTIONS(610), 1,
      sym__newline,
    STATE(142), 1,
      sym__newline_tab,
    STATE(197), 2,
      sym_frame_spec,
      aux_sym_def_frame_repeat1,
  [4258] = 3,
    ACTIONS(600), 1,
      anon_sym_OFFSET,
    ACTIONS(612), 1,
      sym__newline,
    STATE(171), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4269] = 3,
    ACTIONS(614), 1,
      anon_sym_OFFSET,
    ACTIONS(617), 1,
      sym__newline,
    STATE(178), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4280] = 4,
    ACTIONS(604), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(247), 1,
      aux_sym_matrix_repeat1,
    STATE(410), 1,
      sym_matrix,
  [4293] = 3,
    ACTIONS(600), 1,
      anon_sym_OFFSET,
    ACTIONS(619), 1,
      sym__newline,
    STATE(182), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4304] = 2,
    ACTIONS(528), 1,
      sym__newline,
    ACTIONS(524), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4313] = 3,
    ACTIONS(600), 1,
      anon_sym_OFFSET,
    ACTIONS(621), 1,
      sym__newline,
    STATE(178), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4324] = 3,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(396), 1,
      sym_qubit_variables,
    STATE(169), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4335] = 3,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(625), 1,
      anon_sym_AS,
    STATE(194), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4346] = 3,
    ACTIONS(598), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(375), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4357] = 3,
    ACTIONS(627), 1,
      sym__newline,
    STATE(142), 1,
      sym__newline_tab,
    STATE(186), 2,
      sym_frame_spec,
      aux_sym_def_frame_repeat1,
  [4368] = 3,
    ACTIONS(598), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(447), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4379] = 3,
    ACTIONS(630), 1,
      sym_identifier,
    ACTIONS(633), 1,
      sym__newline,
    STATE(188), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4390] = 4,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(635), 1,
      sym__newline,
    STATE(403), 1,
      sym_addr,
  [4403] = 1,
    ACTIONS(528), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4410] = 4,
    ACTIONS(604), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(247), 1,
      aux_sym_matrix_repeat1,
    STATE(369), 1,
      sym_matrix,
  [4423] = 4,
    ACTIONS(604), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(247), 1,
      aux_sym_matrix_repeat1,
    STATE(436), 1,
      sym_matrix,
  [4436] = 4,
    ACTIONS(604), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(247), 1,
      aux_sym_matrix_repeat1,
    STATE(422), 1,
      sym_matrix,
  [4449] = 3,
    ACTIONS(637), 1,
      anon_sym_AS,
    ACTIONS(639), 1,
      sym_identifier,
    STATE(194), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4460] = 1,
    ACTIONS(342), 4,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym__int_token1,
  [4467] = 3,
    ACTIONS(598), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(357), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4478] = 3,
    ACTIONS(642), 1,
      sym__newline,
    STATE(142), 1,
      sym__newline_tab,
    STATE(186), 2,
      sym_frame_spec,
      aux_sym_def_frame_repeat1,
  [4489] = 4,
    ACTIONS(562), 1,
      anon_sym_PLUS,
    ACTIONS(564), 1,
      anon_sym_DASH,
    ACTIONS(606), 1,
      sym__newline,
    ACTIONS(644), 1,
      anon_sym_COMMA,
  [4502] = 4,
    ACTIONS(243), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(646), 1,
      aux_sym__int_token1,
    STATE(199), 1,
      aux_sym__int,
  [4515] = 4,
    ACTIONS(316), 1,
      anon_sym_COLON,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(649), 1,
      aux_sym__int_token1,
    STATE(199), 1,
      aux_sym__int,
  [4528] = 4,
    ACTIONS(604), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(247), 1,
      aux_sym_matrix_repeat1,
    STATE(353), 1,
      sym_matrix,
  [4541] = 3,
    ACTIONS(598), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(382), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4552] = 3,
    ACTIONS(320), 1,
      sym__newline,
    STATE(62), 1,
      aux_sym__int,
    ACTIONS(316), 2,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4563] = 3,
    ACTIONS(653), 1,
      anon_sym_SLASH,
    ACTIONS(655), 1,
      anon_sym_LBRACK,
    ACTIONS(651), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [4574] = 3,
    ACTIONS(598), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(384), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4585] = 3,
    ACTIONS(657), 1,
      anon_sym_LBRACK,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(259), 1,
      sym_addr,
  [4595] = 3,
    ACTIONS(657), 1,
      anon_sym_LBRACK,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(260), 1,
      sym_addr,
  [4605] = 3,
    ACTIONS(562), 1,
      anon_sym_PLUS,
    ACTIONS(564), 1,
      anon_sym_DASH,
    ACTIONS(661), 1,
      sym__newline,
  [4615] = 3,
    ACTIONS(657), 1,
      anon_sym_LBRACK,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(147), 1,
      sym_addr,
  [4625] = 3,
    ACTIONS(586), 1,
      anon_sym_PLUS,
    ACTIONS(588), 1,
      anon_sym_DASH,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
  [4635] = 3,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(393), 1,
      sym_addr,
  [4645] = 3,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(394), 1,
      sym_addr,
  [4655] = 3,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    ACTIONS(667), 1,
      anon_sym_SHARING,
    ACTIONS(669), 1,
      sym__newline,
  [4665] = 3,
    ACTIONS(562), 1,
      anon_sym_PLUS,
    ACTIONS(564), 1,
      anon_sym_DASH,
    ACTIONS(671), 1,
      sym__newline,
  [4675] = 3,
    ACTIONS(562), 1,
      anon_sym_PLUS,
    ACTIONS(564), 1,
      anon_sym_DASH,
    ACTIONS(673), 1,
      sym__newline,
  [4685] = 3,
    ACTIONS(562), 1,
      anon_sym_PLUS,
    ACTIONS(564), 1,
      anon_sym_DASH,
    ACTIONS(675), 1,
      sym__newline,
  [4695] = 3,
    ACTIONS(562), 1,
      anon_sym_PLUS,
    ACTIONS(564), 1,
      anon_sym_DASH,
    ACTIONS(677), 1,
      sym__newline,
  [4705] = 3,
    ACTIONS(562), 1,
      anon_sym_PLUS,
    ACTIONS(564), 1,
      anon_sym_DASH,
    ACTIONS(679), 1,
      sym__newline,
  [4715] = 2,
    STATE(108), 1,
      sym__signed_int,
    ACTIONS(681), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4723] = 3,
    ACTIONS(562), 1,
      anon_sym_PLUS,
    ACTIONS(564), 1,
      anon_sym_DASH,
    ACTIONS(683), 1,
      sym__newline,
  [4733] = 3,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(402), 1,
      sym_addr,
  [4743] = 3,
    ACTIONS(657), 1,
      anon_sym_LBRACK,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(163), 1,
      sym_addr,
  [4753] = 2,
    ACTIONS(687), 1,
      anon_sym_LBRACK,
    ACTIONS(685), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [4761] = 3,
    ACTIONS(657), 1,
      anon_sym_LBRACK,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(146), 1,
      sym_addr,
  [4771] = 3,
    ACTIONS(657), 1,
      anon_sym_LBRACK,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(263), 1,
      sym_addr,
  [4781] = 3,
    ACTIONS(689), 1,
      anon_sym_PULSE,
    ACTIONS(691), 1,
      anon_sym_CAPTURE,
    ACTIONS(693), 1,
      anon_sym_RAW_DASHCAPTURE,
  [4791] = 3,
    ACTIONS(657), 1,
      anon_sym_LBRACK,
    ACTIONS(695), 1,
      sym_identifier,
    STATE(356), 1,
      sym_addr,
  [4801] = 3,
    ACTIONS(534), 1,
      aux_sym__int_token1,
    STATE(168), 1,
      aux_sym__int,
    STATE(358), 1,
      sym_qubit,
  [4811] = 2,
    ACTIONS(342), 1,
      sym__newline,
    ACTIONS(338), 2,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4819] = 3,
    ACTIONS(562), 1,
      anon_sym_PLUS,
    ACTIONS(564), 1,
      anon_sym_DASH,
    ACTIONS(697), 1,
      sym__newline,
  [4829] = 3,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__int,
  [4839] = 1,
    ACTIONS(701), 3,
      anon_sym_COLON,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4845] = 3,
    ACTIONS(606), 1,
      sym__newline,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_params_repeat1,
  [4855] = 1,
    ACTIONS(706), 3,
      anon_sym_COLON,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4861] = 2,
    ACTIONS(708), 1,
      anon_sym_DQUOTE,
    STATE(365), 2,
      sym__string,
      sym__escaped_string,
  [4869] = 3,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(417), 1,
      sym_addr,
  [4879] = 3,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(431), 1,
      sym_addr,
  [4889] = 2,
    ACTIONS(712), 1,
      sym__newline,
    ACTIONS(710), 2,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4897] = 3,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    ACTIONS(714), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__int,
  [4907] = 3,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      aux_sym_params_repeat1,
  [4917] = 3,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym_variables_repeat1,
  [4927] = 3,
    ACTIONS(586), 1,
      anon_sym_PLUS,
    ACTIONS(588), 1,
      anon_sym_DASH,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
  [4937] = 3,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_variables_repeat1,
  [4947] = 2,
    ACTIONS(726), 1,
      anon_sym_SLASH,
    ACTIONS(651), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [4955] = 1,
    ACTIONS(728), 3,
      anon_sym_COLON,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4961] = 3,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(730), 1,
      anon_sym_COLON,
    STATE(406), 1,
      sym_params,
  [4971] = 3,
    ACTIONS(732), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(248), 1,
      aux_sym_matrix_repeat1,
  [4981] = 3,
    ACTIONS(734), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(248), 1,
      aux_sym_matrix_repeat1,
  [4991] = 1,
    ACTIONS(712), 3,
      anon_sym_COLON,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4997] = 3,
    ACTIONS(737), 1,
      sym_identifier,
    STATE(340), 1,
      sym_waveform_name,
    STATE(399), 1,
      sym_waveform,
  [5007] = 3,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      aux_sym_variables_repeat1,
  [5017] = 3,
    ACTIONS(741), 1,
      sym_identifier,
    STATE(212), 1,
      sym_waveform,
    STATE(257), 1,
      sym_waveform_name,
  [5027] = 3,
    ACTIONS(741), 1,
      sym_identifier,
    STATE(211), 1,
      sym_waveform,
    STATE(257), 1,
      sym_waveform_name,
  [5037] = 2,
    STATE(88), 1,
      sym__signed_int,
    ACTIONS(743), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5045] = 3,
    ACTIONS(745), 1,
      anon_sym_LBRACK,
    ACTIONS(747), 1,
      sym_identifier,
    STATE(71), 1,
      sym_addr,
  [5055] = 3,
    ACTIONS(749), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(256), 1,
      aux_sym__indented_instrs_repeat1,
  [5065] = 3,
    ACTIONS(752), 1,
      anon_sym_LPAREN,
    ACTIONS(754), 1,
      anon_sym_LBRACK,
    ACTIONS(756), 1,
      sym_identifier,
  [5075] = 3,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    ACTIONS(758), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__int,
  [5085] = 3,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(433), 1,
      sym_addr,
  [5095] = 3,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(430), 1,
      sym_addr,
  [5105] = 3,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      aux_sym_params_repeat1,
  [5115] = 2,
    ACTIONS(336), 1,
      sym__newline,
    ACTIONS(334), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [5123] = 3,
    ACTIONS(657), 1,
      anon_sym_LBRACK,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(144), 1,
      sym_addr,
  [5133] = 3,
    ACTIONS(651), 1,
      sym__newline,
    ACTIONS(655), 1,
      anon_sym_LPAREN,
    ACTIONS(762), 1,
      anon_sym_SLASH,
  [5143] = 3,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(764), 1,
      anon_sym_COLON,
    STATE(373), 1,
      sym_variables,
  [5153] = 3,
    ACTIONS(741), 1,
      sym_identifier,
    STATE(237), 1,
      sym_waveform,
    STATE(257), 1,
      sym_waveform_name,
  [5163] = 2,
    ACTIONS(342), 1,
      sym__newline,
    ACTIONS(338), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [5171] = 3,
    ACTIONS(741), 1,
      sym_identifier,
    STATE(236), 1,
      sym_waveform,
    STATE(257), 1,
      sym_waveform_name,
  [5181] = 3,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_waveform_repeat1,
  [5191] = 3,
    ACTIONS(586), 1,
      anon_sym_PLUS,
    ACTIONS(588), 1,
      anon_sym_DASH,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
  [5201] = 3,
    ACTIONS(737), 1,
      sym_identifier,
    STATE(340), 1,
      sym_waveform_name,
    STATE(379), 1,
      sym_waveform,
  [5211] = 3,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      aux_sym_variables_repeat1,
  [5221] = 3,
    ACTIONS(592), 1,
      aux_sym__int_token1,
    ACTIONS(774), 1,
      sym__newline,
    STATE(164), 1,
      aux_sym__int,
  [5231] = 3,
    ACTIONS(776), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(298), 1,
      sym__newline_tab,
  [5241] = 3,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      aux_sym_waveform_repeat1,
  [5251] = 3,
    ACTIONS(586), 1,
      anon_sym_PLUS,
    ACTIONS(588), 1,
      anon_sym_DASH,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
  [5261] = 3,
    ACTIONS(783), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(298), 1,
      sym__newline_tab,
  [5271] = 3,
    ACTIONS(586), 1,
      anon_sym_PLUS,
    ACTIONS(588), 1,
      anon_sym_DASH,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
  [5281] = 3,
    ACTIONS(649), 1,
      aux_sym__int_token1,
    ACTIONS(787), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym__int,
  [5291] = 3,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__int,
  [5301] = 3,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_waveform_repeat1,
  [5311] = 3,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    ACTIONS(793), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__int,
  [5321] = 3,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_waveform_repeat1,
  [5331] = 3,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(386), 1,
      sym_addr,
  [5341] = 3,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__int,
  [5351] = 2,
    ACTIONS(706), 1,
      sym__newline,
    ACTIONS(802), 2,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [5359] = 3,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_params_repeat1,
  [5369] = 3,
    ACTIONS(562), 1,
      anon_sym_PLUS,
    ACTIONS(564), 1,
      anon_sym_DASH,
    ACTIONS(807), 1,
      sym__newline,
  [5379] = 3,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__int,
  [5389] = 3,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    ACTIONS(811), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__int,
  [5399] = 3,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      sym__newline,
    STATE(233), 1,
      aux_sym_params_repeat1,
  [5409] = 3,
    ACTIONS(815), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(298), 1,
      sym__newline_tab,
  [5419] = 3,
    ACTIONS(815), 1,
      sym__newline,
    STATE(277), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(298), 1,
      sym__newline_tab,
  [5429] = 3,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_variables_repeat1,
  [5439] = 3,
    ACTIONS(388), 1,
      aux_sym__int_token1,
    ACTIONS(822), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__int,
  [5449] = 3,
    ACTIONS(824), 1,
      sym__newline,
    STATE(292), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(298), 1,
      sym__newline_tab,
  [5459] = 3,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_waveform_repeat1,
  [5469] = 2,
    ACTIONS(828), 1,
      sym_identifier,
    STATE(408), 1,
      sym_pauli_term,
  [5476] = 2,
    ACTIONS(830), 1,
      sym__string_inner,
    STATE(444), 1,
      sym__string_esc_inner,
  [5483] = 2,
    ACTIONS(832), 1,
      sym_identifier,
    STATE(246), 1,
      sym_waveform_name,
  [5490] = 2,
    ACTIONS(834), 1,
      aux_sym__int_token1,
    STATE(295), 1,
      aux_sym__int,
  [5497] = 2,
    ACTIONS(836), 1,
      aux_sym__int_token1,
    STATE(290), 1,
      aux_sym__int,
  [5504] = 2,
    ACTIONS(838), 1,
      sym_identifier,
    STATE(318), 1,
      sym_named_param,
  [5511] = 2,
    ACTIONS(840), 1,
      aux_sym__int_token1,
    STATE(282), 1,
      aux_sym__int,
  [5518] = 1,
    ACTIONS(842), 2,
      anon_sym_AS,
      sym_identifier,
  [5523] = 2,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    STATE(243), 1,
      sym_variable,
  [5530] = 2,
    ACTIONS(844), 1,
      anon_sym_SHARING,
    ACTIONS(846), 1,
      sym__newline,
  [5537] = 2,
    ACTIONS(848), 1,
      aux_sym__int_token1,
    STATE(279), 1,
      aux_sym__int,
  [5544] = 2,
    ACTIONS(850), 1,
      anon_sym_MEASURE,
    ACTIONS(852), 1,
      sym_identifier,
  [5551] = 2,
    ACTIONS(838), 1,
      sym_identifier,
    STATE(275), 1,
      sym_named_param,
  [5558] = 2,
    ACTIONS(854), 1,
      aux_sym__int_token1,
    STATE(258), 1,
      aux_sym__int,
  [5565] = 2,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    STATE(241), 1,
      sym_variable,
  [5572] = 2,
    ACTIONS(856), 1,
      aux_sym__int_token1,
    STATE(239), 1,
      aux_sym__int,
  [5579] = 2,
    ACTIONS(701), 1,
      sym_identifier,
    ACTIONS(858), 1,
      anon_sym_COLON,
  [5586] = 1,
    ACTIONS(817), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5591] = 1,
    ACTIONS(860), 2,
      anon_sym_,
      anon_sym_TAB,
  [5596] = 2,
    ACTIONS(862), 1,
      aux_sym__int_token1,
    STATE(231), 1,
      aux_sym__int,
  [5603] = 1,
    ACTIONS(795), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5608] = 1,
    ACTIONS(864), 2,
      anon_sym_,
      anon_sym_TAB,
  [5613] = 1,
    ACTIONS(866), 2,
      anon_sym_,
      anon_sym_TAB,
  [5618] = 1,
    ACTIONS(868), 2,
      anon_sym_,
      anon_sym_TAB,
  [5623] = 1,
    ACTIONS(685), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [5628] = 2,
    ACTIONS(870), 1,
      anon_sym_AT,
    STATE(363), 1,
      sym_label,
  [5635] = 2,
    ACTIONS(334), 1,
      anon_sym_COLON,
    ACTIONS(336), 1,
      sym_identifier,
  [5642] = 2,
    ACTIONS(870), 1,
      anon_sym_AT,
    STATE(362), 1,
      sym_label,
  [5649] = 2,
    ACTIONS(338), 1,
      anon_sym_COLON,
    ACTIONS(342), 1,
      sym_identifier,
  [5656] = 2,
    ACTIONS(872), 1,
      aux_sym__int_token1,
    STATE(79), 1,
      aux_sym__int,
  [5663] = 2,
    ACTIONS(870), 1,
      anon_sym_AT,
    STATE(360), 1,
      sym_label,
  [5670] = 2,
    ACTIONS(874), 1,
      anon_sym_OFFSET,
    ACTIONS(876), 1,
      sym__newline,
  [5677] = 2,
    ACTIONS(870), 1,
      anon_sym_AT,
    STATE(359), 1,
      sym_label,
  [5684] = 2,
    ACTIONS(878), 1,
      anon_sym_COLON,
    ACTIONS(880), 1,
      sym_identifier,
  [5691] = 2,
    ACTIONS(838), 1,
      sym_identifier,
    STATE(269), 1,
      sym_named_param,
  [5698] = 2,
    ACTIONS(882), 1,
      aux_sym__int_token1,
    STATE(280), 1,
      aux_sym__int,
  [5705] = 2,
    ACTIONS(884), 1,
      anon_sym_LBRACK,
    ACTIONS(886), 1,
      sym_identifier,
  [5712] = 2,
    ACTIONS(888), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym_quil_repeat1,
  [5719] = 2,
    ACTIONS(890), 1,
      anon_sym_MATRIX,
    ACTIONS(892), 1,
      anon_sym_PERMUTATION,
  [5726] = 2,
    ACTIONS(894), 1,
      anon_sym_LBRACK,
    ACTIONS(896), 1,
      sym_identifier,
  [5733] = 2,
    ACTIONS(898), 1,
      aux_sym__int_token1,
    STATE(67), 1,
      aux_sym__int,
  [5740] = 2,
    ACTIONS(842), 1,
      sym_identifier,
    ACTIONS(900), 1,
      sym__newline,
  [5747] = 2,
    ACTIONS(756), 1,
      sym__newline,
    ACTIONS(902), 1,
      anon_sym_LPAREN,
  [5754] = 2,
    ACTIONS(604), 1,
      sym__newline,
    STATE(20), 1,
      sym__newline_tab,
  [5761] = 2,
    ACTIONS(365), 1,
      sym__newline,
    ACTIONS(367), 1,
      anon_sym_COLON,
  [5768] = 2,
    ACTIONS(685), 1,
      sym__newline,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
  [5775] = 2,
    ACTIONS(904), 1,
      anon_sym_COLON,
    ACTIONS(906), 1,
      sym__newline,
  [5782] = 2,
    ACTIONS(908), 1,
      aux_sym__int_token1,
    STATE(76), 1,
      aux_sym__int,
  [5789] = 2,
    ACTIONS(434), 1,
      sym_identifier,
    ACTIONS(910), 1,
      anon_sym_LBRACK,
  [5796] = 2,
    ACTIONS(912), 1,
      aux_sym__int_token1,
    STATE(70), 1,
      aux_sym__int,
  [5803] = 2,
    ACTIONS(914), 1,
      aux_sym__int_token1,
    STATE(289), 1,
      aux_sym__int,
  [5810] = 2,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    STATE(315), 1,
      sym_variable,
  [5817] = 2,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_COLON,
  [5824] = 1,
    ACTIONS(918), 1,
      sym__newline,
  [5828] = 1,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
  [5832] = 1,
    ACTIONS(922), 1,
      sym__newline,
  [5836] = 1,
    ACTIONS(924), 1,
      anon_sym_COLON,
  [5840] = 1,
    ACTIONS(926), 1,
      anon_sym_COLON,
  [5844] = 1,
    ACTIONS(928), 1,
      sym_identifier,
  [5848] = 1,
    ACTIONS(930), 1,
      sym__newline,
  [5852] = 1,
    ACTIONS(932), 1,
      sym__newline,
  [5856] = 1,
    ACTIONS(934), 1,
      sym__newline,
  [5860] = 1,
    ACTIONS(936), 1,
      sym__newline,
  [5864] = 1,
    ACTIONS(938), 1,
      sym__newline,
  [5868] = 1,
    ACTIONS(940), 1,
      sym__newline,
  [5872] = 1,
    ACTIONS(942), 1,
      sym__newline,
  [5876] = 1,
    ACTIONS(944), 1,
      sym_identifier,
  [5880] = 1,
    ACTIONS(946), 1,
      sym__newline,
  [5884] = 1,
    ACTIONS(948), 1,
      anon_sym_COLON,
  [5888] = 1,
    ACTIONS(950), 1,
      anon_sym_PAULI_DASHSUM,
  [5892] = 1,
    ACTIONS(952), 1,
      sym_identifier,
  [5896] = 1,
    ACTIONS(954), 1,
      sym__newline,
  [5900] = 1,
    ACTIONS(956), 1,
      sym__newline,
  [5904] = 1,
    ACTIONS(365), 1,
      sym_identifier,
  [5908] = 1,
    ACTIONS(958), 1,
      sym_identifier,
  [5912] = 1,
    ACTIONS(960), 1,
      anon_sym_COLON,
  [5916] = 1,
    ACTIONS(962), 1,
      sym_identifier,
  [5920] = 1,
    ACTIONS(964), 1,
      sym__newline,
  [5924] = 1,
    ACTIONS(966), 1,
      sym__newline,
  [5928] = 1,
    ACTIONS(968), 1,
      sym_identifier,
  [5932] = 1,
    ACTIONS(970), 1,
      sym__newline,
  [5936] = 1,
    ACTIONS(972), 1,
      sym__newline,
  [5940] = 1,
    ACTIONS(974), 1,
      sym__newline,
  [5944] = 1,
    ACTIONS(976), 1,
      sym__newline,
  [5948] = 1,
    ACTIONS(978), 1,
      sym__newline,
  [5952] = 1,
    ACTIONS(980), 1,
      sym__newline,
  [5956] = 1,
    ACTIONS(982), 1,
      sym__newline,
  [5960] = 1,
    ACTIONS(984), 1,
      anon_sym_COLON,
  [5964] = 1,
    ACTIONS(986), 1,
      sym__newline,
  [5968] = 1,
    ACTIONS(988), 1,
      sym__newline,
  [5972] = 1,
    ACTIONS(990), 1,
      sym__newline,
  [5976] = 1,
    ACTIONS(992), 1,
      ts_builtin_sym_end,
  [5980] = 1,
    ACTIONS(994), 1,
      anon_sym_DQUOTE,
  [5984] = 1,
    ACTIONS(996), 1,
      anon_sym_LPAREN,
  [5988] = 1,
    ACTIONS(998), 1,
      sym__newline,
  [5992] = 1,
    ACTIONS(1000), 1,
      sym__newline,
  [5996] = 1,
    ACTIONS(1002), 1,
      sym__newline,
  [6000] = 1,
    ACTIONS(1004), 1,
      sym_identifier,
  [6004] = 1,
    ACTIONS(1006), 1,
      sym__newline,
  [6008] = 1,
    ACTIONS(220), 1,
      sym__newline,
  [6012] = 1,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE,
  [6016] = 1,
    ACTIONS(1010), 1,
      sym__newline,
  [6020] = 1,
    ACTIONS(1012), 1,
      sym_identifier,
  [6024] = 1,
    ACTIONS(1014), 1,
      sym__newline,
  [6028] = 1,
    ACTIONS(1016), 1,
      sym__newline,
  [6032] = 1,
    ACTIONS(1018), 1,
      sym__newline,
  [6036] = 1,
    ACTIONS(369), 1,
      sym_identifier,
  [6040] = 1,
    ACTIONS(1020), 1,
      sym_identifier,
  [6044] = 1,
    ACTIONS(1022), 1,
      anon_sym_COLON,
  [6048] = 1,
    ACTIONS(1024), 1,
      anon_sym_COLON,
  [6052] = 1,
    ACTIONS(1026), 1,
      sym__newline,
  [6056] = 1,
    ACTIONS(1028), 1,
      anon_sym_LPAREN,
  [6060] = 1,
    ACTIONS(1030), 1,
      sym__newline,
  [6064] = 1,
    ACTIONS(1032), 1,
      sym_identifier,
  [6068] = 1,
    ACTIONS(1034), 1,
      sym_identifier,
  [6072] = 1,
    ACTIONS(1036), 1,
      sym_identifier,
  [6076] = 1,
    ACTIONS(1038), 1,
      sym_identifier,
  [6080] = 1,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
  [6084] = 1,
    ACTIONS(1042), 1,
      sym__newline,
  [6088] = 1,
    ACTIONS(1044), 1,
      sym__newline,
  [6092] = 1,
    ACTIONS(1046), 1,
      sym__newline,
  [6096] = 1,
    ACTIONS(1048), 1,
      anon_sym_DQUOTE,
  [6100] = 1,
    ACTIONS(1050), 1,
      anon_sym_PAULI_DASHSUM,
  [6104] = 1,
    ACTIONS(1052), 1,
      anon_sym_AS,
  [6108] = 1,
    ACTIONS(1054), 1,
      sym__newline,
  [6112] = 1,
    ACTIONS(1056), 1,
      sym_identifier,
  [6116] = 1,
    ACTIONS(1058), 1,
      anon_sym_COLON,
  [6120] = 1,
    ACTIONS(1060), 1,
      sym__newline,
  [6124] = 1,
    ACTIONS(774), 1,
      sym__newline,
  [6128] = 1,
    ACTIONS(1062), 1,
      sym__newline,
  [6132] = 1,
    ACTIONS(1064), 1,
      sym_identifier,
  [6136] = 1,
    ACTIONS(1066), 1,
      sym_identifier,
  [6140] = 1,
    ACTIONS(1068), 1,
      sym__newline,
  [6144] = 1,
    ACTIONS(1070), 1,
      sym__newline,
  [6148] = 1,
    ACTIONS(1072), 1,
      anon_sym_DQUOTE,
  [6152] = 1,
    ACTIONS(1074), 1,
      sym__newline,
  [6156] = 1,
    ACTIONS(1076), 1,
      sym_identifier,
  [6160] = 1,
    ACTIONS(886), 1,
      sym__newline,
  [6164] = 1,
    ACTIONS(1078), 1,
      sym__newline,
  [6168] = 1,
    ACTIONS(1080), 1,
      sym__newline,
  [6172] = 1,
    ACTIONS(1082), 1,
      sym_identifier,
  [6176] = 1,
    ACTIONS(807), 1,
      sym__newline,
  [6180] = 1,
    ACTIONS(1084), 1,
      sym__newline,
  [6184] = 1,
    ACTIONS(1086), 1,
      aux_sym__string_esc_inner_token1,
  [6188] = 1,
    ACTIONS(1088), 1,
      sym_identifier,
  [6192] = 1,
    ACTIONS(1090), 1,
      sym_identifier,
  [6196] = 1,
    ACTIONS(1092), 1,
      anon_sym_DQUOTE,
  [6200] = 1,
    ACTIONS(1094), 1,
      sym__newline,
  [6204] = 1,
    ACTIONS(1096), 1,
      sym__newline,
  [6208] = 1,
    ACTIONS(1098), 1,
      sym__newline,
  [6212] = 1,
    ACTIONS(1100), 1,
      sym_identifier,
  [6216] = 1,
    ACTIONS(1102), 1,
      anon_sym_COLON,
  [6220] = 1,
    ACTIONS(896), 1,
      sym__newline,
  [6224] = 1,
    ACTIONS(1104), 1,
      anon_sym_AS,
  [6228] = 1,
    ACTIONS(1106), 1,
      anon_sym_LPAREN,
  [6232] = 1,
    ACTIONS(1108), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 68,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 189,
  [SMALL_STATE(18)] = 260,
  [SMALL_STATE(19)] = 326,
  [SMALL_STATE(20)] = 391,
  [SMALL_STATE(21)] = 453,
  [SMALL_STATE(22)] = 515,
  [SMALL_STATE(23)] = 574,
  [SMALL_STATE(24)] = 633,
  [SMALL_STATE(25)] = 692,
  [SMALL_STATE(26)] = 751,
  [SMALL_STATE(27)] = 810,
  [SMALL_STATE(28)] = 869,
  [SMALL_STATE(29)] = 928,
  [SMALL_STATE(30)] = 987,
  [SMALL_STATE(31)] = 1046,
  [SMALL_STATE(32)] = 1105,
  [SMALL_STATE(33)] = 1164,
  [SMALL_STATE(34)] = 1223,
  [SMALL_STATE(35)] = 1282,
  [SMALL_STATE(36)] = 1341,
  [SMALL_STATE(37)] = 1400,
  [SMALL_STATE(38)] = 1459,
  [SMALL_STATE(39)] = 1518,
  [SMALL_STATE(40)] = 1577,
  [SMALL_STATE(41)] = 1633,
  [SMALL_STATE(42)] = 1689,
  [SMALL_STATE(43)] = 1744,
  [SMALL_STATE(44)] = 1799,
  [SMALL_STATE(45)] = 1854,
  [SMALL_STATE(46)] = 1909,
  [SMALL_STATE(47)] = 1961,
  [SMALL_STATE(48)] = 2013,
  [SMALL_STATE(49)] = 2044,
  [SMALL_STATE(50)] = 2077,
  [SMALL_STATE(51)] = 2113,
  [SMALL_STATE(52)] = 2138,
  [SMALL_STATE(53)] = 2164,
  [SMALL_STATE(54)] = 2189,
  [SMALL_STATE(55)] = 2216,
  [SMALL_STATE(56)] = 2243,
  [SMALL_STATE(57)] = 2267,
  [SMALL_STATE(58)] = 2293,
  [SMALL_STATE(59)] = 2315,
  [SMALL_STATE(60)] = 2336,
  [SMALL_STATE(61)] = 2356,
  [SMALL_STATE(62)] = 2376,
  [SMALL_STATE(63)] = 2399,
  [SMALL_STATE(64)] = 2427,
  [SMALL_STATE(65)] = 2453,
  [SMALL_STATE(66)] = 2474,
  [SMALL_STATE(67)] = 2493,
  [SMALL_STATE(68)] = 2514,
  [SMALL_STATE(69)] = 2535,
  [SMALL_STATE(70)] = 2554,
  [SMALL_STATE(71)] = 2573,
  [SMALL_STATE(72)] = 2603,
  [SMALL_STATE(73)] = 2617,
  [SMALL_STATE(74)] = 2634,
  [SMALL_STATE(75)] = 2649,
  [SMALL_STATE(76)] = 2676,
  [SMALL_STATE(77)] = 2693,
  [SMALL_STATE(78)] = 2720,
  [SMALL_STATE(79)] = 2747,
  [SMALL_STATE(80)] = 2766,
  [SMALL_STATE(81)] = 2790,
  [SMALL_STATE(82)] = 2804,
  [SMALL_STATE(83)] = 2826,
  [SMALL_STATE(84)] = 2839,
  [SMALL_STATE(85)] = 2852,
  [SMALL_STATE(86)] = 2867,
  [SMALL_STATE(87)] = 2890,
  [SMALL_STATE(88)] = 2911,
  [SMALL_STATE(89)] = 2922,
  [SMALL_STATE(90)] = 2943,
  [SMALL_STATE(91)] = 2964,
  [SMALL_STATE(92)] = 2985,
  [SMALL_STATE(93)] = 3006,
  [SMALL_STATE(94)] = 3027,
  [SMALL_STATE(95)] = 3048,
  [SMALL_STATE(96)] = 3063,
  [SMALL_STATE(97)] = 3084,
  [SMALL_STATE(98)] = 3105,
  [SMALL_STATE(99)] = 3126,
  [SMALL_STATE(100)] = 3147,
  [SMALL_STATE(101)] = 3168,
  [SMALL_STATE(102)] = 3189,
  [SMALL_STATE(103)] = 3210,
  [SMALL_STATE(104)] = 3231,
  [SMALL_STATE(105)] = 3252,
  [SMALL_STATE(106)] = 3273,
  [SMALL_STATE(107)] = 3294,
  [SMALL_STATE(108)] = 3315,
  [SMALL_STATE(109)] = 3328,
  [SMALL_STATE(110)] = 3349,
  [SMALL_STATE(111)] = 3370,
  [SMALL_STATE(112)] = 3391,
  [SMALL_STATE(113)] = 3412,
  [SMALL_STATE(114)] = 3433,
  [SMALL_STATE(115)] = 3454,
  [SMALL_STATE(116)] = 3475,
  [SMALL_STATE(117)] = 3496,
  [SMALL_STATE(118)] = 3519,
  [SMALL_STATE(119)] = 3540,
  [SMALL_STATE(120)] = 3561,
  [SMALL_STATE(121)] = 3571,
  [SMALL_STATE(122)] = 3583,
  [SMALL_STATE(123)] = 3603,
  [SMALL_STATE(124)] = 3615,
  [SMALL_STATE(125)] = 3633,
  [SMALL_STATE(126)] = 3643,
  [SMALL_STATE(127)] = 3653,
  [SMALL_STATE(128)] = 3665,
  [SMALL_STATE(129)] = 3677,
  [SMALL_STATE(130)] = 3687,
  [SMALL_STATE(131)] = 3699,
  [SMALL_STATE(132)] = 3709,
  [SMALL_STATE(133)] = 3719,
  [SMALL_STATE(134)] = 3731,
  [SMALL_STATE(135)] = 3743,
  [SMALL_STATE(136)] = 3755,
  [SMALL_STATE(137)] = 3765,
  [SMALL_STATE(138)] = 3779,
  [SMALL_STATE(139)] = 3788,
  [SMALL_STATE(140)] = 3801,
  [SMALL_STATE(141)] = 3812,
  [SMALL_STATE(142)] = 3829,
  [SMALL_STATE(143)] = 3840,
  [SMALL_STATE(144)] = 3851,
  [SMALL_STATE(145)] = 3866,
  [SMALL_STATE(146)] = 3877,
  [SMALL_STATE(147)] = 3892,
  [SMALL_STATE(148)] = 3907,
  [SMALL_STATE(149)] = 3918,
  [SMALL_STATE(150)] = 3935,
  [SMALL_STATE(151)] = 3946,
  [SMALL_STATE(152)] = 3957,
  [SMALL_STATE(153)] = 3970,
  [SMALL_STATE(154)] = 3981,
  [SMALL_STATE(155)] = 3990,
  [SMALL_STATE(156)] = 4000,
  [SMALL_STATE(157)] = 4012,
  [SMALL_STATE(158)] = 4028,
  [SMALL_STATE(159)] = 4042,
  [SMALL_STATE(160)] = 4050,
  [SMALL_STATE(161)] = 4060,
  [SMALL_STATE(162)] = 4070,
  [SMALL_STATE(163)] = 4082,
  [SMALL_STATE(164)] = 4098,
  [SMALL_STATE(165)] = 4112,
  [SMALL_STATE(166)] = 4128,
  [SMALL_STATE(167)] = 4138,
  [SMALL_STATE(168)] = 4154,
  [SMALL_STATE(169)] = 4168,
  [SMALL_STATE(170)] = 4179,
  [SMALL_STATE(171)] = 4190,
  [SMALL_STATE(172)] = 4201,
  [SMALL_STATE(173)] = 4212,
  [SMALL_STATE(174)] = 4225,
  [SMALL_STATE(175)] = 4236,
  [SMALL_STATE(176)] = 4247,
  [SMALL_STATE(177)] = 4258,
  [SMALL_STATE(178)] = 4269,
  [SMALL_STATE(179)] = 4280,
  [SMALL_STATE(180)] = 4293,
  [SMALL_STATE(181)] = 4304,
  [SMALL_STATE(182)] = 4313,
  [SMALL_STATE(183)] = 4324,
  [SMALL_STATE(184)] = 4335,
  [SMALL_STATE(185)] = 4346,
  [SMALL_STATE(186)] = 4357,
  [SMALL_STATE(187)] = 4368,
  [SMALL_STATE(188)] = 4379,
  [SMALL_STATE(189)] = 4390,
  [SMALL_STATE(190)] = 4403,
  [SMALL_STATE(191)] = 4410,
  [SMALL_STATE(192)] = 4423,
  [SMALL_STATE(193)] = 4436,
  [SMALL_STATE(194)] = 4449,
  [SMALL_STATE(195)] = 4460,
  [SMALL_STATE(196)] = 4467,
  [SMALL_STATE(197)] = 4478,
  [SMALL_STATE(198)] = 4489,
  [SMALL_STATE(199)] = 4502,
  [SMALL_STATE(200)] = 4515,
  [SMALL_STATE(201)] = 4528,
  [SMALL_STATE(202)] = 4541,
  [SMALL_STATE(203)] = 4552,
  [SMALL_STATE(204)] = 4563,
  [SMALL_STATE(205)] = 4574,
  [SMALL_STATE(206)] = 4585,
  [SMALL_STATE(207)] = 4595,
  [SMALL_STATE(208)] = 4605,
  [SMALL_STATE(209)] = 4615,
  [SMALL_STATE(210)] = 4625,
  [SMALL_STATE(211)] = 4635,
  [SMALL_STATE(212)] = 4645,
  [SMALL_STATE(213)] = 4655,
  [SMALL_STATE(214)] = 4665,
  [SMALL_STATE(215)] = 4675,
  [SMALL_STATE(216)] = 4685,
  [SMALL_STATE(217)] = 4695,
  [SMALL_STATE(218)] = 4705,
  [SMALL_STATE(219)] = 4715,
  [SMALL_STATE(220)] = 4723,
  [SMALL_STATE(221)] = 4733,
  [SMALL_STATE(222)] = 4743,
  [SMALL_STATE(223)] = 4753,
  [SMALL_STATE(224)] = 4761,
  [SMALL_STATE(225)] = 4771,
  [SMALL_STATE(226)] = 4781,
  [SMALL_STATE(227)] = 4791,
  [SMALL_STATE(228)] = 4801,
  [SMALL_STATE(229)] = 4811,
  [SMALL_STATE(230)] = 4819,
  [SMALL_STATE(231)] = 4829,
  [SMALL_STATE(232)] = 4839,
  [SMALL_STATE(233)] = 4845,
  [SMALL_STATE(234)] = 4855,
  [SMALL_STATE(235)] = 4861,
  [SMALL_STATE(236)] = 4869,
  [SMALL_STATE(237)] = 4879,
  [SMALL_STATE(238)] = 4889,
  [SMALL_STATE(239)] = 4897,
  [SMALL_STATE(240)] = 4907,
  [SMALL_STATE(241)] = 4917,
  [SMALL_STATE(242)] = 4927,
  [SMALL_STATE(243)] = 4937,
  [SMALL_STATE(244)] = 4947,
  [SMALL_STATE(245)] = 4955,
  [SMALL_STATE(246)] = 4961,
  [SMALL_STATE(247)] = 4971,
  [SMALL_STATE(248)] = 4981,
  [SMALL_STATE(249)] = 4991,
  [SMALL_STATE(250)] = 4997,
  [SMALL_STATE(251)] = 5007,
  [SMALL_STATE(252)] = 5017,
  [SMALL_STATE(253)] = 5027,
  [SMALL_STATE(254)] = 5037,
  [SMALL_STATE(255)] = 5045,
  [SMALL_STATE(256)] = 5055,
  [SMALL_STATE(257)] = 5065,
  [SMALL_STATE(258)] = 5075,
  [SMALL_STATE(259)] = 5085,
  [SMALL_STATE(260)] = 5095,
  [SMALL_STATE(261)] = 5105,
  [SMALL_STATE(262)] = 5115,
  [SMALL_STATE(263)] = 5123,
  [SMALL_STATE(264)] = 5133,
  [SMALL_STATE(265)] = 5143,
  [SMALL_STATE(266)] = 5153,
  [SMALL_STATE(267)] = 5163,
  [SMALL_STATE(268)] = 5171,
  [SMALL_STATE(269)] = 5181,
  [SMALL_STATE(270)] = 5191,
  [SMALL_STATE(271)] = 5201,
  [SMALL_STATE(272)] = 5211,
  [SMALL_STATE(273)] = 5221,
  [SMALL_STATE(274)] = 5231,
  [SMALL_STATE(275)] = 5241,
  [SMALL_STATE(276)] = 5251,
  [SMALL_STATE(277)] = 5261,
  [SMALL_STATE(278)] = 5271,
  [SMALL_STATE(279)] = 5281,
  [SMALL_STATE(280)] = 5291,
  [SMALL_STATE(281)] = 5301,
  [SMALL_STATE(282)] = 5311,
  [SMALL_STATE(283)] = 5321,
  [SMALL_STATE(284)] = 5331,
  [SMALL_STATE(285)] = 5341,
  [SMALL_STATE(286)] = 5351,
  [SMALL_STATE(287)] = 5359,
  [SMALL_STATE(288)] = 5369,
  [SMALL_STATE(289)] = 5379,
  [SMALL_STATE(290)] = 5389,
  [SMALL_STATE(291)] = 5399,
  [SMALL_STATE(292)] = 5409,
  [SMALL_STATE(293)] = 5419,
  [SMALL_STATE(294)] = 5429,
  [SMALL_STATE(295)] = 5439,
  [SMALL_STATE(296)] = 5449,
  [SMALL_STATE(297)] = 5459,
  [SMALL_STATE(298)] = 5469,
  [SMALL_STATE(299)] = 5476,
  [SMALL_STATE(300)] = 5483,
  [SMALL_STATE(301)] = 5490,
  [SMALL_STATE(302)] = 5497,
  [SMALL_STATE(303)] = 5504,
  [SMALL_STATE(304)] = 5511,
  [SMALL_STATE(305)] = 5518,
  [SMALL_STATE(306)] = 5523,
  [SMALL_STATE(307)] = 5530,
  [SMALL_STATE(308)] = 5537,
  [SMALL_STATE(309)] = 5544,
  [SMALL_STATE(310)] = 5551,
  [SMALL_STATE(311)] = 5558,
  [SMALL_STATE(312)] = 5565,
  [SMALL_STATE(313)] = 5572,
  [SMALL_STATE(314)] = 5579,
  [SMALL_STATE(315)] = 5586,
  [SMALL_STATE(316)] = 5591,
  [SMALL_STATE(317)] = 5596,
  [SMALL_STATE(318)] = 5603,
  [SMALL_STATE(319)] = 5608,
  [SMALL_STATE(320)] = 5613,
  [SMALL_STATE(321)] = 5618,
  [SMALL_STATE(322)] = 5623,
  [SMALL_STATE(323)] = 5628,
  [SMALL_STATE(324)] = 5635,
  [SMALL_STATE(325)] = 5642,
  [SMALL_STATE(326)] = 5649,
  [SMALL_STATE(327)] = 5656,
  [SMALL_STATE(328)] = 5663,
  [SMALL_STATE(329)] = 5670,
  [SMALL_STATE(330)] = 5677,
  [SMALL_STATE(331)] = 5684,
  [SMALL_STATE(332)] = 5691,
  [SMALL_STATE(333)] = 5698,
  [SMALL_STATE(334)] = 5705,
  [SMALL_STATE(335)] = 5712,
  [SMALL_STATE(336)] = 5719,
  [SMALL_STATE(337)] = 5726,
  [SMALL_STATE(338)] = 5733,
  [SMALL_STATE(339)] = 5740,
  [SMALL_STATE(340)] = 5747,
  [SMALL_STATE(341)] = 5754,
  [SMALL_STATE(342)] = 5761,
  [SMALL_STATE(343)] = 5768,
  [SMALL_STATE(344)] = 5775,
  [SMALL_STATE(345)] = 5782,
  [SMALL_STATE(346)] = 5789,
  [SMALL_STATE(347)] = 5796,
  [SMALL_STATE(348)] = 5803,
  [SMALL_STATE(349)] = 5810,
  [SMALL_STATE(350)] = 5817,
  [SMALL_STATE(351)] = 5824,
  [SMALL_STATE(352)] = 5828,
  [SMALL_STATE(353)] = 5832,
  [SMALL_STATE(354)] = 5836,
  [SMALL_STATE(355)] = 5840,
  [SMALL_STATE(356)] = 5844,
  [SMALL_STATE(357)] = 5848,
  [SMALL_STATE(358)] = 5852,
  [SMALL_STATE(359)] = 5856,
  [SMALL_STATE(360)] = 5860,
  [SMALL_STATE(361)] = 5864,
  [SMALL_STATE(362)] = 5868,
  [SMALL_STATE(363)] = 5872,
  [SMALL_STATE(364)] = 5876,
  [SMALL_STATE(365)] = 5880,
  [SMALL_STATE(366)] = 5884,
  [SMALL_STATE(367)] = 5888,
  [SMALL_STATE(368)] = 5892,
  [SMALL_STATE(369)] = 5896,
  [SMALL_STATE(370)] = 5900,
  [SMALL_STATE(371)] = 5904,
  [SMALL_STATE(372)] = 5908,
  [SMALL_STATE(373)] = 5912,
  [SMALL_STATE(374)] = 5916,
  [SMALL_STATE(375)] = 5920,
  [SMALL_STATE(376)] = 5924,
  [SMALL_STATE(377)] = 5928,
  [SMALL_STATE(378)] = 5932,
  [SMALL_STATE(379)] = 5936,
  [SMALL_STATE(380)] = 5940,
  [SMALL_STATE(381)] = 5944,
  [SMALL_STATE(382)] = 5948,
  [SMALL_STATE(383)] = 5952,
  [SMALL_STATE(384)] = 5956,
  [SMALL_STATE(385)] = 5960,
  [SMALL_STATE(386)] = 5964,
  [SMALL_STATE(387)] = 5968,
  [SMALL_STATE(388)] = 5972,
  [SMALL_STATE(389)] = 5976,
  [SMALL_STATE(390)] = 5980,
  [SMALL_STATE(391)] = 5984,
  [SMALL_STATE(392)] = 5988,
  [SMALL_STATE(393)] = 5992,
  [SMALL_STATE(394)] = 5996,
  [SMALL_STATE(395)] = 6000,
  [SMALL_STATE(396)] = 6004,
  [SMALL_STATE(397)] = 6008,
  [SMALL_STATE(398)] = 6012,
  [SMALL_STATE(399)] = 6016,
  [SMALL_STATE(400)] = 6020,
  [SMALL_STATE(401)] = 6024,
  [SMALL_STATE(402)] = 6028,
  [SMALL_STATE(403)] = 6032,
  [SMALL_STATE(404)] = 6036,
  [SMALL_STATE(405)] = 6040,
  [SMALL_STATE(406)] = 6044,
  [SMALL_STATE(407)] = 6048,
  [SMALL_STATE(408)] = 6052,
  [SMALL_STATE(409)] = 6056,
  [SMALL_STATE(410)] = 6060,
  [SMALL_STATE(411)] = 6064,
  [SMALL_STATE(412)] = 6068,
  [SMALL_STATE(413)] = 6072,
  [SMALL_STATE(414)] = 6076,
  [SMALL_STATE(415)] = 6080,
  [SMALL_STATE(416)] = 6084,
  [SMALL_STATE(417)] = 6088,
  [SMALL_STATE(418)] = 6092,
  [SMALL_STATE(419)] = 6096,
  [SMALL_STATE(420)] = 6100,
  [SMALL_STATE(421)] = 6104,
  [SMALL_STATE(422)] = 6108,
  [SMALL_STATE(423)] = 6112,
  [SMALL_STATE(424)] = 6116,
  [SMALL_STATE(425)] = 6120,
  [SMALL_STATE(426)] = 6124,
  [SMALL_STATE(427)] = 6128,
  [SMALL_STATE(428)] = 6132,
  [SMALL_STATE(429)] = 6136,
  [SMALL_STATE(430)] = 6140,
  [SMALL_STATE(431)] = 6144,
  [SMALL_STATE(432)] = 6148,
  [SMALL_STATE(433)] = 6152,
  [SMALL_STATE(434)] = 6156,
  [SMALL_STATE(435)] = 6160,
  [SMALL_STATE(436)] = 6164,
  [SMALL_STATE(437)] = 6168,
  [SMALL_STATE(438)] = 6172,
  [SMALL_STATE(439)] = 6176,
  [SMALL_STATE(440)] = 6180,
  [SMALL_STATE(441)] = 6184,
  [SMALL_STATE(442)] = 6188,
  [SMALL_STATE(443)] = 6192,
  [SMALL_STATE(444)] = 6196,
  [SMALL_STATE(445)] = 6200,
  [SMALL_STATE(446)] = 6204,
  [SMALL_STATE(447)] = 6208,
  [SMALL_STATE(448)] = 6212,
  [SMALL_STATE(449)] = 6216,
  [SMALL_STATE(450)] = 6220,
  [SMALL_STATE(451)] = 6224,
  [SMALL_STATE(452)] = 6228,
  [SMALL_STATE(453)] = 6232,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quil, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quil_repeat2, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(335),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(405),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(453),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(101),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(300),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(309),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(141),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(156),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(116),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(115),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(122),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(114),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(112),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(111),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(107),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(106),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(105),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(443),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(96),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(118),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(13),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(440),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(416),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(235),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(323),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(325),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(328),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(330),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(228),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(401),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(400),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(227),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(206),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(207),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(209),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(221),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(222),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(224),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(225),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(226),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(77),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quil, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(12),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(10),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pragma_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(8),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_name, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_name, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__int, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__int, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(9),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quil_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quil_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quil_repeat1, 2), SHIFT_REPEAT(15),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__newline_tab, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay_qubits, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(48),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(434),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(53),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_designator, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_designator, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 1),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(55),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(56),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delay_frames_repeat1, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_delay_frames_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_delay_frames_repeat1, 2), SHIFT_REPEAT(372),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delay_frames_repeat1, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_delay_frames_repeat1, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newline_tab, 2),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(62),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__signed_int, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__signed_int, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(374),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(161),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(428),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(203),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__power, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 4),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 4),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__power, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__power, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__power, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__product, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__product, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row, 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(162),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(164),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_variables, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 6, .production_id = 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_param, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 5, .production_id = 1),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declare_repeat1, 2), SHIFT_REPEAT(308),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declare_repeat1, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 8, .production_id = 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 9, .production_id = 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_variables, 1),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_frame_repeat1, 2), SHIFT_REPEAT(319),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qubit_variables_repeat1, 2), SHIFT_REPEAT(339),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qubit_variables_repeat1, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measure, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qubit_variables_repeat1, 2),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qubit_variables_repeat1, 2), SHIFT_REPEAT(305),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_frame, 4),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_params_repeat1, 2),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(199),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform_name, 1),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform_name, 1),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay_frames, 4),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 3, .production_id = 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_scale, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_swap_phase, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_phase, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_phase, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_frequency, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_frequency, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform_name, 3),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform_name, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay_qubits, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 4),
  [703] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(28),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix, 1),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2), SHIFT_REPEAT(320),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__indented_instrs_repeat1, 2), SHIFT_REPEAT(321),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform, 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_binary_op, 3),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_pauli_gate_repeat1, 2), SHIFT_REPEAT(316),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_pauli_gate, 8),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_waveform_repeat1, 2),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_waveform_repeat1, 2), SHIFT_REPEAT(303),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 4),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(27),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_spec, 4),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_pauli_gate, 7),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(349),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_pauli_gate, 6),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_variable, 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 6, .production_id = 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables, 4),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_descriptor, 3),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_descriptor, 3),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform, 5),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 5),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform, 4),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 4),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_variable, 1),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_frame, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables, 3),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_binary, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_waveform, 5),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_attr, 1),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_circuit, 5),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reset, 2),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_unless, 2),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_when, 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__indented_instrs_repeat1, 2),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_label, 2),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 5),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_measure_calibration, 6),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_calibration, 6),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pulse, 4),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_comparison, 4),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_number, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_measure_calibration, 5),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate, 1),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_calibration, 5),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 4),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_store, 4),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3),
  [992] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_esc_inner, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 4),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_capture, 4),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pauli_term, 5),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pulse, 3),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 1),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_unary, 2),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measure, 3),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_pauli_gate_repeat1, 2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_waveform, 4),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 1),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_circuit, 4),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 4),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_binary_op, 3),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 3),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exchange, 3),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_capture, 5),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert, 3),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 6),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 1),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_as_permutation, 7),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 7),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_circuit, 6),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_quil(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
