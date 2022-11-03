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
#define STATE_COUNT 449
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 206
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
  sym_modifier = 116,
  sym__indented_instrs = 117,
  sym_params = 118,
  sym_param = 119,
  sym_matrix = 120,
  sym_matrix_row = 121,
  sym_expression = 122,
  sym_product = 123,
  sym_power = 124,
  sym_atom = 125,
  sym_variables = 126,
  sym_variable = 127,
  sym_fence = 128,
  sym_pulse = 129,
  sym_delay = 130,
  sym_delay_qubits = 131,
  sym_delay_frames = 132,
  sym_set_frequency = 133,
  sym_shift_frequency = 134,
  sym_shift_phase = 135,
  sym_set_phase = 136,
  sym_swap_phase = 137,
  sym_set_scale = 138,
  sym_declare = 139,
  sym_offset_descriptor = 140,
  sym_capture = 141,
  sym_raw_capture = 142,
  sym_addr = 143,
  sym_pragma = 144,
  sym_pragma_name = 145,
  sym_measure = 146,
  sym_halt = 147,
  sym_nop = 148,
  sym_include = 149,
  sym_def_label = 150,
  sym_jump = 151,
  sym_jump_when = 152,
  sym_jump_unless = 153,
  sym_label = 154,
  sym_reset = 155,
  sym_wait = 156,
  sym_store = 157,
  sym_load = 158,
  sym_convert = 159,
  sym_exchange = 160,
  sym_move = 161,
  sym_classical_unary = 162,
  sym_classical_binary = 163,
  sym_logical_binary_op = 164,
  sym_arithmetic_binary_op = 165,
  sym_classical_comparison = 166,
  sym_qubit_designator = 167,
  sym_qubit = 168,
  sym_qubit_variables = 169,
  sym_qubit_variable = 170,
  sym_named_param = 171,
  sym_waveform = 172,
  sym_waveform_name = 173,
  sym_frame = 174,
  sym_function = 175,
  sym_number = 176,
  sym_int_n = 177,
  sym_float_n = 178,
  sym_signed_number = 179,
  sym_keyword = 180,
  sym_name = 181,
  sym__newline_tab = 182,
  sym__float = 183,
  sym__decimal = 184,
  sym__signed_int = 185,
  aux_sym__int = 186,
  sym__string = 187,
  sym__escaped_string = 188,
  sym__string_esc_inner = 189,
  aux_sym_quil_repeat1 = 190,
  aux_sym_quil_repeat2 = 191,
  aux_sym_def_pauli_gate_repeat1 = 192,
  aux_sym_def_circuit_repeat1 = 193,
  aux_sym_def_frame_repeat1 = 194,
  aux_sym_modifiers_repeat1 = 195,
  aux_sym__indented_instrs_repeat1 = 196,
  aux_sym_params_repeat1 = 197,
  aux_sym_matrix_repeat1 = 198,
  aux_sym_matrix_row_repeat1 = 199,
  aux_sym_variables_repeat1 = 200,
  aux_sym_delay_frames_repeat1 = 201,
  aux_sym_declare_repeat1 = 202,
  aux_sym_pragma_repeat1 = 203,
  aux_sym_qubit_variables_repeat1 = 204,
  aux_sym_waveform_repeat1 = 205,
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
  [sym_modifier] = "modifier",
  [sym__indented_instrs] = "_indented_instrs",
  [sym_params] = "params",
  [sym_param] = "param",
  [sym_matrix] = "matrix",
  [sym_matrix_row] = "matrix_row",
  [sym_expression] = "expression",
  [sym_product] = "product",
  [sym_power] = "power",
  [sym_atom] = "atom",
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
  [sym_int_n] = "int_n",
  [sym_float_n] = "float_n",
  [sym_signed_number] = "signed_number",
  [sym_keyword] = "keyword",
  [sym_name] = "name",
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
  [aux_sym_matrix_row_repeat1] = "matrix_row_repeat1",
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
  [sym_modifier] = sym_modifier,
  [sym__indented_instrs] = sym__indented_instrs,
  [sym_params] = sym_params,
  [sym_param] = sym_param,
  [sym_matrix] = sym_matrix,
  [sym_matrix_row] = sym_matrix_row,
  [sym_expression] = sym_expression,
  [sym_product] = sym_product,
  [sym_power] = sym_power,
  [sym_atom] = sym_atom,
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
  [sym_int_n] = sym_int_n,
  [sym_float_n] = sym_float_n,
  [sym_signed_number] = sym_signed_number,
  [sym_keyword] = sym_keyword,
  [sym_name] = sym_name,
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
  [aux_sym_matrix_row_repeat1] = aux_sym_matrix_row_repeat1,
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
  [sym_modifier] = {
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
  [sym_param] = {
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
  [sym_product] = {
    .visible = true,
    .named = true,
  },
  [sym_power] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
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
  [sym_int_n] = {
    .visible = true,
    .named = true,
  },
  [sym_float_n] = {
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
  [sym_name] = {
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
  [aux_sym_matrix_row_repeat1] = {
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
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 29,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 27,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 42,
  [46] = 46,
  [47] = 46,
  [48] = 48,
  [49] = 49,
  [50] = 8,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 8,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 16,
  [63] = 8,
  [64] = 48,
  [65] = 8,
  [66] = 48,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 70,
  [71] = 71,
  [72] = 51,
  [73] = 70,
  [74] = 71,
  [75] = 51,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 80,
  [85] = 85,
  [86] = 83,
  [87] = 49,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 89,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
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
  [108] = 108,
  [109] = 89,
  [110] = 110,
  [111] = 49,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 118,
  [125] = 119,
  [126] = 126,
  [127] = 120,
  [128] = 92,
  [129] = 129,
  [130] = 82,
  [131] = 131,
  [132] = 131,
  [133] = 133,
  [134] = 8,
  [135] = 135,
  [136] = 136,
  [137] = 133,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 138,
  [142] = 129,
  [143] = 135,
  [144] = 140,
  [145] = 136,
  [146] = 79,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 8,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 152,
  [157] = 155,
  [158] = 151,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 153,
  [164] = 164,
  [165] = 82,
  [166] = 79,
  [167] = 92,
  [168] = 154,
  [169] = 57,
  [170] = 54,
  [171] = 92,
  [172] = 54,
  [173] = 58,
  [174] = 16,
  [175] = 57,
  [176] = 123,
  [177] = 177,
  [178] = 178,
  [179] = 58,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 180,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 205,
  [214] = 123,
  [215] = 215,
  [216] = 54,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 54,
  [222] = 222,
  [223] = 191,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
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
  [241] = 231,
  [242] = 234,
  [243] = 231,
  [244] = 233,
  [245] = 245,
  [246] = 235,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 240,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 225,
  [267] = 250,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 225,
  [275] = 239,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 238,
  [283] = 283,
  [284] = 284,
  [285] = 245,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 263,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 237,
  [306] = 235,
  [307] = 307,
  [308] = 308,
  [309] = 307,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 313,
  [317] = 311,
  [318] = 307,
  [319] = 312,
  [320] = 320,
  [321] = 320,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 320,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 324,
  [342] = 342,
  [343] = 343,
  [344] = 320,
  [345] = 345,
  [346] = 346,
  [347] = 312,
  [348] = 348,
  [349] = 326,
  [350] = 348,
  [351] = 351,
  [352] = 352,
  [353] = 273,
  [354] = 354,
  [355] = 328,
  [356] = 356,
  [357] = 61,
  [358] = 358,
  [359] = 328,
  [360] = 207,
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
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 61,
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
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 16,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 388,
  [415] = 415,
  [416] = 340,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 378,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 388,
  [431] = 431,
  [432] = 432,
  [433] = 378,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 383,
  [448] = 342,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == '@') ADVANCE(222);
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'D') ADVANCE(260);
      if (lookahead == 'E') ADVANCE(583);
      if (lookahead == 'F') ADVANCE(264);
      if (lookahead == 'G') ADVANCE(327);
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == 'I') ADVANCE(432);
      if (lookahead == 'J') ADVANCE(539);
      if (lookahead == 'L') ADVANCE(267);
      if (lookahead == 'M') ADVANCE(268);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead == 'O') ADVANCE(376);
      if (lookahead == 'P') ADVANCE(273);
      if (lookahead == 'R') ADVANCE(269);
      if (lookahead == 'S') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(482);
      if (lookahead == 'W') ADVANCE(270);
      if (lookahead == 'X') ADVANCE(454);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(205);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(578);
      if (lookahead == ' ') ADVANCE(577);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(578);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(578);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(578);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'D') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'F') ADVANCE(264);
      if (lookahead == 'G') ADVANCE(327);
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == 'I') ADVANCE(432);
      if (lookahead == 'J') ADVANCE(539);
      if (lookahead == 'L') ADVANCE(267);
      if (lookahead == 'M') ADVANCE(268);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead == 'O') ADVANCE(376);
      if (lookahead == 'P') ADVANCE(273);
      if (lookahead == 'R') ADVANCE(269);
      if (lookahead == 'S') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(482);
      if (lookahead == 'W') ADVANCE(270);
      if (lookahead == 'X') ADVANCE(454);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == 'C') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(395);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == 'C') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(584);
      if (lookahead == 'S') ADVANCE(395);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == 'E') ADVANCE(582);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(205);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == 'C') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(395);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'A') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == 'A') ADVANCE(123);
      if (lookahead == 'C') ADVANCE(39);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(582);
      if (lookahead == 'H') ADVANCE(44);
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'M') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(40);
      if (lookahead == 'R') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(42);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'D') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'F') ADVANCE(264);
      if (lookahead == 'G') ADVANCE(327);
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == 'I') ADVANCE(432);
      if (lookahead == 'J') ADVANCE(539);
      if (lookahead == 'L') ADVANCE(267);
      if (lookahead == 'M') ADVANCE(268);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead == 'O') ADVANCE(376);
      if (lookahead == 'P') ADVANCE(273);
      if (lookahead == 'R') ADVANCE(269);
      if (lookahead == 'S') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(482);
      if (lookahead == 'W') ADVANCE(270);
      if (lookahead == 'X') ADVANCE(454);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(497);
      if (lookahead == 'P') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(500);
      if (lookahead == 'P') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(451);
      if (lookahead == 'W') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(102);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 36:
      if (lookahead == '9') ADVANCE(586);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(318);
      if (lookahead == 'C') ADVANCE(259);
      if (lookahead == 'D') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(469);
      if (lookahead == 'F') ADVANCE(265);
      if (lookahead == 'G') ADVANCE(327);
      if (lookahead == 'H') ADVANCE(285);
      if (lookahead == 'I') ADVANCE(448);
      if (lookahead == 'J') ADVANCE(539);
      if (lookahead == 'L') ADVANCE(267);
      if (lookahead == 'M') ADVANCE(353);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead == 'O') ADVANCE(474);
      if (lookahead == 'P') ADVANCE(485);
      if (lookahead == 'R') ADVANCE(269);
      if (lookahead == 'S') ADVANCE(350);
      if (lookahead == 'T') ADVANCE(482);
      if (lookahead == 'W') ADVANCE(270);
      if (lookahead == 'X') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(89);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(144);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(133);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(117);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(107);
      END_STATE();
    case 50:
      if (lookahead == 'B') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(147);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(148);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(460);
      if (lookahead == 'D') ADVANCE(263);
      if (lookahead == 'F') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(131);
      END_STATE();
    case 56:
      if (lookahead == 'C') ADVANCE(127);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(145);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(55);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(210);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 'F') ADVANCE(122);
      END_STATE();
    case 73:
      if (lookahead == 'F') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == 'F') ADVANCE(118);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(121);
      END_STATE();
    case 76:
      if (lookahead == 'G') ADVANCE(206);
      END_STATE();
    case 77:
      if (lookahead == 'H') ADVANCE(38);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(32);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(130);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 86:
      if (lookahead == 'J') ADVANCE(70);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(65);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(124);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(34);
      END_STATE();
    case 91:
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 92:
      if (lookahead == 'M') ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead == 'M') ADVANCE(139);
      END_STATE();
    case 94:
      if (lookahead == 'M') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(76);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(173);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(161);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(129);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 105:
      if (lookahead == 'P') ADVANCE(128);
      END_STATE();
    case 106:
      if (lookahead == 'P') ADVANCE(87);
      END_STATE();
    case 107:
      if (lookahead == 'P') ADVANCE(136);
      END_STATE();
    case 108:
      if (lookahead == 'Q') ADVANCE(140);
      END_STATE();
    case 109:
      if (lookahead == 'Q') ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(46);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(156);
      END_STATE();
    case 124:
      if (lookahead == 'S') ADVANCE(60);
      END_STATE();
    case 125:
      if (lookahead == 'S') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(208);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(175);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(142);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(115);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 137:
      if (lookahead == 'U') ADVANCE(88);
      END_STATE();
    case 138:
      if (lookahead == 'U') ADVANCE(91);
      END_STATE();
    case 139:
      if (lookahead == 'U') ADVANCE(134);
      END_STATE();
    case 140:
      if (lookahead == 'U') ADVANCE(68);
      END_STATE();
    case 141:
      if (lookahead == 'U') ADVANCE(69);
      END_STATE();
    case 142:
      if (lookahead == 'U') ADVANCE(116);
      END_STATE();
    case 143:
      if (lookahead == 'U') ADVANCE(119);
      END_STATE();
    case 144:
      if (lookahead == 'W') ADVANCE(29);
      END_STATE();
    case 145:
      if (lookahead == 'W') ADVANCE(47);
      END_STATE();
    case 146:
      if (lookahead == 'X') ADVANCE(158);
      END_STATE();
    case 147:
      if (lookahead == 'Y') ADVANCE(177);
      END_STATE();
    case 148:
      if (lookahead == 'Y') ADVANCE(171);
      END_STATE();
    case 149:
      if (lookahead == '\\') ADVANCE(587);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 151:
      if (eof) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(318);
      if (lookahead == 'C') ADVANCE(259);
      if (lookahead == 'D') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(469);
      if (lookahead == 'F') ADVANCE(265);
      if (lookahead == 'G') ADVANCE(327);
      if (lookahead == 'H') ADVANCE(285);
      if (lookahead == 'I') ADVANCE(448);
      if (lookahead == 'J') ADVANCE(539);
      if (lookahead == 'L') ADVANCE(267);
      if (lookahead == 'M') ADVANCE(353);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead == 'O') ADVANCE(474);
      if (lookahead == 'P') ADVANCE(485);
      if (lookahead == 'R') ADVANCE(269);
      if (lookahead == 'S') ADVANCE(350);
      if (lookahead == 'T') ADVANCE(482);
      if (lookahead == 'W') ADVANCE(270);
      if (lookahead == 'X') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 152:
      if (eof) ADVANCE(153);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(318);
      if (lookahead == 'C') ADVANCE(259);
      if (lookahead == 'D') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(469);
      if (lookahead == 'F') ADVANCE(265);
      if (lookahead == 'G') ADVANCE(327);
      if (lookahead == 'H') ADVANCE(285);
      if (lookahead == 'I') ADVANCE(448);
      if (lookahead == 'J') ADVANCE(539);
      if (lookahead == 'L') ADVANCE(267);
      if (lookahead == 'M') ADVANCE(353);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead == 'O') ADVANCE(474);
      if (lookahead == 'P') ADVANCE(485);
      if (lookahead == 'R') ADVANCE(269);
      if (lookahead == 'S') ADVANCE(350);
      if (lookahead == 'T') ADVANCE(482);
      if (lookahead == 'W') ADVANCE(270);
      if (lookahead == 'X') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DEFGATE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_MATRIX);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_MATRIX);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PERMUTATION);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PERMUTATION);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PAULI_DASHSUM);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PAULI_DASHSUM);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DEFCIRCUIT);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DEFFRAME);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SAMPLE_DASHRATE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SAMPLE_DASHRATE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_INITIAL_DASHFREQUENCY);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_INITIAL_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DIRECTION);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DIRECTION);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_HARDWARE_DASHOBJECT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_HARDWARE_DASHOBJECT);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_CENTER_DASHFREQUENCY);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_CENTER_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DEFWAVEFORM);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DEFCAL);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_MEASURE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_CONTROLLED);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DAGGER);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_FORKED);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_FENCE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PULSE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PULSE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DELAY);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SET_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_SHIFT_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SHIFT_DASHPHASE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SET_DASHPHASE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SWAP_DASHPHASE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SET_DASHSCALE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DECLARE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SHARING);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SHARING);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_CAPTURE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_CAPTURE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RAW_DASHCAPTURE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RAW_DASHCAPTURE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PRAGMA);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_HALT);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_NOP);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LABEL);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_JUMP);
      if (lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_JUMP_DASHWHEN);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_JUMP_DASHUNLESS);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RESET);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_STORE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LOAD);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_CONVERT);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EXCHANGE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_MOVE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_NEG);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_IOR);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_ADD);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_MUL);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DIV);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_GE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SIN);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COS);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SQRT);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EXP);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_CIS);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_pi);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_pi);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_nonblocking);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_FILTER_DASHNODE);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(464);
      if (lookahead == 'E') ADVANCE(441);
      if (lookahead == 'I') ADVANCE(504);
      if (lookahead == 'O') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(464);
      if (lookahead == 'O') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(306);
      if (lookahead == 'I') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(306);
      if (lookahead == 'I') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == 'E') ADVANCE(307);
      if (lookahead == 'I') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(420);
      if (lookahead == 'E') ADVANCE(435);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'O') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(420);
      if (lookahead == 'E') ADVANCE(435);
      if (lookahead == 'O') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(275);
      if (lookahead == 'T') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(530);
      if (lookahead == 'E') ADVANCE(274);
      if (lookahead == 'O') ADVANCE(554);
      if (lookahead == 'U') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(556);
      if (lookahead == 'E') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(481);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead == 'U') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(486);
      if (lookahead == 'I') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(409);
      if (lookahead == 'I') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(428);
      if (lookahead == 'E') ADVANCE(525);
      if (lookahead == 'H') ADVANCE(280);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'Q') ADVANCE(489);
      if (lookahead == 'T') ADVANCE(456);
      if (lookahead == 'U') ADVANCE(296);
      if (lookahead == 'W') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'B') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'B') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'B') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'B') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(387);
      if (lookahead == 'P') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(281);
      if (lookahead == 'F') ADVANCE(491);
      if (lookahead == 'G') ADVANCE(286);
      if (lookahead == 'W') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(415);
      if (lookahead == 'F') ADVANCE(302);
      if (lookahead == 'L') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(415);
      if (lookahead == 'L') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(319);
      if (lookahead == 'N') ADVANCE(320);
      if (lookahead == 'S') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(319);
      if (lookahead == 'N') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(380);
      if (lookahead == 'O') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(525);
      if (lookahead == 'H') ADVANCE(394);
      if (lookahead == 'T') ADVANCE(456);
      if (lookahead == 'U') ADVANCE(296);
      if (lookahead == 'W') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(274);
      if (lookahead == 'O') ADVANCE(554);
      if (lookahead == 'U') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(379);
      if (lookahead == 'R') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'G') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'G') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'G') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'G') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'G') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'G') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'G') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'H') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(504);
      if (lookahead == 'O') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'Q') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'J') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'K') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'K') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(516);
      if (lookahead == 'R') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'L') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'M') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'M') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'M') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'M') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'M') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'M') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'M') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(309);
      if (lookahead == 'O') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(531);
      if (lookahead == 'S') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(299);
      if (lookahead == 'P') ADVANCE(216);
      if (lookahead == 'T') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(310);
      if (lookahead == 'O') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'Q') ADVANCE(242);
      if (lookahead == 'X') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'Q') ADVANCE(242);
      if (lookahead == 'X') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'Q') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'Q') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'Q') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'Q') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(351);
      if (lookahead == 'V') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead == 'U') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(480);
      if (lookahead == 'V') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'V') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'V') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'V') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'X') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'X') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'Y') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'Y') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'Y') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'Y') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'Y') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(578);
      if (lookahead == ' ') ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(578);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'Q') ADVANCE(242);
      if (lookahead == 'X') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'X') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__int_token1);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__string_esc_inner_token1);
      if (lookahead == '\\') ADVANCE(149);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__string_inner);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 152},
  [2] = {.lex_state = 152},
  [3] = {.lex_state = 152},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 151},
  [15] = {.lex_state = 151},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 35},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 53},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 53},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 35},
  [166] = {.lex_state = 35},
  [167] = {.lex_state = 35},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 13},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 11},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 11},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 13},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 11},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 11},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 53},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 11},
  [230] = {.lex_state = 94},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 11},
  [248] = {.lex_state = 11},
  [249] = {.lex_state = 11},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 11},
  [253] = {.lex_state = 11},
  [254] = {.lex_state = 11},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 11},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 11},
  [259] = {.lex_state = 11},
  [260] = {.lex_state = 11},
  [261] = {.lex_state = 14},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 11},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 11},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 6},
  [281] = {.lex_state = 6},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 6},
  [289] = {.lex_state = 10},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 11},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 11},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 6},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 11},
  [300] = {.lex_state = 11},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 6},
  [303] = {.lex_state = 6},
  [304] = {.lex_state = 6},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 11},
  [308] = {.lex_state = 11},
  [309] = {.lex_state = 11},
  [310] = {.lex_state = 11},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 10},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 11},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 11},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 11},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 11},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 10},
  [339] = {.lex_state = 11},
  [340] = {.lex_state = 11},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 588},
  [346] = {.lex_state = 11},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 13},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 9},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 11},
  [353] = {.lex_state = 6},
  [354] = {.lex_state = 11},
  [355] = {.lex_state = 11},
  [356] = {.lex_state = 14},
  [357] = {.lex_state = 6},
  [358] = {.lex_state = 11},
  [359] = {.lex_state = 11},
  [360] = {.lex_state = 6},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 6},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 6},
  [366] = {.lex_state = 6},
  [367] = {.lex_state = 14},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 14},
  [370] = {.lex_state = 6},
  [371] = {.lex_state = 6},
  [372] = {.lex_state = 6},
  [373] = {.lex_state = 6},
  [374] = {.lex_state = 6},
  [375] = {.lex_state = 6},
  [376] = {.lex_state = 6},
  [377] = {.lex_state = 6},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 6},
  [380] = {.lex_state = 11},
  [381] = {.lex_state = 6},
  [382] = {.lex_state = 6},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 11},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 6},
  [388] = {.lex_state = 11},
  [389] = {.lex_state = 6},
  [390] = {.lex_state = 6},
  [391] = {.lex_state = 6},
  [392] = {.lex_state = 6},
  [393] = {.lex_state = 6},
  [394] = {.lex_state = 6},
  [395] = {.lex_state = 6},
  [396] = {.lex_state = 6},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 6},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 14},
  [401] = {.lex_state = 6},
  [402] = {.lex_state = 6},
  [403] = {.lex_state = 6},
  [404] = {.lex_state = 14},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 6},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 6},
  [409] = {.lex_state = 6},
  [410] = {.lex_state = 11},
  [411] = {.lex_state = 6},
  [412] = {.lex_state = 6},
  [413] = {.lex_state = 11},
  [414] = {.lex_state = 11},
  [415] = {.lex_state = 6},
  [416] = {.lex_state = 6},
  [417] = {.lex_state = 6},
  [418] = {.lex_state = 6},
  [419] = {.lex_state = 6},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 6},
  [422] = {.lex_state = 6},
  [423] = {.lex_state = 6},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 6},
  [426] = {.lex_state = 6},
  [427] = {.lex_state = 6},
  [428] = {.lex_state = 6},
  [429] = {.lex_state = 11},
  [430] = {.lex_state = 11},
  [431] = {.lex_state = 6},
  [432] = {.lex_state = 6},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 6},
  [437] = {.lex_state = 6},
  [438] = {.lex_state = 6},
  [439] = {.lex_state = 6},
  [440] = {.lex_state = 11},
  [441] = {.lex_state = 6},
  [442] = {.lex_state = 6},
  [443] = {.lex_state = 587},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 6},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 6},
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
    [sym_identifier] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym__int_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_quil] = STATE(397),
    [sym__all_instr] = STATE(337),
    [sym__instr] = STATE(337),
    [sym_def_gate] = STATE(337),
    [sym_def_gate_matrix] = STATE(395),
    [sym_def_gate_as_permutation] = STATE(395),
    [sym_def_pauli_gate] = STATE(395),
    [sym_def_circuit] = STATE(337),
    [sym_def_frame] = STATE(337),
    [sym_def_waveform] = STATE(337),
    [sym_def_calibration] = STATE(337),
    [sym_def_measure_calibration] = STATE(337),
    [sym_gate] = STATE(337),
    [sym_modifiers] = STATE(339),
    [sym_modifier] = STATE(148),
    [sym_fence] = STATE(337),
    [sym_pulse] = STATE(337),
    [sym_delay] = STATE(337),
    [sym_delay_qubits] = STATE(392),
    [sym_delay_frames] = STATE(392),
    [sym_set_frequency] = STATE(337),
    [sym_shift_frequency] = STATE(337),
    [sym_shift_phase] = STATE(337),
    [sym_set_phase] = STATE(337),
    [sym_swap_phase] = STATE(337),
    [sym_set_scale] = STATE(337),
    [sym_declare] = STATE(337),
    [sym_capture] = STATE(337),
    [sym_raw_capture] = STATE(337),
    [sym_pragma] = STATE(337),
    [sym_measure] = STATE(337),
    [sym_halt] = STATE(337),
    [sym_nop] = STATE(337),
    [sym_include] = STATE(337),
    [sym_def_label] = STATE(337),
    [sym_jump] = STATE(337),
    [sym_jump_when] = STATE(337),
    [sym_jump_unless] = STATE(337),
    [sym_reset] = STATE(337),
    [sym_wait] = STATE(337),
    [sym_store] = STATE(337),
    [sym_load] = STATE(337),
    [sym_convert] = STATE(337),
    [sym_exchange] = STATE(337),
    [sym_move] = STATE(337),
    [sym_classical_unary] = STATE(337),
    [sym_classical_binary] = STATE(337),
    [sym_logical_binary_op] = STATE(391),
    [sym_arithmetic_binary_op] = STATE(391),
    [sym_classical_comparison] = STATE(337),
    [sym_name] = STATE(78),
    [aux_sym_quil_repeat2] = STATE(2),
    [aux_sym_modifiers_repeat1] = STATE(148),
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
    [sym__all_instr] = STATE(337),
    [sym__instr] = STATE(337),
    [sym_def_gate] = STATE(337),
    [sym_def_gate_matrix] = STATE(395),
    [sym_def_gate_as_permutation] = STATE(395),
    [sym_def_pauli_gate] = STATE(395),
    [sym_def_circuit] = STATE(337),
    [sym_def_frame] = STATE(337),
    [sym_def_waveform] = STATE(337),
    [sym_def_calibration] = STATE(337),
    [sym_def_measure_calibration] = STATE(337),
    [sym_gate] = STATE(337),
    [sym_modifiers] = STATE(339),
    [sym_modifier] = STATE(148),
    [sym_fence] = STATE(337),
    [sym_pulse] = STATE(337),
    [sym_delay] = STATE(337),
    [sym_delay_qubits] = STATE(392),
    [sym_delay_frames] = STATE(392),
    [sym_set_frequency] = STATE(337),
    [sym_shift_frequency] = STATE(337),
    [sym_shift_phase] = STATE(337),
    [sym_set_phase] = STATE(337),
    [sym_swap_phase] = STATE(337),
    [sym_set_scale] = STATE(337),
    [sym_declare] = STATE(337),
    [sym_capture] = STATE(337),
    [sym_raw_capture] = STATE(337),
    [sym_pragma] = STATE(337),
    [sym_measure] = STATE(337),
    [sym_halt] = STATE(337),
    [sym_nop] = STATE(337),
    [sym_include] = STATE(337),
    [sym_def_label] = STATE(337),
    [sym_jump] = STATE(337),
    [sym_jump_when] = STATE(337),
    [sym_jump_unless] = STATE(337),
    [sym_reset] = STATE(337),
    [sym_wait] = STATE(337),
    [sym_store] = STATE(337),
    [sym_load] = STATE(337),
    [sym_convert] = STATE(337),
    [sym_exchange] = STATE(337),
    [sym_move] = STATE(337),
    [sym_classical_unary] = STATE(337),
    [sym_classical_binary] = STATE(337),
    [sym_logical_binary_op] = STATE(391),
    [sym_arithmetic_binary_op] = STATE(391),
    [sym_classical_comparison] = STATE(337),
    [sym_name] = STATE(78),
    [aux_sym_quil_repeat2] = STATE(3),
    [aux_sym_modifiers_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(87),
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
  [3] = {
    [sym__all_instr] = STATE(337),
    [sym__instr] = STATE(337),
    [sym_def_gate] = STATE(337),
    [sym_def_gate_matrix] = STATE(395),
    [sym_def_gate_as_permutation] = STATE(395),
    [sym_def_pauli_gate] = STATE(395),
    [sym_def_circuit] = STATE(337),
    [sym_def_frame] = STATE(337),
    [sym_def_waveform] = STATE(337),
    [sym_def_calibration] = STATE(337),
    [sym_def_measure_calibration] = STATE(337),
    [sym_gate] = STATE(337),
    [sym_modifiers] = STATE(339),
    [sym_modifier] = STATE(148),
    [sym_fence] = STATE(337),
    [sym_pulse] = STATE(337),
    [sym_delay] = STATE(337),
    [sym_delay_qubits] = STATE(392),
    [sym_delay_frames] = STATE(392),
    [sym_set_frequency] = STATE(337),
    [sym_shift_frequency] = STATE(337),
    [sym_shift_phase] = STATE(337),
    [sym_set_phase] = STATE(337),
    [sym_swap_phase] = STATE(337),
    [sym_set_scale] = STATE(337),
    [sym_declare] = STATE(337),
    [sym_capture] = STATE(337),
    [sym_raw_capture] = STATE(337),
    [sym_pragma] = STATE(337),
    [sym_measure] = STATE(337),
    [sym_halt] = STATE(337),
    [sym_nop] = STATE(337),
    [sym_include] = STATE(337),
    [sym_def_label] = STATE(337),
    [sym_jump] = STATE(337),
    [sym_jump_when] = STATE(337),
    [sym_jump_unless] = STATE(337),
    [sym_reset] = STATE(337),
    [sym_wait] = STATE(337),
    [sym_store] = STATE(337),
    [sym_load] = STATE(337),
    [sym_convert] = STATE(337),
    [sym_exchange] = STATE(337),
    [sym_move] = STATE(337),
    [sym_classical_unary] = STATE(337),
    [sym_classical_binary] = STATE(337),
    [sym_logical_binary_op] = STATE(391),
    [sym_arithmetic_binary_op] = STATE(391),
    [sym_classical_comparison] = STATE(337),
    [sym_name] = STATE(78),
    [aux_sym_quil_repeat2] = STATE(3),
    [aux_sym_modifiers_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(91),
    [anon_sym_DEFGATE] = ACTIONS(94),
    [anon_sym_DEFCIRCUIT] = ACTIONS(97),
    [anon_sym_DEFFRAME] = ACTIONS(100),
    [anon_sym_DEFWAVEFORM] = ACTIONS(103),
    [anon_sym_DEFCAL] = ACTIONS(106),
    [anon_sym_MEASURE] = ACTIONS(109),
    [anon_sym_CONTROLLED] = ACTIONS(112),
    [anon_sym_DAGGER] = ACTIONS(112),
    [anon_sym_FORKED] = ACTIONS(112),
    [anon_sym_FENCE] = ACTIONS(115),
    [anon_sym_PULSE] = ACTIONS(118),
    [anon_sym_DELAY] = ACTIONS(121),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(124),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(127),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(130),
    [anon_sym_SET_DASHPHASE] = ACTIONS(133),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(136),
    [anon_sym_SET_DASHSCALE] = ACTIONS(139),
    [anon_sym_DECLARE] = ACTIONS(142),
    [anon_sym_CAPTURE] = ACTIONS(145),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(148),
    [anon_sym_PRAGMA] = ACTIONS(151),
    [anon_sym_HALT] = ACTIONS(154),
    [anon_sym_NOP] = ACTIONS(157),
    [anon_sym_INCLUDE] = ACTIONS(160),
    [anon_sym_LABEL] = ACTIONS(163),
    [anon_sym_JUMP] = ACTIONS(166),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(169),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(172),
    [anon_sym_RESET] = ACTIONS(175),
    [anon_sym_WAIT] = ACTIONS(178),
    [anon_sym_STORE] = ACTIONS(181),
    [anon_sym_LOAD] = ACTIONS(184),
    [anon_sym_CONVERT] = ACTIONS(187),
    [anon_sym_EXCHANGE] = ACTIONS(190),
    [anon_sym_MOVE] = ACTIONS(193),
    [anon_sym_NEG] = ACTIONS(196),
    [anon_sym_NOT] = ACTIONS(196),
    [anon_sym_TRUE] = ACTIONS(196),
    [anon_sym_FALSE] = ACTIONS(196),
    [anon_sym_AND] = ACTIONS(199),
    [anon_sym_OR] = ACTIONS(199),
    [anon_sym_IOR] = ACTIONS(199),
    [anon_sym_XOR] = ACTIONS(199),
    [anon_sym_ADD] = ACTIONS(202),
    [anon_sym_SUB] = ACTIONS(202),
    [anon_sym_MUL] = ACTIONS(202),
    [anon_sym_DIV] = ACTIONS(202),
    [anon_sym_EQ] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_GE] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_LE] = ACTIONS(205),
    [sym_nonblocking] = ACTIONS(208),
    [sym_identifier] = ACTIONS(211),
  },
  [4] = {
    [sym__instr] = STATE(398),
    [sym_gate] = STATE(398),
    [sym_modifiers] = STATE(339),
    [sym_modifier] = STATE(148),
    [sym_fence] = STATE(398),
    [sym_pulse] = STATE(398),
    [sym_delay] = STATE(398),
    [sym_delay_qubits] = STATE(392),
    [sym_delay_frames] = STATE(392),
    [sym_set_frequency] = STATE(398),
    [sym_shift_frequency] = STATE(398),
    [sym_shift_phase] = STATE(398),
    [sym_set_phase] = STATE(398),
    [sym_swap_phase] = STATE(398),
    [sym_set_scale] = STATE(398),
    [sym_declare] = STATE(398),
    [sym_capture] = STATE(398),
    [sym_raw_capture] = STATE(398),
    [sym_pragma] = STATE(398),
    [sym_measure] = STATE(398),
    [sym_halt] = STATE(398),
    [sym_nop] = STATE(398),
    [sym_include] = STATE(398),
    [sym_def_label] = STATE(398),
    [sym_jump] = STATE(398),
    [sym_jump_when] = STATE(398),
    [sym_jump_unless] = STATE(398),
    [sym_reset] = STATE(398),
    [sym_wait] = STATE(398),
    [sym_store] = STATE(398),
    [sym_load] = STATE(398),
    [sym_convert] = STATE(398),
    [sym_exchange] = STATE(398),
    [sym_move] = STATE(398),
    [sym_classical_unary] = STATE(398),
    [sym_classical_binary] = STATE(398),
    [sym_logical_binary_op] = STATE(391),
    [sym_arithmetic_binary_op] = STATE(391),
    [sym_classical_comparison] = STATE(398),
    [sym_name] = STATE(78),
    [aux_sym_modifiers_repeat1] = STATE(148),
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
    [sym_pragma_name] = STATE(6),
    [sym_keyword] = STATE(12),
    [aux_sym__int] = STATE(9),
    [sym__string] = STATE(439),
    [sym__escaped_string] = STATE(439),
    [aux_sym_pragma_repeat1] = STATE(6),
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
    [sym_pragma_name] = STATE(7),
    [sym_keyword] = STATE(12),
    [aux_sym__int] = STATE(9),
    [sym__string] = STATE(425),
    [sym__escaped_string] = STATE(425),
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
    [sym__newline] = ACTIONS(224),
    [aux_sym__int_token1] = ACTIONS(222),
  },
  [7] = {
    [sym_pragma_name] = STATE(7),
    [sym_keyword] = STATE(12),
    [aux_sym__int] = STATE(9),
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
    [aux_sym__int] = STATE(8),
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
    [aux_sym__int_token1] = ACTIONS(243),
  },
  [9] = {
    [aux_sym__int] = STATE(8),
    [anon_sym_DEFGATE] = ACTIONS(246),
    [anon_sym_AS] = ACTIONS(246),
    [anon_sym_MATRIX] = ACTIONS(246),
    [anon_sym_PERMUTATION] = ACTIONS(246),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(246),
    [anon_sym_DEFCIRCUIT] = ACTIONS(246),
    [anon_sym_DEFFRAME] = ACTIONS(246),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(246),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(246),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(246),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(246),
    [anon_sym_DEFWAVEFORM] = ACTIONS(246),
    [anon_sym_DEFCAL] = ACTIONS(246),
    [anon_sym_MEASURE] = ACTIONS(246),
    [anon_sym_CONTROLLED] = ACTIONS(246),
    [anon_sym_DAGGER] = ACTIONS(246),
    [anon_sym_FORKED] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_CARET] = ACTIONS(246),
    [anon_sym_FENCE] = ACTIONS(246),
    [anon_sym_PULSE] = ACTIONS(246),
    [anon_sym_DELAY] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(246),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(246),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(246),
    [anon_sym_SET_DASHPHASE] = ACTIONS(246),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(246),
    [anon_sym_SET_DASHSCALE] = ACTIONS(246),
    [anon_sym_DECLARE] = ACTIONS(246),
    [anon_sym_SHARING] = ACTIONS(246),
    [anon_sym_OFFSET] = ACTIONS(246),
    [anon_sym_CAPTURE] = ACTIONS(246),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(246),
    [anon_sym_PRAGMA] = ACTIONS(246),
    [anon_sym_HALT] = ACTIONS(246),
    [anon_sym_NOP] = ACTIONS(246),
    [anon_sym_INCLUDE] = ACTIONS(246),
    [anon_sym_LABEL] = ACTIONS(246),
    [anon_sym_JUMP] = ACTIONS(246),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(246),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(246),
    [anon_sym_RESET] = ACTIONS(246),
    [anon_sym_WAIT] = ACTIONS(246),
    [anon_sym_STORE] = ACTIONS(246),
    [anon_sym_LOAD] = ACTIONS(246),
    [anon_sym_CONVERT] = ACTIONS(246),
    [anon_sym_EXCHANGE] = ACTIONS(246),
    [anon_sym_MOVE] = ACTIONS(246),
    [anon_sym_NEG] = ACTIONS(246),
    [anon_sym_NOT] = ACTIONS(246),
    [anon_sym_TRUE] = ACTIONS(246),
    [anon_sym_FALSE] = ACTIONS(246),
    [anon_sym_AND] = ACTIONS(246),
    [anon_sym_OR] = ACTIONS(246),
    [anon_sym_IOR] = ACTIONS(246),
    [anon_sym_XOR] = ACTIONS(246),
    [anon_sym_ADD] = ACTIONS(246),
    [anon_sym_SUB] = ACTIONS(246),
    [anon_sym_MUL] = ACTIONS(246),
    [anon_sym_DIV] = ACTIONS(246),
    [anon_sym_EQ] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [anon_sym_GE] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(246),
    [anon_sym_LE] = ACTIONS(246),
    [anon_sym_SIN] = ACTIONS(246),
    [anon_sym_COS] = ACTIONS(246),
    [anon_sym_SQRT] = ACTIONS(246),
    [anon_sym_EXP] = ACTIONS(246),
    [anon_sym_CIS] = ACTIONS(246),
    [anon_sym_i] = ACTIONS(246),
    [anon_sym_pi] = ACTIONS(246),
    [sym_nonblocking] = ACTIONS(246),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(246),
    [sym_identifier] = ACTIONS(246),
    [sym__newline] = ACTIONS(248),
    [aux_sym__int_token1] = ACTIONS(246),
  },
  [10] = {
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
  [11] = {
    [anon_sym_DEFGATE] = ACTIONS(246),
    [anon_sym_AS] = ACTIONS(246),
    [anon_sym_MATRIX] = ACTIONS(246),
    [anon_sym_PERMUTATION] = ACTIONS(246),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(246),
    [anon_sym_DEFCIRCUIT] = ACTIONS(246),
    [anon_sym_DEFFRAME] = ACTIONS(246),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(246),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(246),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(246),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(246),
    [anon_sym_DEFWAVEFORM] = ACTIONS(246),
    [anon_sym_DEFCAL] = ACTIONS(246),
    [anon_sym_MEASURE] = ACTIONS(246),
    [anon_sym_CONTROLLED] = ACTIONS(246),
    [anon_sym_DAGGER] = ACTIONS(246),
    [anon_sym_FORKED] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_CARET] = ACTIONS(246),
    [anon_sym_FENCE] = ACTIONS(246),
    [anon_sym_PULSE] = ACTIONS(246),
    [anon_sym_DELAY] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(246),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(246),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(246),
    [anon_sym_SET_DASHPHASE] = ACTIONS(246),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(246),
    [anon_sym_SET_DASHSCALE] = ACTIONS(246),
    [anon_sym_DECLARE] = ACTIONS(246),
    [anon_sym_SHARING] = ACTIONS(246),
    [anon_sym_OFFSET] = ACTIONS(246),
    [anon_sym_CAPTURE] = ACTIONS(246),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(246),
    [anon_sym_PRAGMA] = ACTIONS(246),
    [anon_sym_HALT] = ACTIONS(246),
    [anon_sym_NOP] = ACTIONS(246),
    [anon_sym_INCLUDE] = ACTIONS(246),
    [anon_sym_LABEL] = ACTIONS(246),
    [anon_sym_JUMP] = ACTIONS(246),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(246),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(246),
    [anon_sym_RESET] = ACTIONS(246),
    [anon_sym_WAIT] = ACTIONS(246),
    [anon_sym_STORE] = ACTIONS(246),
    [anon_sym_LOAD] = ACTIONS(246),
    [anon_sym_CONVERT] = ACTIONS(246),
    [anon_sym_EXCHANGE] = ACTIONS(246),
    [anon_sym_MOVE] = ACTIONS(246),
    [anon_sym_NEG] = ACTIONS(246),
    [anon_sym_NOT] = ACTIONS(246),
    [anon_sym_TRUE] = ACTIONS(246),
    [anon_sym_FALSE] = ACTIONS(246),
    [anon_sym_AND] = ACTIONS(246),
    [anon_sym_OR] = ACTIONS(246),
    [anon_sym_IOR] = ACTIONS(246),
    [anon_sym_XOR] = ACTIONS(246),
    [anon_sym_ADD] = ACTIONS(246),
    [anon_sym_SUB] = ACTIONS(246),
    [anon_sym_MUL] = ACTIONS(246),
    [anon_sym_DIV] = ACTIONS(246),
    [anon_sym_EQ] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [anon_sym_GE] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(246),
    [anon_sym_LE] = ACTIONS(246),
    [anon_sym_SIN] = ACTIONS(246),
    [anon_sym_COS] = ACTIONS(246),
    [anon_sym_SQRT] = ACTIONS(246),
    [anon_sym_EXP] = ACTIONS(246),
    [anon_sym_CIS] = ACTIONS(246),
    [anon_sym_i] = ACTIONS(246),
    [anon_sym_pi] = ACTIONS(246),
    [sym_nonblocking] = ACTIONS(246),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(246),
    [sym_identifier] = ACTIONS(246),
    [sym__newline] = ACTIONS(248),
    [aux_sym__int_token1] = ACTIONS(246),
  },
  [12] = {
    [anon_sym_DEFGATE] = ACTIONS(246),
    [anon_sym_AS] = ACTIONS(246),
    [anon_sym_MATRIX] = ACTIONS(246),
    [anon_sym_PERMUTATION] = ACTIONS(246),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(246),
    [anon_sym_DEFCIRCUIT] = ACTIONS(246),
    [anon_sym_DEFFRAME] = ACTIONS(246),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(246),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(246),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(246),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(246),
    [anon_sym_DEFWAVEFORM] = ACTIONS(246),
    [anon_sym_DEFCAL] = ACTIONS(246),
    [anon_sym_MEASURE] = ACTIONS(246),
    [anon_sym_CONTROLLED] = ACTIONS(246),
    [anon_sym_DAGGER] = ACTIONS(246),
    [anon_sym_FORKED] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_CARET] = ACTIONS(246),
    [anon_sym_FENCE] = ACTIONS(246),
    [anon_sym_PULSE] = ACTIONS(246),
    [anon_sym_DELAY] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(246),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(246),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(246),
    [anon_sym_SET_DASHPHASE] = ACTIONS(246),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(246),
    [anon_sym_SET_DASHSCALE] = ACTIONS(246),
    [anon_sym_DECLARE] = ACTIONS(246),
    [anon_sym_SHARING] = ACTIONS(246),
    [anon_sym_OFFSET] = ACTIONS(246),
    [anon_sym_CAPTURE] = ACTIONS(246),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(246),
    [anon_sym_PRAGMA] = ACTIONS(246),
    [anon_sym_HALT] = ACTIONS(246),
    [anon_sym_NOP] = ACTIONS(246),
    [anon_sym_INCLUDE] = ACTIONS(246),
    [anon_sym_LABEL] = ACTIONS(246),
    [anon_sym_JUMP] = ACTIONS(246),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(246),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(246),
    [anon_sym_RESET] = ACTIONS(246),
    [anon_sym_WAIT] = ACTIONS(246),
    [anon_sym_STORE] = ACTIONS(246),
    [anon_sym_LOAD] = ACTIONS(246),
    [anon_sym_CONVERT] = ACTIONS(246),
    [anon_sym_EXCHANGE] = ACTIONS(246),
    [anon_sym_MOVE] = ACTIONS(246),
    [anon_sym_NEG] = ACTIONS(246),
    [anon_sym_NOT] = ACTIONS(246),
    [anon_sym_TRUE] = ACTIONS(246),
    [anon_sym_FALSE] = ACTIONS(246),
    [anon_sym_AND] = ACTIONS(246),
    [anon_sym_OR] = ACTIONS(246),
    [anon_sym_IOR] = ACTIONS(246),
    [anon_sym_XOR] = ACTIONS(246),
    [anon_sym_ADD] = ACTIONS(246),
    [anon_sym_SUB] = ACTIONS(246),
    [anon_sym_MUL] = ACTIONS(246),
    [anon_sym_DIV] = ACTIONS(246),
    [anon_sym_EQ] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [anon_sym_GE] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(246),
    [anon_sym_LE] = ACTIONS(246),
    [anon_sym_SIN] = ACTIONS(246),
    [anon_sym_COS] = ACTIONS(246),
    [anon_sym_SQRT] = ACTIONS(246),
    [anon_sym_EXP] = ACTIONS(246),
    [anon_sym_CIS] = ACTIONS(246),
    [anon_sym_i] = ACTIONS(246),
    [anon_sym_pi] = ACTIONS(246),
    [sym_nonblocking] = ACTIONS(246),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(246),
    [sym_identifier] = ACTIONS(246),
    [sym__newline] = ACTIONS(248),
    [aux_sym__int_token1] = ACTIONS(246),
  },
  [13] = {
    [sym_keyword] = STATE(5),
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
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
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
    [sym_identifier] = ACTIONS(256),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym_quil_repeat1,
    ACTIONS(260), 56,
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
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym_quil_repeat1,
    ACTIONS(265), 56,
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
    ACTIONS(269), 50,
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
  [189] = 24,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_PERCENT,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(285), 1,
      sym__newline,
    ACTIONS(287), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      aux_sym__int_token1,
    STATE(48), 1,
      aux_sym__int,
    STATE(52), 1,
      sym_variable,
    STATE(53), 1,
      sym_int_n,
    STATE(57), 1,
      sym_qubit,
    STATE(86), 1,
      sym__decimal,
    STATE(119), 1,
      sym_float_n,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(276), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(49), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(144), 2,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [270] = 21,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(296), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(427), 2,
      sym__string,
      sym__escaped_string,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [344] = 21,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      aux_sym_delay_frames_repeat1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(232), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [417] = 20,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(177), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    STATE(403), 1,
      sym_matrix_row,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [487] = 20,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(151), 1,
      sym_product,
    STATE(168), 1,
      sym_power,
    STATE(187), 1,
      sym_expression,
    STATE(285), 1,
      sym_param,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [557] = 20,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(151), 1,
      sym_product,
    STATE(168), 1,
      sym_power,
    STATE(187), 1,
      sym_expression,
    STATE(245), 1,
      sym_param,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [627] = 20,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(177), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    STATE(441), 1,
      sym_matrix_row,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [697] = 20,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(151), 1,
      sym_product,
    STATE(168), 1,
      sym_power,
    STATE(187), 1,
      sym_expression,
    STATE(332), 1,
      sym_param,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [767] = 19,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(279), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [834] = 19,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(280), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [901] = 19,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(151), 1,
      sym_product,
    STATE(168), 1,
      sym_power,
    STATE(233), 1,
      sym_expression,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [968] = 19,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(151), 1,
      sym_product,
    STATE(168), 1,
      sym_power,
    STATE(283), 1,
      sym_expression,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1035] = 19,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(191), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1102] = 19,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(281), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1169] = 19,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(287), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1236] = 19,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(151), 1,
      sym_product,
    STATE(168), 1,
      sym_power,
    STATE(223), 1,
      sym_expression,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1303] = 19,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(151), 1,
      sym_product,
    STATE(168), 1,
      sym_power,
    STATE(186), 1,
      sym_expression,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1370] = 19,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(228), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1437] = 19,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(288), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1504] = 19,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(151), 1,
      sym_product,
    STATE(168), 1,
      sym_power,
    STATE(238), 1,
      sym_expression,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1571] = 19,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(151), 1,
      sym_product,
    STATE(168), 1,
      sym_power,
    STATE(282), 1,
      sym_expression,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1638] = 19,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(151), 1,
      sym_product,
    STATE(168), 1,
      sym_power,
    STATE(244), 1,
      sym_expression,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1705] = 19,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(154), 1,
      sym_power,
    STATE(158), 1,
      sym_product,
    STATE(185), 1,
      sym_expression,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1772] = 18,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(163), 1,
      sym_product,
    STATE(168), 1,
      sym_power,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1836] = 18,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(153), 1,
      sym_product,
    STATE(154), 1,
      sym_power,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1900] = 17,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(155), 1,
      sym_power,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1961] = 17,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(152), 1,
      sym_power,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2022] = 17,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(142), 1,
      sym_atom,
    STATE(156), 1,
      sym_power,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2083] = 17,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(129), 1,
      sym_atom,
    STATE(157), 1,
      sym_power,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2144] = 16,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(83), 1,
      sym__decimal,
    STATE(127), 1,
      sym__float,
    STATE(135), 1,
      sym_atom,
    STATE(447), 1,
      sym_function,
    ACTIONS(309), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(315), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(125), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2202] = 16,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(143), 1,
      sym_atom,
    STATE(383), 1,
      sym_function,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(293), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(144), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(279), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2260] = 4,
    ACTIONS(325), 1,
      sym__newline,
    STATE(50), 1,
      aux_sym__int,
    ACTIONS(327), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(323), 18,
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
      anon_sym_DOT,
      aux_sym__int_token1,
  [2291] = 8,
    ACTIONS(331), 1,
      anon_sym_PERCENT,
    ACTIONS(334), 1,
      sym__newline,
    ACTIONS(336), 1,
      aux_sym__int_token1,
    STATE(54), 1,
      aux_sym__int,
    STATE(58), 1,
      sym_int_n,
    STATE(49), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(57), 2,
      sym_variable,
      sym_qubit,
    ACTIONS(329), 13,
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
  [2330] = 4,
    ACTIONS(241), 1,
      sym__newline,
    ACTIONS(339), 1,
      aux_sym__int_token1,
    STATE(50), 1,
      aux_sym__int,
    ACTIONS(239), 19,
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
  [2361] = 2,
    ACTIONS(344), 1,
      sym__newline,
    ACTIONS(342), 19,
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
  [2386] = 3,
    ACTIONS(350), 1,
      sym__newline,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
    ACTIONS(346), 15,
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
  [2412] = 3,
    ACTIONS(356), 1,
      sym__newline,
    ACTIONS(354), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
    ACTIONS(352), 15,
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
  [2438] = 3,
    ACTIONS(325), 1,
      sym__newline,
    STATE(55), 1,
      aux_sym__int,
    ACTIONS(323), 16,
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
  [2463] = 4,
    ACTIONS(241), 1,
      sym__newline,
    ACTIONS(358), 1,
      aux_sym__int_token1,
    STATE(55), 1,
      aux_sym__int,
    ACTIONS(239), 15,
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
  [2490] = 4,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 1,
      sym__newline,
    STATE(19), 1,
      aux_sym_delay_frames_repeat1,
    ACTIONS(361), 15,
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
  [2517] = 2,
    ACTIONS(350), 1,
      sym__newline,
    ACTIONS(346), 16,
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
  [2539] = 2,
    ACTIONS(356), 1,
      sym__newline,
    ACTIONS(352), 16,
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
  [2561] = 4,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      aux_sym_delay_frames_repeat1,
    ACTIONS(367), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(372), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [2587] = 2,
    ACTIONS(374), 8,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(376), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [2608] = 2,
    ACTIONS(378), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(380), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [2628] = 2,
    ACTIONS(382), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(269), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [2648] = 4,
    ACTIONS(241), 1,
      sym__newline,
    ACTIONS(384), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    ACTIONS(239), 10,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
      anon_sym_DOT,
  [2670] = 5,
    ACTIONS(389), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      aux_sym__int_token1,
    STATE(65), 1,
      aux_sym__int,
    ACTIONS(387), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(325), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [2694] = 3,
    ACTIONS(393), 1,
      aux_sym__int_token1,
    STATE(65), 1,
      aux_sym__int,
    ACTIONS(241), 11,
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
      anon_sym_DOT,
  [2714] = 6,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(396), 1,
      anon_sym_DOT,
    ACTIONS(398), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    ACTIONS(327), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(323), 7,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [2740] = 10,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    ACTIONS(281), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
    STATE(422), 2,
      sym_addr,
      sym_number,
  [2774] = 3,
    ACTIONS(402), 1,
      aux_sym__int_token1,
    STATE(73), 1,
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
  [2793] = 4,
    ACTIONS(400), 1,
      sym__newline,
    ACTIONS(406), 1,
      aux_sym__int_token1,
    STATE(70), 1,
      aux_sym__int,
    ACTIONS(404), 9,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
  [2814] = 4,
    ACTIONS(398), 1,
      aux_sym__int_token1,
    ACTIONS(410), 1,
      sym__newline,
    STATE(63), 1,
      aux_sym__int,
    ACTIONS(408), 9,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
  [2835] = 4,
    ACTIONS(398), 1,
      aux_sym__int_token1,
    ACTIONS(400), 1,
      sym__newline,
    STATE(63), 1,
      aux_sym__int,
    ACTIONS(404), 9,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
  [2856] = 1,
    ACTIONS(344), 12,
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
      sym_identifier,
      aux_sym__int_token1,
  [2871] = 3,
    ACTIONS(391), 1,
      aux_sym__int_token1,
    STATE(65), 1,
      aux_sym__int,
    ACTIONS(410), 10,
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
  [2890] = 3,
    ACTIONS(391), 1,
      aux_sym__int_token1,
    STATE(65), 1,
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
  [2909] = 2,
    ACTIONS(344), 1,
      sym__newline,
    ACTIONS(342), 10,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      sym_identifier,
      aux_sym__int_token1,
  [2925] = 9,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(116), 1,
      sym_variables,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(117), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [2955] = 9,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_PERCENT,
    ACTIONS(422), 1,
      sym__newline,
    ACTIONS(424), 1,
      aux_sym__int_token1,
    STATE(94), 1,
      sym_params,
    STATE(173), 1,
      sym_int_n,
    STATE(216), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(175), 2,
      sym_variable,
      sym_qubit,
  [2985] = 9,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_PERCENT,
    ACTIONS(424), 1,
      aux_sym__int_token1,
    ACTIONS(426), 1,
      sym__newline,
    STATE(104), 1,
      sym_params,
    STATE(173), 1,
      sym_int_n,
    STATE(216), 1,
      aux_sym__int,
    STATE(105), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(175), 2,
      sym_variable,
      sym_qubit,
  [3015] = 1,
    ACTIONS(428), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_LBRACK,
      sym_identifier,
      aux_sym__int_token1,
  [3028] = 3,
    ACTIONS(391), 1,
      aux_sym__int_token1,
    STATE(65), 1,
      aux_sym__int,
    ACTIONS(430), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3045] = 8,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    STATE(86), 1,
      sym__decimal,
    STATE(120), 1,
      sym__float,
    STATE(418), 1,
      sym_number,
    ACTIONS(432), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(119), 2,
      sym_int_n,
      sym_float_n,
  [3072] = 1,
    ACTIONS(434), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_LBRACK,
      sym_identifier,
      aux_sym__int_token1,
  [3085] = 2,
    ACTIONS(387), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(436), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3100] = 4,
    ACTIONS(398), 1,
      aux_sym__int_token1,
    ACTIONS(430), 1,
      sym__newline,
    STATE(63), 1,
      aux_sym__int,
    ACTIONS(438), 7,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3119] = 8,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_params,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(113), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3146] = 3,
    ACTIONS(436), 1,
      sym__newline,
    ACTIONS(327), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(442), 7,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3163] = 7,
    ACTIONS(444), 1,
      anon_sym_PERCENT,
    ACTIONS(447), 1,
      aux_sym__int_token1,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    ACTIONS(334), 2,
      anon_sym_COLON,
      anon_sym_DQUOTE,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3188] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(217), 1,
      sym_frame,
    STATE(91), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3212] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3236] = 7,
    ACTIONS(420), 1,
      anon_sym_PERCENT,
    ACTIONS(424), 1,
      aux_sym__int_token1,
    ACTIONS(452), 1,
      sym__newline,
    STATE(173), 1,
      sym_int_n,
    STATE(216), 1,
      aux_sym__int,
    STATE(111), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(175), 2,
      sym_variable,
      sym_qubit,
  [3260] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3284] = 2,
    ACTIONS(458), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym_identifier,
  [3298] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(219), 1,
      sym_frame,
    STATE(91), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3322] = 7,
    ACTIONS(420), 1,
      anon_sym_PERCENT,
    ACTIONS(424), 1,
      aux_sym__int_token1,
    ACTIONS(460), 1,
      sym__newline,
    STATE(173), 1,
      sym_int_n,
    STATE(216), 1,
      aux_sym__int,
    STATE(90), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(175), 2,
      sym_variable,
      sym_qubit,
  [3346] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(35), 1,
      sym_frame,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3370] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(34), 1,
      sym_frame,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3394] = 7,
    ACTIONS(420), 1,
      anon_sym_PERCENT,
    ACTIONS(424), 1,
      aux_sym__int_token1,
    ACTIONS(462), 1,
      sym__newline,
    STATE(173), 1,
      sym_int_n,
    STATE(216), 1,
      aux_sym__int,
    STATE(111), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(175), 2,
      sym_variable,
      sym_qubit,
  [3418] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(201), 1,
      sym_frame,
    STATE(91), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3442] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(203), 1,
      sym_frame,
    STATE(91), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3466] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(182), 1,
      sym_frame,
    STATE(91), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3490] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(31), 1,
      sym_frame,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3514] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    ACTIONS(464), 1,
      anon_sym_COLON,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3538] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(30), 1,
      sym_frame,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3562] = 7,
    ACTIONS(420), 1,
      anon_sym_PERCENT,
    ACTIONS(422), 1,
      sym__newline,
    ACTIONS(424), 1,
      aux_sym__int_token1,
    STATE(173), 1,
      sym_int_n,
    STATE(216), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(175), 2,
      sym_variable,
      sym_qubit,
  [3586] = 7,
    ACTIONS(420), 1,
      anon_sym_PERCENT,
    ACTIONS(422), 1,
      sym__newline,
    ACTIONS(424), 1,
      aux_sym__int_token1,
    STATE(173), 1,
      sym_int_n,
    STATE(216), 1,
      aux_sym__int,
    STATE(111), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(175), 2,
      sym_variable,
      sym_qubit,
  [3610] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(26), 1,
      sym_frame,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3634] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(25), 1,
      sym_frame,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3658] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(343), 1,
      sym_frame,
    STATE(89), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3682] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3706] = 7,
    ACTIONS(420), 1,
      anon_sym_PERCENT,
    ACTIONS(424), 1,
      aux_sym__int_token1,
    ACTIONS(460), 1,
      sym__newline,
    STATE(173), 1,
      sym_int_n,
    STATE(216), 1,
      aux_sym__int,
    STATE(111), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(175), 2,
      sym_variable,
      sym_qubit,
  [3730] = 7,
    ACTIONS(334), 1,
      sym__newline,
    ACTIONS(468), 1,
      anon_sym_PERCENT,
    ACTIONS(471), 1,
      aux_sym__int_token1,
    STATE(173), 1,
      sym_int_n,
    STATE(216), 1,
      aux_sym__int,
    STATE(111), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(175), 2,
      sym_variable,
      sym_qubit,
  [3754] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(183), 1,
      sym_frame,
    STATE(91), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3778] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    ACTIONS(474), 1,
      anon_sym_COLON,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3802] = 7,
    ACTIONS(420), 1,
      anon_sym_PERCENT,
    ACTIONS(424), 1,
      aux_sym__int_token1,
    ACTIONS(476), 1,
      sym__newline,
    STATE(173), 1,
      sym_int_n,
    STATE(216), 1,
      aux_sym__int,
    STATE(97), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(175), 2,
      sym_variable,
      sym_qubit,
  [3826] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    ACTIONS(478), 1,
      anon_sym_COLON,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3850] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    ACTIONS(480), 1,
      anon_sym_COLON,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(102), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3874] = 7,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    ACTIONS(480), 1,
      anon_sym_COLON,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3898] = 1,
    ACTIONS(482), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3909] = 3,
    ACTIONS(484), 1,
      anon_sym_i,
    ACTIONS(486), 1,
      sym__newline,
    ACTIONS(354), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3924] = 2,
    ACTIONS(490), 1,
      sym__newline,
    ACTIONS(488), 7,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3937] = 6,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(416), 1,
      aux_sym__int_token1,
    STATE(170), 1,
      aux_sym__int,
    STATE(179), 1,
      sym_int_n,
    STATE(115), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [3958] = 7,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      anon_sym_AS,
    ACTIONS(494), 1,
      anon_sym_COLON,
    ACTIONS(496), 1,
      sym_identifier,
    STATE(178), 1,
      sym_variables,
    STATE(369), 1,
      sym_qubit_variables,
    STATE(205), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [3981] = 2,
    ACTIONS(498), 2,
      anon_sym_AS,
      sym_identifier,
    ACTIONS(500), 6,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym__int_token1,
  [3994] = 2,
    ACTIONS(482), 1,
      sym__newline,
    ACTIONS(502), 7,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [4007] = 2,
    ACTIONS(504), 1,
      anon_sym_i,
    ACTIONS(486), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4020] = 7,
    ACTIONS(506), 1,
      anon_sym_PERCENT,
    ACTIONS(508), 1,
      aux_sym__int_token1,
    STATE(17), 1,
      aux_sym_def_circuit_repeat1,
    STATE(54), 1,
      aux_sym__int,
    STATE(56), 1,
      sym_qubit_designator,
    STATE(58), 1,
      sym_int_n,
    STATE(57), 2,
      sym_variable,
      sym_qubit,
  [4043] = 1,
    ACTIONS(490), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [4054] = 3,
    ACTIONS(456), 1,
      sym__newline,
    ACTIONS(512), 1,
      anon_sym_LBRACK,
    ACTIONS(510), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4069] = 2,
    ACTIONS(516), 1,
      anon_sym_CARET,
    ACTIONS(514), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [4081] = 2,
    ACTIONS(434), 1,
      sym__newline,
    ACTIONS(518), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4093] = 1,
    ACTIONS(520), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4103] = 2,
    ACTIONS(520), 1,
      sym__newline,
    ACTIONS(522), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4115] = 1,
    ACTIONS(486), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4125] = 3,
    ACTIONS(524), 1,
      aux_sym__int_token1,
    STATE(134), 1,
      aux_sym__int,
    ACTIONS(241), 5,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      sym_identifier,
  [4139] = 1,
    ACTIONS(527), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4149] = 2,
    ACTIONS(531), 1,
      sym__newline,
    ACTIONS(529), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4161] = 2,
    ACTIONS(486), 1,
      sym__newline,
    ACTIONS(354), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4173] = 1,
    ACTIONS(533), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4183] = 6,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    ACTIONS(535), 1,
      aux_sym__int_token1,
    STATE(179), 1,
      sym_int_n,
    STATE(221), 1,
      aux_sym__int,
    STATE(272), 1,
      sym_qubit_designator,
    STATE(169), 2,
      sym_variable,
      sym_qubit,
  [4203] = 1,
    ACTIONS(537), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4213] = 2,
    ACTIONS(533), 1,
      sym__newline,
    ACTIONS(539), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4225] = 3,
    ACTIONS(514), 1,
      sym__newline,
    ACTIONS(543), 1,
      anon_sym_CARET,
    ACTIONS(541), 5,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [4239] = 2,
    ACTIONS(527), 1,
      sym__newline,
    ACTIONS(545), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4251] = 2,
    ACTIONS(537), 1,
      sym__newline,
    ACTIONS(348), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4263] = 1,
    ACTIONS(531), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4273] = 2,
    ACTIONS(428), 1,
      sym__newline,
    ACTIONS(547), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4285] = 6,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(549), 1,
      aux_sym__int_token1,
    STATE(172), 1,
      aux_sym__int,
    STATE(173), 1,
      sym_int_n,
    STATE(184), 1,
      sym_qubit_designator,
    STATE(175), 2,
      sym_variable,
      sym_qubit,
  [4305] = 3,
    ACTIONS(551), 1,
      sym_identifier,
    STATE(160), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
    ACTIONS(19), 3,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
  [4318] = 2,
    STATE(385), 1,
      sym_frame_attr,
    ACTIONS(553), 5,
      anon_sym_SAMPLE_DASHRATE,
      anon_sym_INITIAL_DASHFREQUENCY,
      anon_sym_DIRECTION,
      anon_sym_HARDWARE_DASHOBJECT,
      anon_sym_CENTER_DASHFREQUENCY,
  [4329] = 4,
    ACTIONS(241), 1,
      sym__newline,
    ACTIONS(555), 1,
      aux_sym__int_token1,
    STATE(150), 1,
      aux_sym__int,
    ACTIONS(239), 3,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      sym_identifier,
  [4344] = 2,
    ACTIONS(560), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(558), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4355] = 1,
    ACTIONS(562), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [4364] = 3,
    ACTIONS(568), 1,
      sym__newline,
    ACTIONS(566), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(564), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4377] = 2,
    ACTIONS(572), 1,
      sym__newline,
    ACTIONS(570), 5,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [4388] = 2,
    ACTIONS(576), 1,
      sym__newline,
    ACTIONS(574), 5,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [4399] = 2,
    ACTIONS(562), 1,
      sym__newline,
    ACTIONS(578), 5,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [4410] = 1,
    ACTIONS(576), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [4419] = 3,
    ACTIONS(558), 1,
      sym__newline,
    ACTIONS(566), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(580), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4432] = 4,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      sym_identifier,
    ACTIONS(582), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(417), 2,
      sym_addr,
      sym_signed_number,
  [4447] = 3,
    ACTIONS(589), 1,
      sym_identifier,
    STATE(160), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
    ACTIONS(586), 3,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
  [4460] = 4,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      sym_identifier,
    ACTIONS(582), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(394), 2,
      sym_addr,
      sym_signed_number,
  [4475] = 5,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(549), 1,
      aux_sym__int_token1,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(172), 1,
      aux_sym__int,
    STATE(402), 2,
      sym_addr,
      sym_int_n,
  [4492] = 2,
    ACTIONS(560), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(568), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4503] = 4,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      sym_identifier,
    ACTIONS(582), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(415), 2,
      sym_addr,
      sym_signed_number,
  [4518] = 2,
    ACTIONS(434), 3,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(518), 3,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [4529] = 2,
    ACTIONS(428), 3,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(547), 3,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [4540] = 2,
    ACTIONS(456), 3,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(510), 3,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [4551] = 1,
    ACTIONS(572), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [4560] = 1,
    ACTIONS(350), 5,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      sym_identifier,
      aux_sym__int_token1,
  [4568] = 2,
    STATE(134), 1,
      aux_sym__int,
    ACTIONS(325), 4,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym__int_token1,
  [4578] = 1,
    ACTIONS(456), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      sym_identifier,
      aux_sym__int_token1,
  [4586] = 4,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(591), 1,
      aux_sym__int_token1,
    STATE(150), 1,
      aux_sym__int,
    ACTIONS(323), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [4600] = 2,
    ACTIONS(356), 1,
      sym__newline,
    ACTIONS(352), 4,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      sym_identifier,
      aux_sym__int_token1,
  [4610] = 1,
    ACTIONS(382), 5,
      anon_sym_SAMPLE_DASHRATE,
      anon_sym_INITIAL_DASHFREQUENCY,
      anon_sym_DIRECTION,
      anon_sym_HARDWARE_DASHOBJECT,
      anon_sym_CENTER_DASHFREQUENCY,
  [4618] = 2,
    ACTIONS(350), 1,
      sym__newline,
    ACTIONS(346), 4,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      sym_identifier,
      aux_sym__int_token1,
  [4628] = 2,
    ACTIONS(500), 1,
      sym__newline,
    ACTIONS(498), 4,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4638] = 5,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(599), 1,
      sym__newline,
    STATE(298), 1,
      aux_sym_matrix_row_repeat1,
  [4654] = 4,
    ACTIONS(601), 1,
      anon_sym_COLON,
    ACTIONS(603), 1,
      sym_identifier,
    STATE(404), 1,
      sym_qubit_variables,
    STATE(205), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4668] = 1,
    ACTIONS(356), 5,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      sym_identifier,
      aux_sym__int_token1,
  [4676] = 3,
    ACTIONS(605), 1,
      anon_sym_AS,
    ACTIONS(607), 1,
      sym_identifier,
    STATE(180), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4687] = 3,
    ACTIONS(610), 1,
      sym__newline,
    STATE(149), 1,
      sym__newline_tab,
    STATE(198), 2,
      sym_frame_spec,
      aux_sym_def_frame_repeat1,
  [4698] = 4,
    ACTIONS(612), 1,
      sym_identifier,
    STATE(225), 1,
      sym_name,
    STATE(249), 1,
      sym_waveform,
    STATE(273), 1,
      sym_waveform_name,
  [4711] = 4,
    ACTIONS(614), 1,
      sym_identifier,
    STATE(274), 1,
      sym_name,
    STATE(353), 1,
      sym_waveform_name,
    STATE(419), 1,
      sym_waveform,
  [4724] = 4,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(616), 1,
      sym__newline,
    STATE(366), 1,
      sym_addr,
  [4737] = 4,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      sym__newline,
  [4750] = 3,
    ACTIONS(624), 1,
      anon_sym_PLUS,
    ACTIONS(626), 1,
      anon_sym_DASH,
    ACTIONS(622), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4761] = 3,
    ACTIONS(624), 1,
      anon_sym_PLUS,
    ACTIONS(626), 1,
      anon_sym_DASH,
    ACTIONS(628), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4772] = 3,
    ACTIONS(630), 1,
      anon_sym_OFFSET,
    ACTIONS(633), 1,
      sym__newline,
    STATE(188), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4783] = 4,
    ACTIONS(635), 1,
      sym__newline,
    STATE(20), 1,
      sym__newline_tab,
    STATE(278), 1,
      aux_sym_matrix_repeat1,
    STATE(387), 1,
      sym_matrix,
  [4796] = 3,
    ACTIONS(637), 1,
      anon_sym_OFFSET,
    ACTIONS(639), 1,
      sym__newline,
    STATE(192), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4807] = 2,
    ACTIONS(568), 1,
      sym__newline,
    ACTIONS(564), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4816] = 3,
    ACTIONS(637), 1,
      anon_sym_OFFSET,
    ACTIONS(641), 1,
      sym__newline,
    STATE(188), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4827] = 3,
    ACTIONS(643), 1,
      sym_identifier,
    STATE(390), 1,
      sym_qubit_variables,
    STATE(213), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4838] = 4,
    ACTIONS(635), 1,
      sym__newline,
    STATE(20), 1,
      sym__newline_tab,
    STATE(278), 1,
      aux_sym_matrix_repeat1,
    STATE(401), 1,
      sym_matrix,
  [4851] = 3,
    ACTIONS(645), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(393), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4862] = 3,
    ACTIONS(645), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(381), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4873] = 3,
    ACTIONS(637), 1,
      anon_sym_OFFSET,
    ACTIONS(647), 1,
      sym__newline,
    STATE(188), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4884] = 3,
    ACTIONS(649), 1,
      sym__newline,
    STATE(149), 1,
      sym__newline_tab,
    STATE(198), 2,
      sym_frame_spec,
      aux_sym_def_frame_repeat1,
  [4895] = 3,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(655), 1,
      sym__newline,
    STATE(199), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4906] = 3,
    ACTIONS(645), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(389), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4917] = 4,
    ACTIONS(614), 1,
      sym_identifier,
    STATE(274), 1,
      sym_name,
    STATE(353), 1,
      sym_waveform_name,
    STATE(406), 1,
      sym_waveform,
  [4930] = 4,
    ACTIONS(635), 1,
      sym__newline,
    STATE(20), 1,
      sym__newline_tab,
    STATE(278), 1,
      aux_sym_matrix_repeat1,
    STATE(412), 1,
      sym_matrix,
  [4943] = 4,
    ACTIONS(612), 1,
      sym_identifier,
    STATE(225), 1,
      sym_name,
    STATE(248), 1,
      sym_waveform,
    STATE(273), 1,
      sym_waveform_name,
  [4956] = 3,
    ACTIONS(645), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(437), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4967] = 3,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(657), 1,
      anon_sym_AS,
    STATE(180), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4978] = 4,
    ACTIONS(635), 1,
      sym__newline,
    STATE(20), 1,
      sym__newline_tab,
    STATE(278), 1,
      aux_sym_matrix_repeat1,
    STATE(373), 1,
      sym_matrix,
  [4991] = 1,
    ACTIONS(659), 4,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [4998] = 3,
    ACTIONS(645), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(372), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [5009] = 1,
    ACTIONS(661), 4,
      anon_sym_COLON,
      anon_sym_PERCENT,
      sym_identifier,
      aux_sym__int_token1,
  [5016] = 3,
    ACTIONS(645), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(370), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [5027] = 3,
    ACTIONS(645), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(365), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [5038] = 4,
    ACTIONS(635), 1,
      sym__newline,
    STATE(20), 1,
      sym__newline_tab,
    STATE(278), 1,
      aux_sym_matrix_repeat1,
    STATE(396), 1,
      sym_matrix,
  [5051] = 3,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      sym__newline,
    STATE(199), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [5062] = 1,
    ACTIONS(500), 4,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      sym_identifier,
  [5069] = 3,
    ACTIONS(637), 1,
      anon_sym_OFFSET,
    ACTIONS(667), 1,
      sym__newline,
    STATE(197), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [5080] = 3,
    ACTIONS(325), 1,
      sym__newline,
    STATE(150), 1,
      aux_sym__int,
    ACTIONS(323), 2,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [5091] = 4,
    ACTIONS(612), 1,
      sym_identifier,
    STATE(225), 1,
      sym_name,
    STATE(273), 1,
      sym_waveform_name,
    STATE(291), 1,
      sym_waveform,
  [5104] = 3,
    ACTIONS(669), 1,
      sym__newline,
    STATE(149), 1,
      sym__newline_tab,
    STATE(181), 2,
      sym_frame_spec,
      aux_sym_def_frame_repeat1,
  [5115] = 4,
    ACTIONS(612), 1,
      sym_identifier,
    STATE(225), 1,
      sym_name,
    STATE(264), 1,
      sym_waveform,
    STATE(273), 1,
      sym_waveform_name,
  [5128] = 4,
    ACTIONS(635), 1,
      sym__newline,
    STATE(20), 1,
      sym__newline_tab,
    STATE(278), 1,
      aux_sym_matrix_repeat1,
    STATE(442), 1,
      sym_matrix,
  [5141] = 3,
    ACTIONS(671), 1,
      aux_sym__int_token1,
    STATE(134), 1,
      aux_sym__int,
    ACTIONS(325), 2,
      anon_sym_COLON,
      sym_identifier,
  [5152] = 4,
    ACTIONS(549), 1,
      aux_sym__int_token1,
    STATE(172), 1,
      aux_sym__int,
    STATE(173), 1,
      sym_int_n,
    STATE(374), 1,
      sym_qubit,
  [5165] = 1,
    ACTIONS(568), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5172] = 1,
    ACTIONS(673), 4,
      anon_sym_COLON,
      anon_sym_PERCENT,
      sym_identifier,
      aux_sym__int_token1,
  [5179] = 2,
    ACTIONS(677), 1,
      anon_sym_SLASH,
    ACTIONS(675), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [5188] = 1,
    ACTIONS(679), 4,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
      sym_identifier,
  [5195] = 3,
    ACTIONS(681), 1,
      sym__newline,
    STATE(227), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(299), 1,
      sym__newline_tab,
  [5205] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(684), 1,
      sym__newline,
  [5215] = 3,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(265), 1,
      sym_waveform_name,
    STATE(266), 1,
      sym_name,
  [5225] = 3,
    ACTIONS(688), 1,
      anon_sym_MEASURE,
    ACTIONS(690), 1,
      sym_identifier,
    STATE(85), 1,
      sym_name,
  [5235] = 3,
    ACTIONS(671), 1,
      aux_sym__int_token1,
    ACTIONS(692), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [5245] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(694), 1,
      sym__newline,
  [5255] = 3,
    ACTIONS(624), 1,
      anon_sym_PLUS,
    ACTIONS(626), 1,
      anon_sym_DASH,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
  [5265] = 2,
    STATE(124), 1,
      sym__signed_int,
    ACTIONS(698), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5273] = 3,
    ACTIONS(671), 1,
      aux_sym__int_token1,
    ACTIONS(700), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [5283] = 2,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    STATE(382), 2,
      sym__string,
      sym__escaped_string,
  [5291] = 3,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_waveform_repeat1,
  [5301] = 3,
    ACTIONS(624), 1,
      anon_sym_PLUS,
    ACTIONS(626), 1,
      anon_sym_DASH,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
  [5311] = 3,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_waveform_repeat1,
  [5321] = 3,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_params_repeat1,
  [5331] = 3,
    ACTIONS(671), 1,
      aux_sym__int_token1,
    ACTIONS(714), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [5341] = 2,
    STATE(118), 1,
      sym__signed_int,
    ACTIONS(716), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5349] = 3,
    ACTIONS(671), 1,
      aux_sym__int_token1,
    ACTIONS(718), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [5359] = 3,
    ACTIONS(624), 1,
      anon_sym_PLUS,
    ACTIONS(626), 1,
      anon_sym_DASH,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
  [5369] = 3,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_params_repeat1,
  [5379] = 3,
    ACTIONS(671), 1,
      aux_sym__int_token1,
    ACTIONS(724), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [5389] = 3,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(358), 1,
      sym_addr,
  [5399] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(362), 1,
      sym_addr,
  [5409] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(411), 1,
      sym_addr,
  [5419] = 2,
    ACTIONS(730), 1,
      sym__newline,
    ACTIONS(728), 2,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [5427] = 3,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      aux_sym_params_repeat1,
  [5437] = 3,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(734), 1,
      sym_identifier,
    STATE(269), 1,
      sym_addr,
  [5447] = 3,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(734), 1,
      sym_identifier,
    STATE(270), 1,
      sym_addr,
  [5457] = 3,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(734), 1,
      sym_identifier,
    STATE(164), 1,
      sym_addr,
  [5467] = 3,
    ACTIONS(736), 1,
      sym__newline,
    STATE(20), 1,
      sym__newline_tab,
    STATE(255), 1,
      aux_sym_matrix_repeat1,
  [5477] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(371), 1,
      sym_addr,
  [5487] = 3,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_variables_repeat1,
  [5497] = 3,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(734), 1,
      sym_identifier,
    STATE(162), 1,
      sym_addr,
  [5507] = 3,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(734), 1,
      sym_identifier,
    STATE(161), 1,
      sym_addr,
  [5517] = 3,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(734), 1,
      sym_identifier,
    STATE(271), 1,
      sym_addr,
  [5527] = 3,
    ACTIONS(743), 1,
      anon_sym_PULSE,
    ACTIONS(745), 1,
      anon_sym_CAPTURE,
    ACTIONS(747), 1,
      anon_sym_RAW_DASHCAPTURE,
  [5537] = 3,
    ACTIONS(749), 1,
      sym__newline,
    STATE(4), 1,
      sym__newline_tab,
    STATE(262), 1,
      aux_sym__indented_instrs_repeat1,
  [5547] = 1,
    ACTIONS(752), 3,
      anon_sym_COLON,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [5553] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(426), 1,
      sym_addr,
  [5563] = 3,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    ACTIONS(754), 1,
      anon_sym_COLON,
    STATE(368), 1,
      sym_params,
  [5573] = 2,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    ACTIONS(675), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [5581] = 1,
    ACTIONS(730), 3,
      anon_sym_COLON,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [5587] = 3,
    ACTIONS(758), 1,
      anon_sym_LBRACK,
    ACTIONS(760), 1,
      sym_identifier,
    STATE(67), 1,
      sym_addr,
  [5597] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(432), 1,
      sym_addr,
  [5607] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(431), 1,
      sym_addr,
  [5617] = 3,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(734), 1,
      sym_identifier,
    STATE(159), 1,
      sym_addr,
  [5627] = 3,
    ACTIONS(686), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_COLON,
    STATE(446), 1,
      sym_name,
  [5637] = 2,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
    ACTIONS(766), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [5645] = 3,
    ACTIONS(675), 1,
      sym__newline,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(770), 1,
      anon_sym_SLASH,
  [5655] = 3,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_waveform_repeat1,
  [5665] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(774), 1,
      sym__newline,
  [5675] = 3,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_variables_repeat1,
  [5685] = 3,
    ACTIONS(778), 1,
      sym__newline,
    STATE(20), 1,
      sym__newline_tab,
    STATE(255), 1,
      aux_sym_matrix_repeat1,
  [5695] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(780), 1,
      sym__newline,
  [5705] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(782), 1,
      sym__newline,
  [5715] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(784), 1,
      sym__newline,
  [5725] = 3,
    ACTIONS(624), 1,
      anon_sym_PLUS,
    ACTIONS(626), 1,
      anon_sym_DASH,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
  [5735] = 3,
    ACTIONS(624), 1,
      anon_sym_PLUS,
    ACTIONS(626), 1,
      anon_sym_DASH,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
  [5745] = 3,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(790), 1,
      anon_sym_COLON,
    STATE(405), 1,
      sym_variables,
  [5755] = 3,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_params_repeat1,
  [5765] = 3,
    ACTIONS(671), 1,
      aux_sym__int_token1,
    ACTIONS(794), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [5775] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(796), 1,
      sym__newline,
  [5785] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(798), 1,
      sym__newline,
  [5795] = 3,
    ACTIONS(800), 1,
      anon_sym_LBRACK,
    ACTIONS(802), 1,
      anon_sym_SHARING,
    ACTIONS(804), 1,
      sym__newline,
  [5805] = 3,
    ACTIONS(806), 1,
      sym__newline,
    STATE(227), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(299), 1,
      sym__newline_tab,
  [5815] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(428), 1,
      sym_addr,
  [5825] = 2,
    ACTIONS(752), 1,
      sym__newline,
    ACTIONS(808), 2,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [5833] = 3,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_params_repeat1,
  [5843] = 3,
    ACTIONS(671), 1,
      aux_sym__int_token1,
    ACTIONS(815), 1,
      sym_identifier,
    STATE(134), 1,
      aux_sym__int,
  [5853] = 3,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_waveform_repeat1,
  [5863] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(822), 1,
      sym__newline,
  [5873] = 3,
    ACTIONS(824), 1,
      sym__newline,
    STATE(227), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(299), 1,
      sym__newline_tab,
  [5883] = 3,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(826), 1,
      sym__newline,
    STATE(304), 1,
      aux_sym_matrix_row_repeat1,
  [5893] = 3,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(407), 1,
      sym_name,
    STATE(409), 1,
      sym_pauli_term,
  [5903] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(421), 1,
      sym_addr,
  [5913] = 3,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_variables_repeat1,
  [5923] = 3,
    ACTIONS(824), 1,
      sym__newline,
    STATE(290), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(299), 1,
      sym__newline_tab,
  [5933] = 3,
    ACTIONS(833), 1,
      sym__newline,
    STATE(297), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(299), 1,
      sym__newline_tab,
  [5943] = 3,
    ACTIONS(620), 1,
      sym__newline,
    ACTIONS(835), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_matrix_row_repeat1,
  [5953] = 3,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_waveform_repeat1,
  [5963] = 3,
    ACTIONS(671), 1,
      aux_sym__int_token1,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [5973] = 2,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(378), 1,
      sym_name,
  [5980] = 2,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(76), 1,
      sym_name,
  [5987] = 2,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(433), 1,
      sym_name,
  [5994] = 2,
    ACTIONS(842), 1,
      sym_identifier,
    STATE(327), 1,
      sym_named_param,
  [6001] = 2,
    ACTIONS(844), 1,
      aux_sym__int_token1,
    STATE(243), 1,
      aux_sym__int,
  [6008] = 2,
    ACTIONS(846), 1,
      aux_sym__int_token1,
    STATE(235), 1,
      aux_sym__int,
  [6015] = 2,
    ACTIONS(842), 1,
      sym_identifier,
    STATE(275), 1,
      sym_named_param,
  [6022] = 2,
    ACTIONS(848), 1,
      anon_sym_SHARING,
    ACTIONS(850), 1,
      sym__newline,
  [6029] = 2,
    ACTIONS(852), 1,
      aux_sym__int_token1,
    STATE(294), 1,
      aux_sym__int,
  [6036] = 2,
    ACTIONS(842), 1,
      sym_identifier,
    STATE(239), 1,
      sym_named_param,
  [6043] = 2,
    ACTIONS(854), 1,
      aux_sym__int_token1,
    STATE(241), 1,
      aux_sym__int,
  [6050] = 2,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(420), 1,
      sym_name,
  [6057] = 2,
    ACTIONS(856), 1,
      aux_sym__int_token1,
    STATE(246), 1,
      aux_sym__int,
  [6064] = 1,
    ACTIONS(858), 2,
      anon_sym_,
      anon_sym_TAB,
  [6069] = 1,
    ACTIONS(860), 2,
      anon_sym_,
      anon_sym_TAB,
  [6074] = 1,
    ACTIONS(828), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6079] = 2,
    ACTIONS(862), 1,
      aux_sym__int_token1,
    STATE(286), 1,
      aux_sym__int,
  [6086] = 2,
    ACTIONS(864), 1,
      aux_sym__int_token1,
    STATE(80), 1,
      aux_sym__int,
  [6093] = 1,
    ACTIONS(866), 2,
      anon_sym_,
      anon_sym_TAB,
  [6098] = 2,
    ACTIONS(868), 1,
      aux_sym__int_token1,
    STATE(74), 1,
      aux_sym__int,
  [6105] = 1,
    ACTIONS(817), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6110] = 2,
    ACTIONS(612), 1,
      sym_identifier,
    STATE(207), 1,
      sym_name,
  [6117] = 2,
    ACTIONS(870), 1,
      anon_sym_AT,
    STATE(379), 1,
      sym_label,
  [6124] = 2,
    ACTIONS(870), 1,
      anon_sym_AT,
    STATE(377), 1,
      sym_label,
  [6131] = 2,
    ACTIONS(870), 1,
      anon_sym_AT,
    STATE(376), 1,
      sym_label,
  [6138] = 1,
    ACTIONS(810), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6143] = 2,
    ACTIONS(870), 1,
      anon_sym_AT,
    STATE(375), 1,
      sym_label,
  [6150] = 2,
    ACTIONS(612), 1,
      sym_identifier,
    STATE(268), 1,
      sym_name,
  [6157] = 2,
    ACTIONS(635), 1,
      sym__newline,
    STATE(23), 1,
      sym__newline_tab,
  [6164] = 2,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    STATE(322), 1,
      sym_variable,
  [6171] = 2,
    ACTIONS(872), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_quil_repeat1,
  [6178] = 2,
    ACTIONS(874), 1,
      anon_sym_OFFSET,
    ACTIONS(876), 1,
      sym__newline,
  [6185] = 2,
    ACTIONS(614), 1,
      sym_identifier,
    STATE(77), 1,
      sym_name,
  [6192] = 1,
    ACTIONS(878), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [6197] = 2,
    ACTIONS(880), 1,
      aux_sym__int_token1,
    STATE(84), 1,
      aux_sym__int,
  [6204] = 1,
    ACTIONS(882), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [6209] = 2,
    ACTIONS(884), 1,
      anon_sym_COLON,
    ACTIONS(886), 1,
      sym__newline,
  [6216] = 1,
    ACTIONS(888), 2,
      anon_sym_,
      anon_sym_TAB,
  [6221] = 2,
    ACTIONS(890), 1,
      sym__string_inner,
    STATE(444), 1,
      sym__string_esc_inner,
  [6228] = 2,
    ACTIONS(614), 1,
      sym_identifier,
    STATE(445), 1,
      sym_name,
  [6235] = 2,
    ACTIONS(892), 1,
      aux_sym__int_token1,
    STATE(306), 1,
      aux_sym__int,
  [6242] = 1,
    ACTIONS(894), 2,
      anon_sym_AS,
      sym_identifier,
  [6247] = 2,
    ACTIONS(896), 1,
      aux_sym__int_token1,
    STATE(71), 1,
      aux_sym__int,
  [6254] = 2,
    ACTIONS(894), 1,
      sym_identifier,
    ACTIONS(898), 1,
      sym__newline,
  [6261] = 2,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    STATE(277), 1,
      sym_variable,
  [6268] = 2,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(434), 1,
      sym_name,
  [6275] = 2,
    ACTIONS(766), 1,
      sym__newline,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
  [6282] = 2,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(122), 1,
      sym_name,
  [6289] = 2,
    ACTIONS(614), 1,
      sym_identifier,
    STATE(360), 1,
      sym_name,
  [6296] = 2,
    ACTIONS(902), 1,
      anon_sym_MATRIX,
    ACTIONS(904), 1,
      anon_sym_PERMUTATION,
  [6303] = 2,
    ACTIONS(378), 1,
      sym__newline,
    ACTIONS(380), 1,
      anon_sym_COLON,
  [6310] = 2,
    ACTIONS(612), 1,
      sym_identifier,
    STATE(300), 1,
      sym_name,
  [6317] = 2,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(207), 1,
      sym_name,
  [6324] = 2,
    ACTIONS(659), 1,
      sym__newline,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
  [6331] = 1,
    ACTIONS(908), 1,
      anon_sym_COLON,
  [6335] = 1,
    ACTIONS(910), 1,
      sym__newline,
  [6339] = 1,
    ACTIONS(912), 1,
      anon_sym_COLON,
  [6343] = 1,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
  [6347] = 1,
    ACTIONS(916), 1,
      sym__newline,
  [6351] = 1,
    ACTIONS(918), 1,
      sym__newline,
  [6355] = 1,
    ACTIONS(920), 1,
      anon_sym_PAULI_DASHSUM,
  [6359] = 1,
    ACTIONS(922), 1,
      anon_sym_COLON,
  [6363] = 1,
    ACTIONS(924), 1,
      anon_sym_AS,
  [6367] = 1,
    ACTIONS(926), 1,
      sym__newline,
  [6371] = 1,
    ACTIONS(928), 1,
      sym__newline,
  [6375] = 1,
    ACTIONS(930), 1,
      sym__newline,
  [6379] = 1,
    ACTIONS(932), 1,
      sym__newline,
  [6383] = 1,
    ACTIONS(934), 1,
      sym__newline,
  [6387] = 1,
    ACTIONS(936), 1,
      sym__newline,
  [6391] = 1,
    ACTIONS(938), 1,
      sym__newline,
  [6395] = 1,
    ACTIONS(940), 1,
      sym__newline,
  [6399] = 1,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
  [6403] = 1,
    ACTIONS(944), 1,
      sym__newline,
  [6407] = 1,
    ACTIONS(378), 1,
      sym_identifier,
  [6411] = 1,
    ACTIONS(946), 1,
      sym__newline,
  [6415] = 1,
    ACTIONS(948), 1,
      sym__newline,
  [6419] = 1,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
  [6423] = 1,
    ACTIONS(952), 1,
      sym_identifier,
  [6427] = 1,
    ACTIONS(954), 1,
      anon_sym_COLON,
  [6431] = 1,
    ACTIONS(956), 1,
      anon_sym_COLON,
  [6435] = 1,
    ACTIONS(958), 1,
      sym__newline,
  [6439] = 1,
    ACTIONS(960), 1,
      sym_identifier,
  [6443] = 1,
    ACTIONS(962), 1,
      sym__newline,
  [6447] = 1,
    ACTIONS(964), 1,
      sym__newline,
  [6451] = 1,
    ACTIONS(966), 1,
      sym__newline,
  [6455] = 1,
    ACTIONS(968), 1,
      sym__newline,
  [6459] = 1,
    ACTIONS(970), 1,
      sym__newline,
  [6463] = 1,
    ACTIONS(972), 1,
      sym__newline,
  [6467] = 1,
    ACTIONS(974), 1,
      sym__newline,
  [6471] = 1,
    ACTIONS(976), 1,
      sym__newline,
  [6475] = 1,
    ACTIONS(978), 1,
      ts_builtin_sym_end,
  [6479] = 1,
    ACTIONS(980), 1,
      sym__newline,
  [6483] = 1,
    ACTIONS(982), 1,
      anon_sym_COLON,
  [6487] = 1,
    ACTIONS(984), 1,
      anon_sym_PAULI_DASHSUM,
  [6491] = 1,
    ACTIONS(986), 1,
      sym__newline,
  [6495] = 1,
    ACTIONS(988), 1,
      sym__newline,
  [6499] = 1,
    ACTIONS(990), 1,
      sym__newline,
  [6503] = 1,
    ACTIONS(992), 1,
      anon_sym_AS,
  [6507] = 1,
    ACTIONS(994), 1,
      anon_sym_COLON,
  [6511] = 1,
    ACTIONS(996), 1,
      sym__newline,
  [6515] = 1,
    ACTIONS(998), 1,
      anon_sym_LPAREN,
  [6519] = 1,
    ACTIONS(1000), 1,
      sym__newline,
  [6523] = 1,
    ACTIONS(1002), 1,
      sym__newline,
  [6527] = 1,
    ACTIONS(382), 1,
      sym_identifier,
  [6531] = 1,
    ACTIONS(1004), 1,
      sym__newline,
  [6535] = 1,
    ACTIONS(1006), 1,
      sym__newline,
  [6539] = 1,
    ACTIONS(1008), 1,
      sym_identifier,
  [6543] = 1,
    ACTIONS(1010), 1,
      sym_identifier,
  [6547] = 1,
    ACTIONS(1012), 1,
      sym__newline,
  [6551] = 1,
    ACTIONS(878), 1,
      sym__newline,
  [6555] = 1,
    ACTIONS(1014), 1,
      sym__newline,
  [6559] = 1,
    ACTIONS(1016), 1,
      sym__newline,
  [6563] = 1,
    ACTIONS(1018), 1,
      sym__newline,
  [6567] = 1,
    ACTIONS(1020), 1,
      anon_sym_DQUOTE,
  [6571] = 1,
    ACTIONS(1022), 1,
      sym__newline,
  [6575] = 1,
    ACTIONS(1024), 1,
      sym__newline,
  [6579] = 1,
    ACTIONS(1026), 1,
      sym__newline,
  [6583] = 1,
    ACTIONS(1028), 1,
      anon_sym_DQUOTE,
  [6587] = 1,
    ACTIONS(1030), 1,
      sym__newline,
  [6591] = 1,
    ACTIONS(1032), 1,
      sym__newline,
  [6595] = 1,
    ACTIONS(822), 1,
      sym__newline,
  [6599] = 1,
    ACTIONS(1034), 1,
      sym__newline,
  [6603] = 1,
    ACTIONS(1036), 1,
      sym_identifier,
  [6607] = 1,
    ACTIONS(1038), 1,
      sym_identifier,
  [6611] = 1,
    ACTIONS(1040), 1,
      sym__newline,
  [6615] = 1,
    ACTIONS(1042), 1,
      sym__newline,
  [6619] = 1,
    ACTIONS(1044), 1,
      anon_sym_DQUOTE,
  [6623] = 1,
    ACTIONS(1046), 1,
      anon_sym_DQUOTE,
  [6627] = 1,
    ACTIONS(1048), 1,
      anon_sym_COLON,
  [6631] = 1,
    ACTIONS(1050), 1,
      sym__newline,
  [6635] = 1,
    ACTIONS(1052), 1,
      sym__newline,
  [6639] = 1,
    ACTIONS(1054), 1,
      sym__newline,
  [6643] = 1,
    ACTIONS(224), 1,
      sym__newline,
  [6647] = 1,
    ACTIONS(1056), 1,
      sym_identifier,
  [6651] = 1,
    ACTIONS(1058), 1,
      sym__newline,
  [6655] = 1,
    ACTIONS(1060), 1,
      sym__newline,
  [6659] = 1,
    ACTIONS(1062), 1,
      aux_sym__string_esc_inner_token1,
  [6663] = 1,
    ACTIONS(1064), 1,
      anon_sym_DQUOTE,
  [6667] = 1,
    ACTIONS(1066), 1,
      sym__newline,
  [6671] = 1,
    ACTIONS(1068), 1,
      anon_sym_COLON,
  [6675] = 1,
    ACTIONS(1070), 1,
      anon_sym_LPAREN,
  [6679] = 1,
    ACTIONS(882), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 68,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 189,
  [SMALL_STATE(18)] = 270,
  [SMALL_STATE(19)] = 344,
  [SMALL_STATE(20)] = 417,
  [SMALL_STATE(21)] = 487,
  [SMALL_STATE(22)] = 557,
  [SMALL_STATE(23)] = 627,
  [SMALL_STATE(24)] = 697,
  [SMALL_STATE(25)] = 767,
  [SMALL_STATE(26)] = 834,
  [SMALL_STATE(27)] = 901,
  [SMALL_STATE(28)] = 968,
  [SMALL_STATE(29)] = 1035,
  [SMALL_STATE(30)] = 1102,
  [SMALL_STATE(31)] = 1169,
  [SMALL_STATE(32)] = 1236,
  [SMALL_STATE(33)] = 1303,
  [SMALL_STATE(34)] = 1370,
  [SMALL_STATE(35)] = 1437,
  [SMALL_STATE(36)] = 1504,
  [SMALL_STATE(37)] = 1571,
  [SMALL_STATE(38)] = 1638,
  [SMALL_STATE(39)] = 1705,
  [SMALL_STATE(40)] = 1772,
  [SMALL_STATE(41)] = 1836,
  [SMALL_STATE(42)] = 1900,
  [SMALL_STATE(43)] = 1961,
  [SMALL_STATE(44)] = 2022,
  [SMALL_STATE(45)] = 2083,
  [SMALL_STATE(46)] = 2144,
  [SMALL_STATE(47)] = 2202,
  [SMALL_STATE(48)] = 2260,
  [SMALL_STATE(49)] = 2291,
  [SMALL_STATE(50)] = 2330,
  [SMALL_STATE(51)] = 2361,
  [SMALL_STATE(52)] = 2386,
  [SMALL_STATE(53)] = 2412,
  [SMALL_STATE(54)] = 2438,
  [SMALL_STATE(55)] = 2463,
  [SMALL_STATE(56)] = 2490,
  [SMALL_STATE(57)] = 2517,
  [SMALL_STATE(58)] = 2539,
  [SMALL_STATE(59)] = 2561,
  [SMALL_STATE(60)] = 2587,
  [SMALL_STATE(61)] = 2608,
  [SMALL_STATE(62)] = 2628,
  [SMALL_STATE(63)] = 2648,
  [SMALL_STATE(64)] = 2670,
  [SMALL_STATE(65)] = 2694,
  [SMALL_STATE(66)] = 2714,
  [SMALL_STATE(67)] = 2740,
  [SMALL_STATE(68)] = 2774,
  [SMALL_STATE(69)] = 2793,
  [SMALL_STATE(70)] = 2814,
  [SMALL_STATE(71)] = 2835,
  [SMALL_STATE(72)] = 2856,
  [SMALL_STATE(73)] = 2871,
  [SMALL_STATE(74)] = 2890,
  [SMALL_STATE(75)] = 2909,
  [SMALL_STATE(76)] = 2925,
  [SMALL_STATE(77)] = 2955,
  [SMALL_STATE(78)] = 2985,
  [SMALL_STATE(79)] = 3015,
  [SMALL_STATE(80)] = 3028,
  [SMALL_STATE(81)] = 3045,
  [SMALL_STATE(82)] = 3072,
  [SMALL_STATE(83)] = 3085,
  [SMALL_STATE(84)] = 3100,
  [SMALL_STATE(85)] = 3119,
  [SMALL_STATE(86)] = 3146,
  [SMALL_STATE(87)] = 3163,
  [SMALL_STATE(88)] = 3188,
  [SMALL_STATE(89)] = 3212,
  [SMALL_STATE(90)] = 3236,
  [SMALL_STATE(91)] = 3260,
  [SMALL_STATE(92)] = 3284,
  [SMALL_STATE(93)] = 3298,
  [SMALL_STATE(94)] = 3322,
  [SMALL_STATE(95)] = 3346,
  [SMALL_STATE(96)] = 3370,
  [SMALL_STATE(97)] = 3394,
  [SMALL_STATE(98)] = 3418,
  [SMALL_STATE(99)] = 3442,
  [SMALL_STATE(100)] = 3466,
  [SMALL_STATE(101)] = 3490,
  [SMALL_STATE(102)] = 3514,
  [SMALL_STATE(103)] = 3538,
  [SMALL_STATE(104)] = 3562,
  [SMALL_STATE(105)] = 3586,
  [SMALL_STATE(106)] = 3610,
  [SMALL_STATE(107)] = 3634,
  [SMALL_STATE(108)] = 3658,
  [SMALL_STATE(109)] = 3682,
  [SMALL_STATE(110)] = 3706,
  [SMALL_STATE(111)] = 3730,
  [SMALL_STATE(112)] = 3754,
  [SMALL_STATE(113)] = 3778,
  [SMALL_STATE(114)] = 3802,
  [SMALL_STATE(115)] = 3826,
  [SMALL_STATE(116)] = 3850,
  [SMALL_STATE(117)] = 3874,
  [SMALL_STATE(118)] = 3898,
  [SMALL_STATE(119)] = 3909,
  [SMALL_STATE(120)] = 3924,
  [SMALL_STATE(121)] = 3937,
  [SMALL_STATE(122)] = 3958,
  [SMALL_STATE(123)] = 3981,
  [SMALL_STATE(124)] = 3994,
  [SMALL_STATE(125)] = 4007,
  [SMALL_STATE(126)] = 4020,
  [SMALL_STATE(127)] = 4043,
  [SMALL_STATE(128)] = 4054,
  [SMALL_STATE(129)] = 4069,
  [SMALL_STATE(130)] = 4081,
  [SMALL_STATE(131)] = 4093,
  [SMALL_STATE(132)] = 4103,
  [SMALL_STATE(133)] = 4115,
  [SMALL_STATE(134)] = 4125,
  [SMALL_STATE(135)] = 4139,
  [SMALL_STATE(136)] = 4149,
  [SMALL_STATE(137)] = 4161,
  [SMALL_STATE(138)] = 4173,
  [SMALL_STATE(139)] = 4183,
  [SMALL_STATE(140)] = 4203,
  [SMALL_STATE(141)] = 4213,
  [SMALL_STATE(142)] = 4225,
  [SMALL_STATE(143)] = 4239,
  [SMALL_STATE(144)] = 4251,
  [SMALL_STATE(145)] = 4263,
  [SMALL_STATE(146)] = 4273,
  [SMALL_STATE(147)] = 4285,
  [SMALL_STATE(148)] = 4305,
  [SMALL_STATE(149)] = 4318,
  [SMALL_STATE(150)] = 4329,
  [SMALL_STATE(151)] = 4344,
  [SMALL_STATE(152)] = 4355,
  [SMALL_STATE(153)] = 4364,
  [SMALL_STATE(154)] = 4377,
  [SMALL_STATE(155)] = 4388,
  [SMALL_STATE(156)] = 4399,
  [SMALL_STATE(157)] = 4410,
  [SMALL_STATE(158)] = 4419,
  [SMALL_STATE(159)] = 4432,
  [SMALL_STATE(160)] = 4447,
  [SMALL_STATE(161)] = 4460,
  [SMALL_STATE(162)] = 4475,
  [SMALL_STATE(163)] = 4492,
  [SMALL_STATE(164)] = 4503,
  [SMALL_STATE(165)] = 4518,
  [SMALL_STATE(166)] = 4529,
  [SMALL_STATE(167)] = 4540,
  [SMALL_STATE(168)] = 4551,
  [SMALL_STATE(169)] = 4560,
  [SMALL_STATE(170)] = 4568,
  [SMALL_STATE(171)] = 4578,
  [SMALL_STATE(172)] = 4586,
  [SMALL_STATE(173)] = 4600,
  [SMALL_STATE(174)] = 4610,
  [SMALL_STATE(175)] = 4618,
  [SMALL_STATE(176)] = 4628,
  [SMALL_STATE(177)] = 4638,
  [SMALL_STATE(178)] = 4654,
  [SMALL_STATE(179)] = 4668,
  [SMALL_STATE(180)] = 4676,
  [SMALL_STATE(181)] = 4687,
  [SMALL_STATE(182)] = 4698,
  [SMALL_STATE(183)] = 4711,
  [SMALL_STATE(184)] = 4724,
  [SMALL_STATE(185)] = 4737,
  [SMALL_STATE(186)] = 4750,
  [SMALL_STATE(187)] = 4761,
  [SMALL_STATE(188)] = 4772,
  [SMALL_STATE(189)] = 4783,
  [SMALL_STATE(190)] = 4796,
  [SMALL_STATE(191)] = 4807,
  [SMALL_STATE(192)] = 4816,
  [SMALL_STATE(193)] = 4827,
  [SMALL_STATE(194)] = 4838,
  [SMALL_STATE(195)] = 4851,
  [SMALL_STATE(196)] = 4862,
  [SMALL_STATE(197)] = 4873,
  [SMALL_STATE(198)] = 4884,
  [SMALL_STATE(199)] = 4895,
  [SMALL_STATE(200)] = 4906,
  [SMALL_STATE(201)] = 4917,
  [SMALL_STATE(202)] = 4930,
  [SMALL_STATE(203)] = 4943,
  [SMALL_STATE(204)] = 4956,
  [SMALL_STATE(205)] = 4967,
  [SMALL_STATE(206)] = 4978,
  [SMALL_STATE(207)] = 4991,
  [SMALL_STATE(208)] = 4998,
  [SMALL_STATE(209)] = 5009,
  [SMALL_STATE(210)] = 5016,
  [SMALL_STATE(211)] = 5027,
  [SMALL_STATE(212)] = 5038,
  [SMALL_STATE(213)] = 5051,
  [SMALL_STATE(214)] = 5062,
  [SMALL_STATE(215)] = 5069,
  [SMALL_STATE(216)] = 5080,
  [SMALL_STATE(217)] = 5091,
  [SMALL_STATE(218)] = 5104,
  [SMALL_STATE(219)] = 5115,
  [SMALL_STATE(220)] = 5128,
  [SMALL_STATE(221)] = 5141,
  [SMALL_STATE(222)] = 5152,
  [SMALL_STATE(223)] = 5165,
  [SMALL_STATE(224)] = 5172,
  [SMALL_STATE(225)] = 5179,
  [SMALL_STATE(226)] = 5188,
  [SMALL_STATE(227)] = 5195,
  [SMALL_STATE(228)] = 5205,
  [SMALL_STATE(229)] = 5215,
  [SMALL_STATE(230)] = 5225,
  [SMALL_STATE(231)] = 5235,
  [SMALL_STATE(232)] = 5245,
  [SMALL_STATE(233)] = 5255,
  [SMALL_STATE(234)] = 5265,
  [SMALL_STATE(235)] = 5273,
  [SMALL_STATE(236)] = 5283,
  [SMALL_STATE(237)] = 5291,
  [SMALL_STATE(238)] = 5301,
  [SMALL_STATE(239)] = 5311,
  [SMALL_STATE(240)] = 5321,
  [SMALL_STATE(241)] = 5331,
  [SMALL_STATE(242)] = 5341,
  [SMALL_STATE(243)] = 5349,
  [SMALL_STATE(244)] = 5359,
  [SMALL_STATE(245)] = 5369,
  [SMALL_STATE(246)] = 5379,
  [SMALL_STATE(247)] = 5389,
  [SMALL_STATE(248)] = 5399,
  [SMALL_STATE(249)] = 5409,
  [SMALL_STATE(250)] = 5419,
  [SMALL_STATE(251)] = 5427,
  [SMALL_STATE(252)] = 5437,
  [SMALL_STATE(253)] = 5447,
  [SMALL_STATE(254)] = 5457,
  [SMALL_STATE(255)] = 5467,
  [SMALL_STATE(256)] = 5477,
  [SMALL_STATE(257)] = 5487,
  [SMALL_STATE(258)] = 5497,
  [SMALL_STATE(259)] = 5507,
  [SMALL_STATE(260)] = 5517,
  [SMALL_STATE(261)] = 5527,
  [SMALL_STATE(262)] = 5537,
  [SMALL_STATE(263)] = 5547,
  [SMALL_STATE(264)] = 5553,
  [SMALL_STATE(265)] = 5563,
  [SMALL_STATE(266)] = 5573,
  [SMALL_STATE(267)] = 5581,
  [SMALL_STATE(268)] = 5587,
  [SMALL_STATE(269)] = 5597,
  [SMALL_STATE(270)] = 5607,
  [SMALL_STATE(271)] = 5617,
  [SMALL_STATE(272)] = 5627,
  [SMALL_STATE(273)] = 5637,
  [SMALL_STATE(274)] = 5645,
  [SMALL_STATE(275)] = 5655,
  [SMALL_STATE(276)] = 5665,
  [SMALL_STATE(277)] = 5675,
  [SMALL_STATE(278)] = 5685,
  [SMALL_STATE(279)] = 5695,
  [SMALL_STATE(280)] = 5705,
  [SMALL_STATE(281)] = 5715,
  [SMALL_STATE(282)] = 5725,
  [SMALL_STATE(283)] = 5735,
  [SMALL_STATE(284)] = 5745,
  [SMALL_STATE(285)] = 5755,
  [SMALL_STATE(286)] = 5765,
  [SMALL_STATE(287)] = 5775,
  [SMALL_STATE(288)] = 5785,
  [SMALL_STATE(289)] = 5795,
  [SMALL_STATE(290)] = 5805,
  [SMALL_STATE(291)] = 5815,
  [SMALL_STATE(292)] = 5825,
  [SMALL_STATE(293)] = 5833,
  [SMALL_STATE(294)] = 5843,
  [SMALL_STATE(295)] = 5853,
  [SMALL_STATE(296)] = 5863,
  [SMALL_STATE(297)] = 5873,
  [SMALL_STATE(298)] = 5883,
  [SMALL_STATE(299)] = 5893,
  [SMALL_STATE(300)] = 5903,
  [SMALL_STATE(301)] = 5913,
  [SMALL_STATE(302)] = 5923,
  [SMALL_STATE(303)] = 5933,
  [SMALL_STATE(304)] = 5943,
  [SMALL_STATE(305)] = 5953,
  [SMALL_STATE(306)] = 5963,
  [SMALL_STATE(307)] = 5973,
  [SMALL_STATE(308)] = 5980,
  [SMALL_STATE(309)] = 5987,
  [SMALL_STATE(310)] = 5994,
  [SMALL_STATE(311)] = 6001,
  [SMALL_STATE(312)] = 6008,
  [SMALL_STATE(313)] = 6015,
  [SMALL_STATE(314)] = 6022,
  [SMALL_STATE(315)] = 6029,
  [SMALL_STATE(316)] = 6036,
  [SMALL_STATE(317)] = 6043,
  [SMALL_STATE(318)] = 6050,
  [SMALL_STATE(319)] = 6057,
  [SMALL_STATE(320)] = 6064,
  [SMALL_STATE(321)] = 6069,
  [SMALL_STATE(322)] = 6074,
  [SMALL_STATE(323)] = 6079,
  [SMALL_STATE(324)] = 6086,
  [SMALL_STATE(325)] = 6093,
  [SMALL_STATE(326)] = 6098,
  [SMALL_STATE(327)] = 6105,
  [SMALL_STATE(328)] = 6110,
  [SMALL_STATE(329)] = 6117,
  [SMALL_STATE(330)] = 6124,
  [SMALL_STATE(331)] = 6131,
  [SMALL_STATE(332)] = 6138,
  [SMALL_STATE(333)] = 6143,
  [SMALL_STATE(334)] = 6150,
  [SMALL_STATE(335)] = 6157,
  [SMALL_STATE(336)] = 6164,
  [SMALL_STATE(337)] = 6171,
  [SMALL_STATE(338)] = 6178,
  [SMALL_STATE(339)] = 6185,
  [SMALL_STATE(340)] = 6192,
  [SMALL_STATE(341)] = 6197,
  [SMALL_STATE(342)] = 6204,
  [SMALL_STATE(343)] = 6209,
  [SMALL_STATE(344)] = 6216,
  [SMALL_STATE(345)] = 6221,
  [SMALL_STATE(346)] = 6228,
  [SMALL_STATE(347)] = 6235,
  [SMALL_STATE(348)] = 6242,
  [SMALL_STATE(349)] = 6247,
  [SMALL_STATE(350)] = 6254,
  [SMALL_STATE(351)] = 6261,
  [SMALL_STATE(352)] = 6268,
  [SMALL_STATE(353)] = 6275,
  [SMALL_STATE(354)] = 6282,
  [SMALL_STATE(355)] = 6289,
  [SMALL_STATE(356)] = 6296,
  [SMALL_STATE(357)] = 6303,
  [SMALL_STATE(358)] = 6310,
  [SMALL_STATE(359)] = 6317,
  [SMALL_STATE(360)] = 6324,
  [SMALL_STATE(361)] = 6331,
  [SMALL_STATE(362)] = 6335,
  [SMALL_STATE(363)] = 6339,
  [SMALL_STATE(364)] = 6343,
  [SMALL_STATE(365)] = 6347,
  [SMALL_STATE(366)] = 6351,
  [SMALL_STATE(367)] = 6355,
  [SMALL_STATE(368)] = 6359,
  [SMALL_STATE(369)] = 6363,
  [SMALL_STATE(370)] = 6367,
  [SMALL_STATE(371)] = 6371,
  [SMALL_STATE(372)] = 6375,
  [SMALL_STATE(373)] = 6379,
  [SMALL_STATE(374)] = 6383,
  [SMALL_STATE(375)] = 6387,
  [SMALL_STATE(376)] = 6391,
  [SMALL_STATE(377)] = 6395,
  [SMALL_STATE(378)] = 6399,
  [SMALL_STATE(379)] = 6403,
  [SMALL_STATE(380)] = 6407,
  [SMALL_STATE(381)] = 6411,
  [SMALL_STATE(382)] = 6415,
  [SMALL_STATE(383)] = 6419,
  [SMALL_STATE(384)] = 6423,
  [SMALL_STATE(385)] = 6427,
  [SMALL_STATE(386)] = 6431,
  [SMALL_STATE(387)] = 6435,
  [SMALL_STATE(388)] = 6439,
  [SMALL_STATE(389)] = 6443,
  [SMALL_STATE(390)] = 6447,
  [SMALL_STATE(391)] = 6451,
  [SMALL_STATE(392)] = 6455,
  [SMALL_STATE(393)] = 6459,
  [SMALL_STATE(394)] = 6463,
  [SMALL_STATE(395)] = 6467,
  [SMALL_STATE(396)] = 6471,
  [SMALL_STATE(397)] = 6475,
  [SMALL_STATE(398)] = 6479,
  [SMALL_STATE(399)] = 6483,
  [SMALL_STATE(400)] = 6487,
  [SMALL_STATE(401)] = 6491,
  [SMALL_STATE(402)] = 6495,
  [SMALL_STATE(403)] = 6499,
  [SMALL_STATE(404)] = 6503,
  [SMALL_STATE(405)] = 6507,
  [SMALL_STATE(406)] = 6511,
  [SMALL_STATE(407)] = 6515,
  [SMALL_STATE(408)] = 6519,
  [SMALL_STATE(409)] = 6523,
  [SMALL_STATE(410)] = 6527,
  [SMALL_STATE(411)] = 6531,
  [SMALL_STATE(412)] = 6535,
  [SMALL_STATE(413)] = 6539,
  [SMALL_STATE(414)] = 6543,
  [SMALL_STATE(415)] = 6547,
  [SMALL_STATE(416)] = 6551,
  [SMALL_STATE(417)] = 6555,
  [SMALL_STATE(418)] = 6559,
  [SMALL_STATE(419)] = 6563,
  [SMALL_STATE(420)] = 6567,
  [SMALL_STATE(421)] = 6571,
  [SMALL_STATE(422)] = 6575,
  [SMALL_STATE(423)] = 6579,
  [SMALL_STATE(424)] = 6583,
  [SMALL_STATE(425)] = 6587,
  [SMALL_STATE(426)] = 6591,
  [SMALL_STATE(427)] = 6595,
  [SMALL_STATE(428)] = 6599,
  [SMALL_STATE(429)] = 6603,
  [SMALL_STATE(430)] = 6607,
  [SMALL_STATE(431)] = 6611,
  [SMALL_STATE(432)] = 6615,
  [SMALL_STATE(433)] = 6619,
  [SMALL_STATE(434)] = 6623,
  [SMALL_STATE(435)] = 6627,
  [SMALL_STATE(436)] = 6631,
  [SMALL_STATE(437)] = 6635,
  [SMALL_STATE(438)] = 6639,
  [SMALL_STATE(439)] = 6643,
  [SMALL_STATE(440)] = 6647,
  [SMALL_STATE(441)] = 6651,
  [SMALL_STATE(442)] = 6655,
  [SMALL_STATE(443)] = 6659,
  [SMALL_STATE(444)] = 6663,
  [SMALL_STATE(445)] = 6667,
  [SMALL_STATE(446)] = 6671,
  [SMALL_STATE(447)] = 6675,
  [SMALL_STATE(448)] = 6679,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quil, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quil, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quil_repeat2, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(337),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(354),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(308),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(108),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(229),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(230),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(147),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(226),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(114),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(112),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(126),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(107),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(106),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(103),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(101),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(96),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(95),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(440),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(88),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(93),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(13),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(438),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(436),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(236),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(329),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(330),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(331),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(333),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(222),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(408),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(334),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(247),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(252),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(253),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(254),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(256),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(258),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(259),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(260),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(261),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(176),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(10),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(11),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pragma_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(9),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__int, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__int, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(8),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_name, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_name, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quil_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quil_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quil_repeat1, 2), SHIFT_REPEAT(14),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__newline_tab, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay_qubits, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_n, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_n, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(430),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(54),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(50),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_designator, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_designator, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit, 1),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(55),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delay_frames_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delay_frames_repeat1, 2), SHIFT_REPEAT(352),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_delay_frames_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delay_frames_repeat1, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_delay_frames_repeat1, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newline_tab, 2),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(63),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(65),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__signed_int, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__signed_int, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 1),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(388),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(170),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(414),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(216),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_n, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_n, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_power, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(134),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_power, 1),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 2),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(150),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_power, 3),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 1),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_power, 3),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(226),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qubit_variables_repeat1, 2),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qubit_variables_repeat1, 2), SHIFT_REPEAT(348),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_frame, 4),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measure, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_matrix_row_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_row_repeat1, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_param, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declare_repeat1, 2), SHIFT_REPEAT(315),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declare_repeat1, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 8, .production_id = 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 9, .production_id = 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 6, .production_id = 1),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_frame_repeat1, 2), SHIFT_REPEAT(321),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qubit_variables_repeat1, 2), SHIFT_REPEAT(350),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qubit_variables_repeat1, 2),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_variables, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform_name, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_variables, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 5, .production_id = 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 4),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform_name, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_pauli_gate_repeat1, 2), SHIFT_REPEAT(320),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_swap_phase, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay_frames, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2), SHIFT_REPEAT(344),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__indented_instrs_repeat1, 2), SHIFT_REPEAT(325),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 1),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform_name, 1),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay_qubits, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_frequency, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_frequency, 3),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_phase, 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_phase, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_scale, 3),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 3, .production_id = 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_pauli_gate, 8),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 4),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(24),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_waveform_repeat1, 2),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_waveform_repeat1, 2), SHIFT_REPEAT(310),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_spec, 4),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_pauli_gate, 7),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(336),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_pauli_gate, 6),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matrix_row_repeat1, 2), SHIFT_REPEAT(39),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 6, .production_id = 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_descriptor, 3),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_descriptor, 3),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 5),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 4),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_frame, 2),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_variable, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_variable, 1),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform_name, 3),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_calibration, 5),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measure, 3),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_circuit, 4),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_unary, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_measure_calibration, 5),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_waveform, 5),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reset, 2),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_unless, 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_when, 2),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_label, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_measure_calibration, 6),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_attr, 1),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 4),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_circuit, 5),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pauli_term, 5),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_binary, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_calibration, 6),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_binary_op, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_waveform, 4),
  [978] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__indented_instrs_repeat1, 2),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 5),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_binary_op, 3),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pulse, 4),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 1),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_pauli_gate_repeat1, 2),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_capture, 5),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 6),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 3),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_comparison, 4),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_number, 2),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pulse, 3),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 4),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_store, 4),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_esc_inner, 2),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 4),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_capture, 4),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exchange, 3),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert, 3),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 1),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_circuit, 6),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 1),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_as_permutation, 7),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 7),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
