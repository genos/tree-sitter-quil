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
#define STATE_COUNT 452
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 198
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_HALT = 1,
  anon_sym_NOP = 2,
  sym_comment = 3,
  anon_sym_DEFGATE = 4,
  anon_sym_AS = 5,
  anon_sym_MATRIX = 6,
  anon_sym_COLON = 7,
  anon_sym_PERMUTATION = 8,
  anon_sym_PAULI_DASHSUM = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DEFCIRCUIT = 12,
  anon_sym_DEFFRAME = 13,
  anon_sym_SAMPLE_DASHRATE = 14,
  anon_sym_INITIAL_DASHFREQUENCY = 15,
  anon_sym_DIRECTION = 16,
  anon_sym_HARDWARE_DASHOBJECT = 17,
  anon_sym_CENTER_DASHFREQUENCY = 18,
  anon_sym_DEFWAVEFORM = 19,
  anon_sym_DEFCAL = 20,
  anon_sym_MEASURE = 21,
  anon_sym_CONTROLLED = 22,
  anon_sym_DAGGER = 23,
  anon_sym_FORKED = 24,
  anon_sym_COMMA = 25,
  anon_sym_PLUS = 26,
  anon_sym_DASH = 27,
  anon_sym_STAR = 28,
  anon_sym_SLASH = 29,
  anon_sym_CARET = 30,
  anon_sym_PERCENT = 31,
  anon_sym_FENCE = 32,
  anon_sym_NONBLOCKING = 33,
  anon_sym_PULSE = 34,
  anon_sym_DELAY = 35,
  anon_sym_DQUOTE = 36,
  anon_sym_SET_DASHFREQUENCY = 37,
  anon_sym_SHIFT_DASHFREQUENCY = 38,
  anon_sym_SHIFT_DASHPHASE = 39,
  anon_sym_SET_DASHPHASE = 40,
  anon_sym_SWAP_DASHPHASE = 41,
  anon_sym_SET_DASHSCALE = 42,
  anon_sym_DECLARE = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  anon_sym_SHARING = 46,
  anon_sym_OFFSET = 47,
  anon_sym_CAPTURE = 48,
  anon_sym_RAW_DASHCAPTURE = 49,
  anon_sym_PRAGMA = 50,
  anon_sym_INCLUDE = 51,
  anon_sym_LABEL = 52,
  anon_sym_JUMP = 53,
  anon_sym_JUMP_DASHWHEN = 54,
  anon_sym_JUMP_DASHUNLESS = 55,
  anon_sym_AT = 56,
  anon_sym_RESET = 57,
  anon_sym_WAIT = 58,
  anon_sym_STORE = 59,
  anon_sym_LOAD = 60,
  anon_sym_CONVERT = 61,
  anon_sym_EXCHANGE = 62,
  anon_sym_MOVE = 63,
  anon_sym_NEG = 64,
  anon_sym_NOT = 65,
  anon_sym_TRUE = 66,
  anon_sym_FALSE = 67,
  anon_sym_AND = 68,
  anon_sym_OR = 69,
  anon_sym_IOR = 70,
  anon_sym_XOR = 71,
  anon_sym_ADD = 72,
  anon_sym_SUB = 73,
  anon_sym_MUL = 74,
  anon_sym_DIV = 75,
  anon_sym_EQ = 76,
  anon_sym_GT = 77,
  anon_sym_GE = 78,
  anon_sym_LT = 79,
  anon_sym_LE = 80,
  anon_sym_SIN = 81,
  anon_sym_COS = 82,
  anon_sym_SQRT = 83,
  anon_sym_EXP = 84,
  anon_sym_CIS = 85,
  anon_sym_i = 86,
  anon_sym_pi = 87,
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
  sym_include = 145,
  sym_def_label = 146,
  sym_jump = 147,
  sym_jump_when = 148,
  sym_jump_unless = 149,
  sym_label = 150,
  sym_reset = 151,
  sym_wait = 152,
  sym_store = 153,
  sym_load = 154,
  sym_convert = 155,
  sym_exchange = 156,
  sym_move = 157,
  sym_classical_unary = 158,
  sym_classical_binary = 159,
  sym_logical_binary_op = 160,
  sym_arithmetic_binary_op = 161,
  sym_classical_comparison = 162,
  sym_qubit_designator = 163,
  sym_qubit = 164,
  sym_qubit_variables = 165,
  sym_qubit_variable = 166,
  sym_named_param = 167,
  sym_waveform = 168,
  sym_waveform_name = 169,
  sym_frame = 170,
  sym_function = 171,
  sym_number = 172,
  sym_signed_number = 173,
  sym_keyword = 174,
  sym__newline_tab = 175,
  sym__float = 176,
  sym__decimal = 177,
  sym__signed_int = 178,
  aux_sym__int = 179,
  sym__string = 180,
  sym__escaped_string = 181,
  sym__string_esc_inner = 182,
  aux_sym_quil_repeat1 = 183,
  aux_sym_quil_repeat2 = 184,
  aux_sym_def_pauli_gate_repeat1 = 185,
  aux_sym_def_circuit_repeat1 = 186,
  aux_sym_def_frame_repeat1 = 187,
  aux_sym_modifiers_repeat1 = 188,
  aux_sym__indented_instrs_repeat1 = 189,
  aux_sym_params_repeat1 = 190,
  aux_sym_matrix_repeat1 = 191,
  aux_sym_variables_repeat1 = 192,
  aux_sym_delay_frames_repeat1 = 193,
  aux_sym_declare_repeat1 = 194,
  aux_sym_pragma_repeat1 = 195,
  aux_sym_qubit_variables_repeat1 = 196,
  aux_sym_waveform_repeat1 = 197,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_HALT] = "HALT",
  [anon_sym_NOP] = "NOP",
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
  [anon_sym_NONBLOCKING] = "NONBLOCKING",
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
  [anon_sym_HALT] = anon_sym_HALT,
  [anon_sym_NOP] = anon_sym_NOP,
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
  [anon_sym_NONBLOCKING] = anon_sym_NONBLOCKING,
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
  [anon_sym_HALT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOP] = {
    .visible = true,
    .named = false,
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
  [anon_sym_NONBLOCKING] = {
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
  [27] = 26,
  [28] = 28,
  [29] = 24,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 37,
  [38] = 38,
  [39] = 25,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 43,
  [46] = 46,
  [47] = 46,
  [48] = 48,
  [49] = 8,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 8,
  [55] = 55,
  [56] = 56,
  [57] = 8,
  [58] = 58,
  [59] = 59,
  [60] = 16,
  [61] = 61,
  [62] = 8,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 67,
  [71] = 51,
  [72] = 72,
  [73] = 73,
  [74] = 73,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 79,
  [80] = 50,
  [81] = 81,
  [82] = 51,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 50,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 88,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 86,
  [103] = 103,
  [104] = 104,
  [105] = 87,
  [106] = 106,
  [107] = 107,
  [108] = 95,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 87,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 121,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 125,
  [130] = 127,
  [131] = 131,
  [132] = 128,
  [133] = 133,
  [134] = 131,
  [135] = 126,
  [136] = 120,
  [137] = 133,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 138,
  [143] = 143,
  [144] = 144,
  [145] = 144,
  [146] = 146,
  [147] = 88,
  [148] = 121,
  [149] = 149,
  [150] = 127,
  [151] = 140,
  [152] = 152,
  [153] = 153,
  [154] = 153,
  [155] = 121,
  [156] = 156,
  [157] = 157,
  [158] = 53,
  [159] = 16,
  [160] = 160,
  [161] = 88,
  [162] = 53,
  [163] = 163,
  [164] = 8,
  [165] = 165,
  [166] = 127,
  [167] = 165,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 169,
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
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 190,
  [193] = 180,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 8,
  [198] = 53,
  [199] = 199,
  [200] = 200,
  [201] = 56,
  [202] = 176,
  [203] = 203,
  [204] = 53,
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
  [229] = 56,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 205,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 236,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 211,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 242,
  [257] = 257,
  [258] = 51,
  [259] = 259,
  [260] = 220,
  [261] = 205,
  [262] = 56,
  [263] = 232,
  [264] = 238,
  [265] = 265,
  [266] = 266,
  [267] = 249,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 269,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 276,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 240,
  [282] = 282,
  [283] = 283,
  [284] = 233,
  [285] = 231,
  [286] = 232,
  [287] = 240,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 240,
  [294] = 294,
  [295] = 232,
  [296] = 296,
  [297] = 279,
  [298] = 298,
  [299] = 255,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 303,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 302,
  [310] = 310,
  [311] = 303,
  [312] = 230,
  [313] = 313,
  [314] = 314,
  [315] = 302,
  [316] = 316,
  [317] = 314,
  [318] = 314,
  [319] = 314,
  [320] = 224,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 51,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 56,
  [329] = 329,
  [330] = 308,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 310,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 61,
  [340] = 224,
  [341] = 341,
  [342] = 243,
  [343] = 343,
  [344] = 322,
  [345] = 336,
  [346] = 337,
  [347] = 88,
  [348] = 303,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 16,
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
  [371] = 61,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 335,
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
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 374,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 412,
  [416] = 416,
  [417] = 414,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 374,
  [427] = 412,
  [428] = 428,
  [429] = 429,
  [430] = 414,
  [431] = 431,
  [432] = 374,
  [433] = 333,
  [434] = 434,
  [435] = 435,
  [436] = 374,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 375,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 375,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 395,
  [451] = 451,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(393);
      if (lookahead == '"') ADVANCE(459);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '%') ADVANCE(449);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(412);
      if (lookahead == '*') ADVANCE(443);
      if (lookahead == '+') ADVANCE(439);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '.') ADVANCE(891);
      if (lookahead == '/') ADVANCE(445);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(405);
      if (lookahead == '@') ADVANCE(498);
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
      if (lookahead == '[') ADVANCE(475);
      if (lookahead == ']') ADVANCE(477);
      if (lookahead == '^') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == 'i') ADVANCE(557);
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
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(878);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '*') ADVANCE(444);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '/') ADVANCE(446);
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
      if (lookahead == '^') ADVANCE(448);
      if (lookahead == 'i') ADVANCE(557);
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
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '*') ADVANCE(444);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '/') ADVANCE(446);
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
      if (lookahead == '^') ADVANCE(448);
      if (lookahead == 'i') ADVANCE(558);
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
      if (lookahead == '%') ADVANCE(449);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '*') ADVANCE(443);
      if (lookahead == '+') ADVANCE(439);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '.') ADVANCE(891);
      if (lookahead == '/') ADVANCE(445);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(405);
      if (lookahead == 'E') ADVANCE(887);
      if (lookahead == 'O') ADVANCE(188);
      if (lookahead == 'S') ADVANCE(208);
      if (lookahead == '[') ADVANCE(475);
      if (lookahead == '^') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == 'i') ADVANCE(557);
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
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '%') ADVANCE(450);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '*') ADVANCE(444);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '/') ADVANCE(446);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(215);
      if (lookahead == 'E') ADVANCE(382);
      if (lookahead == 'S') ADVANCE(216);
      if (lookahead == '[') ADVANCE(476);
      if (lookahead == '^') ADVANCE(448);
      if (lookahead == 'i') ADVANCE(557);
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
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '%') ADVANCE(450);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '*') ADVANCE(444);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '/') ADVANCE(446);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(698);
      if (lookahead == 'E') ADVANCE(857);
      if (lookahead == 'S') ADVANCE(701);
      if (lookahead == '[') ADVANCE(476);
      if (lookahead == '^') ADVANCE(448);
      if (lookahead == 'i') ADVANCE(558);
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
      if (lookahead == '%') ADVANCE(450);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '*') ADVANCE(444);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '/') ADVANCE(446);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(215);
      if (lookahead == 'E') ADVANCE(890);
      if (lookahead == 'S') ADVANCE(216);
      if (lookahead == '[') ADVANCE(476);
      if (lookahead == '^') ADVANCE(448);
      if (lookahead == 'e') ADVANCE(886);
      if (lookahead == 'i') ADVANCE(557);
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
      if (lookahead == '%') ADVANCE(450);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '*') ADVANCE(444);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '/') ADVANCE(446);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(698);
      if (lookahead == 'E') ADVANCE(888);
      if (lookahead == 'S') ADVANCE(701);
      if (lookahead == '[') ADVANCE(476);
      if (lookahead == '^') ADVANCE(448);
      if (lookahead == 'e') ADVANCE(885);
      if (lookahead == 'i') ADVANCE(558);
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
      if (lookahead == '[') ADVANCE(476);
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
      if (lookahead == '[') ADVANCE(476);
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
      if (lookahead == '"') ADVANCE(459);
      if (lookahead == '%') ADVANCE(449);
      if (lookahead == ')') ADVANCE(412);
      if (lookahead == '*') ADVANCE(443);
      if (lookahead == '+') ADVANCE(439);
      if (lookahead == ',') ADVANCE(438);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '.') ADVANCE(891);
      if (lookahead == '/') ADVANCE(445);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(405);
      if (lookahead == 'E') ADVANCE(887);
      if (lookahead == ']') ADVANCE(477);
      if (lookahead == '^') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(884);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '%') ADVANCE(450);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(215);
      if (lookahead == 'E') ADVANCE(382);
      if (lookahead == 'S') ADVANCE(216);
      if (lookahead == '[') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(557);
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
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '%') ADVANCE(450);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(698);
      if (lookahead == 'E') ADVANCE(857);
      if (lookahead == 'S') ADVANCE(701);
      if (lookahead == '[') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(558);
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
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '/') ADVANCE(446);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == '[') ADVANCE(476);
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
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '/') ADVANCE(446);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == '[') ADVANCE(476);
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
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ':') ADVANCE(406);
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
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ':') ADVANCE(406);
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
      if (lookahead == '*') ADVANCE(444);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '/') ADVANCE(446);
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
      if (lookahead == '^') ADVANCE(448);
      if (lookahead == 'i') ADVANCE(557);
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
      if (lookahead == '*') ADVANCE(444);
      if (lookahead == '+') ADVANCE(440);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '/') ADVANCE(446);
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
      if (lookahead == '^') ADVANCE(448);
      if (lookahead == 'i') ADVANCE(558);
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
      if (lookahead == '[') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(557);
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
      if (lookahead == '[') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(558);
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
      if (lookahead == 'E') ADVANCE(545);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(543);
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
      if (lookahead == 'A') ADVANCE(486);
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
      if (lookahead == 'E') ADVANCE(546);
      if (lookahead == 'O') ADVANCE(579);
      if (lookahead == 'T') ADVANCE(544);
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
      if (lookahead == 'B') ADVANCE(531);
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
      if (lookahead == 'P') ADVANCE(553);
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
      if (lookahead == 'S') ADVANCE(401);
      END_STATE();
    case 127:
      if (lookahead == 'D') ADVANCE(529);
      END_STATE();
    case 128:
      if (lookahead == 'D') ADVANCE(521);
      END_STATE();
    case 129:
      if (lookahead == 'D') ADVANCE(505);
      END_STATE();
    case 130:
      if (lookahead == 'D') ADVANCE(436);
      END_STATE();
    case 131:
      if (lookahead == 'D') ADVANCE(432);
      END_STATE();
    case 132:
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(402);
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
      if (lookahead == 'E') ADVANCE(541);
      if (lookahead == 'T') ADVANCE(539);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(511);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(517);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(519);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(451);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(455);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(503);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(482);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(473);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(399);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(488);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(430);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(291);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(415);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(509);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(467);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(471);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(469);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(561);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(484);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(417);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(465);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(542);
      if (lookahead == 'T') ADVANCE(540);
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
      if (lookahead == 'R') ADVANCE(523);
      END_STATE();
    case 190:
      if (lookahead == 'F') ADVANCE(682);
      if (lookahead == 'R') ADVANCE(524);
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
      if (lookahead == 'G') ADVANCE(513);
      END_STATE();
    case 199:
      if (lookahead == 'G') ADVANCE(478);
      END_STATE();
    case 200:
      if (lookahead == 'G') ADVANCE(453);
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
      if (lookahead == 'L') ADVANCE(533);
      END_STATE();
    case 226:
      if (lookahead == 'L') ADVANCE(490);
      END_STATE();
    case 227:
      if (lookahead == 'L') ADVANCE(428);
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
      if (lookahead == 'M') ADVANCE(409);
      END_STATE();
    case 243:
      if (lookahead == 'M') ADVANCE(426);
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
      if (lookahead == 'S') ADVANCE(549);
      END_STATE();
    case 253:
      if (lookahead == 'N') ADVANCE(121);
      END_STATE();
    case 254:
      if (lookahead == 'N') ADVANCE(547);
      END_STATE();
    case 255:
      if (lookahead == 'N') ADVANCE(421);
      END_STATE();
    case 256:
      if (lookahead == 'N') ADVANCE(494);
      END_STATE();
    case 257:
      if (lookahead == 'N') ADVANCE(407);
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
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead == 'T') ADVANCE(515);
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
      if (lookahead == 'P') ADVANCE(492);
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
      if (lookahead == 'Q') ADVANCE(538);
      if (lookahead == 'X') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 290:
      if (lookahead == 'Q') ADVANCE(538);
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
      if (lookahead == 'V') ADVANCE(535);
      END_STATE();
    case 296:
      if (lookahead == 'R') ADVANCE(223);
      END_STATE();
    case 297:
      if (lookahead == 'R') ADVANCE(525);
      END_STATE();
    case 298:
      if (lookahead == 'R') ADVANCE(527);
      END_STATE();
    case 299:
      if (lookahead == 'R') ADVANCE(434);
      END_STATE();
    case 300:
      if (lookahead == 'R') ADVANCE(524);
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
      if (lookahead == 'S') ADVANCE(555);
      END_STATE();
    case 327:
      if (lookahead == 'S') ADVANCE(496);
      END_STATE();
    case 328:
      if (lookahead == 'S') ADVANCE(402);
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
      if (lookahead == 'T') ADVANCE(394);
      END_STATE();
    case 340:
      if (lookahead == 'T') ADVANCE(551);
      END_STATE();
    case 341:
      if (lookahead == 'T') ADVANCE(501);
      END_STATE();
    case 342:
      if (lookahead == 'T') ADVANCE(499);
      END_STATE();
    case 343:
      if (lookahead == 'T') ADVANCE(480);
      END_STATE();
    case 344:
      if (lookahead == 'T') ADVANCE(507);
      END_STATE();
    case 345:
      if (lookahead == 'T') ADVANCE(413);
      END_STATE();
    case 346:
      if (lookahead == 'T') ADVANCE(422);
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
      if (lookahead == 'X') ADVANCE(403);
      END_STATE();
    case 382:
      if (lookahead == 'X') ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 383:
      if (lookahead == 'Y') ADVANCE(457);
      END_STATE();
    case 384:
      if (lookahead == 'Y') ADVANCE(461);
      END_STATE();
    case 385:
      if (lookahead == 'Y') ADVANCE(463);
      END_STATE();
    case 386:
      if (lookahead == 'Y') ADVANCE(424);
      END_STATE();
    case 387:
      if (lookahead == 'Y') ADVANCE(419);
      END_STATE();
    case 388:
      if (lookahead == '\\') ADVANCE(894);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(559);
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
      ACCEPT_TOKEN(anon_sym_HALT);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_HALT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_NOP);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_NOP);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_DEFGATE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_DEFGATE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_MATRIX);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_MATRIX);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_PERMUTATION);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_PERMUTATION);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_PAULI_DASHSUM);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_PAULI_DASHSUM);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_DEFCIRCUIT);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_DEFCIRCUIT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_DEFFRAME);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DEFFRAME);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_SAMPLE_DASHRATE);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_SAMPLE_DASHRATE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_INITIAL_DASHFREQUENCY);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_INITIAL_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DIRECTION);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_HARDWARE_DASHOBJECT);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_HARDWARE_DASHOBJECT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_CENTER_DASHFREQUENCY);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_CENTER_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_DEFWAVEFORM);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_DEFWAVEFORM);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_DEFCAL);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_DEFCAL);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_MEASURE);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_MEASURE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_CONTROLLED);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_CONTROLLED);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_DAGGER);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_DAGGER);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_FORKED);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_FORKED);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_FENCE);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_FENCE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_NONBLOCKING);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_NONBLOCKING);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_PULSE);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_PULSE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_DELAY);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DELAY);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_SET_DASHFREQUENCY);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_SET_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_SHIFT_DASHFREQUENCY);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_SHIFT_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_SHIFT_DASHPHASE);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_SHIFT_DASHPHASE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_SET_DASHPHASE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_SET_DASHPHASE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_SWAP_DASHPHASE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_SWAP_DASHPHASE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_SET_DASHSCALE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_SET_DASHSCALE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_DECLARE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DECLARE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_SHARING);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_SHARING);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_CAPTURE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_CAPTURE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_RAW_DASHCAPTURE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_RAW_DASHCAPTURE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_PRAGMA);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_PRAGMA);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_LABEL);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LABEL);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_JUMP);
      if (lookahead == '-') ADVANCE(366);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_JUMP);
      if (lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_JUMP_DASHWHEN);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_JUMP_DASHWHEN);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_JUMP_DASHUNLESS);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_JUMP_DASHUNLESS);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_RESET);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_RESET);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_WAIT);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_STORE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_STORE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_LOAD);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_LOAD);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_CONVERT);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_CONVERT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_EXCHANGE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_EXCHANGE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_MOVE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_MOVE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_NEG);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_NEG);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_IOR);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_IOR);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_ADD);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_ADD);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_MUL);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_MUL);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DIV);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_DIV);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_GE);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_GE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_LE);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_LE);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_SIN);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_SIN);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_COS);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_COS);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_SQRT);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_SQRT);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_EXP);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_EXP);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_CIS);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_CIS);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_pi);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_pi);
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
      if (lookahead == '\n') ADVANCE(398);
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
      if (lookahead == 'E') ADVANCE(546);
      if (lookahead == 'O') ADVANCE(579);
      if (lookahead == 'T') ADVANCE(544);
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
      if (lookahead == 'A') ADVANCE(487);
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
      if (lookahead == 'B') ADVANCE(532);
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
      if (lookahead == 'P') ADVANCE(554);
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
      if (lookahead == 'S') ADVANCE(402);
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
      if (lookahead == 'D') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(433);
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
      if (lookahead == 'E') ADVANCE(542);
      if (lookahead == 'T') ADVANCE(540);
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
      if (lookahead == 'E') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(431);
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
      if (lookahead == 'E') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(466);
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
      if (lookahead == 'E') ADVANCE(418);
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
      if (lookahead == 'R') ADVANCE(524);
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
      if (lookahead == 'G') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'G') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'G') ADVANCE(479);
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
      if (lookahead == 'L') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'L') ADVANCE(429);
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
      if (lookahead == 'M') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'M') ADVANCE(410);
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
      if (lookahead == 'S') ADVANCE(550);
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
      if (lookahead == 'N') ADVANCE(495);
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
      if (lookahead == 'N') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(408);
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
      if (lookahead == 'P') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(516);
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
      if (lookahead == 'P') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(554);
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
      if (lookahead == 'Q') ADVANCE(538);
      if (lookahead == 'X') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Q') ADVANCE(538);
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
      if (lookahead == 'R') ADVANCE(524);
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
      if (lookahead == 'R') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(435);
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
      if (lookahead == 'S') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(550);
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
      if (lookahead == 'T') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(423);
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
      if (lookahead == 'V') ADVANCE(536);
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
      if (lookahead == 'X') ADVANCE(404);
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
      if (lookahead == 'Y') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Y') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Y') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Y') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'Y') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(560);
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
      if (lookahead == 'Q') ADVANCE(537);
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
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 65},
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
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 52},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 52},
  [148] = {.lex_state = 52},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 52},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 23},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 113},
  [157] = {.lex_state = 23},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 113},
  [161] = {.lex_state = 23},
  [162] = {.lex_state = 17},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 23},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 23},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 23},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 17},
  [191] = {.lex_state = 17},
  [192] = {.lex_state = 24},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 23},
  [198] = {.lex_state = 23},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 8},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 23},
  [206] = {.lex_state = 23},
  [207] = {.lex_state = 23},
  [208] = {.lex_state = 23},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 23},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 23},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 23},
  [222] = {.lex_state = 23},
  [223] = {.lex_state = 23},
  [224] = {.lex_state = 23},
  [225] = {.lex_state = 23},
  [226] = {.lex_state = 23},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 23},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 23},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 23},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 23},
  [248] = {.lex_state = 23},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 23},
  [252] = {.lex_state = 23},
  [253] = {.lex_state = 23},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 23},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 23},
  [258] = {.lex_state = 17},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 17},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 23},
  [271] = {.lex_state = 23},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 23},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 23},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 23},
  [284] = {.lex_state = 10},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 10},
  [289] = {.lex_state = 10},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 8},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 8},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 23},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 23},
  [301] = {.lex_state = 23},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 10},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 244},
  [308] = {.lex_state = 23},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 23},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 23},
  [325] = {.lex_state = 23},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 10},
  [328] = {.lex_state = 23},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 23},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 8},
  [333] = {.lex_state = 23},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 23},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 17},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 10},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 23},
  [343] = {.lex_state = 8},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 24},
  [347] = {.lex_state = 23},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 10},
  [350] = {.lex_state = 895},
  [351] = {.lex_state = 8},
  [352] = {.lex_state = 23},
  [353] = {.lex_state = 8},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 8},
  [356] = {.lex_state = 8},
  [357] = {.lex_state = 23},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 8},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 8},
  [362] = {.lex_state = 8},
  [363] = {.lex_state = 8},
  [364] = {.lex_state = 8},
  [365] = {.lex_state = 23},
  [366] = {.lex_state = 8},
  [367] = {.lex_state = 8},
  [368] = {.lex_state = 23},
  [369] = {.lex_state = 8},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 23},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 23},
  [375] = {.lex_state = 23},
  [376] = {.lex_state = 8},
  [377] = {.lex_state = 8},
  [378] = {.lex_state = 8},
  [379] = {.lex_state = 8},
  [380] = {.lex_state = 8},
  [381] = {.lex_state = 8},
  [382] = {.lex_state = 23},
  [383] = {.lex_state = 8},
  [384] = {.lex_state = 8},
  [385] = {.lex_state = 8},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 8},
  [388] = {.lex_state = 8},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 8},
  [391] = {.lex_state = 8},
  [392] = {.lex_state = 8},
  [393] = {.lex_state = 23},
  [394] = {.lex_state = 8},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 8},
  [398] = {.lex_state = 8},
  [399] = {.lex_state = 23},
  [400] = {.lex_state = 8},
  [401] = {.lex_state = 23},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 23},
  [407] = {.lex_state = 8},
  [408] = {.lex_state = 8},
  [409] = {.lex_state = 8},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 23},
  [412] = {.lex_state = 23},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 23},
  [416] = {.lex_state = 8},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 8},
  [421] = {.lex_state = 23},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 8},
  [424] = {.lex_state = 8},
  [425] = {.lex_state = 8},
  [426] = {.lex_state = 23},
  [427] = {.lex_state = 23},
  [428] = {.lex_state = 8},
  [429] = {.lex_state = 8},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 8},
  [432] = {.lex_state = 23},
  [433] = {.lex_state = 8},
  [434] = {.lex_state = 894},
  [435] = {.lex_state = 8},
  [436] = {.lex_state = 23},
  [437] = {.lex_state = 8},
  [438] = {.lex_state = 23},
  [439] = {.lex_state = 8},
  [440] = {.lex_state = 23},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 8},
  [444] = {.lex_state = 8},
  [445] = {.lex_state = 8},
  [446] = {.lex_state = 23},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 8},
  [449] = {.lex_state = 8},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 23},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_HALT] = ACTIONS(1),
    [anon_sym_NOP] = ACTIONS(1),
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
    [anon_sym_NONBLOCKING] = ACTIONS(1),
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
    [anon_sym_FILTER_DASHNODE] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym__int_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_quil] = STATE(389),
    [sym__all_instr] = STATE(332),
    [sym__instr] = STATE(332),
    [sym_def_gate] = STATE(332),
    [sym_def_gate_matrix] = STATE(387),
    [sym_def_gate_as_permutation] = STATE(387),
    [sym_def_pauli_gate] = STATE(387),
    [sym_def_circuit] = STATE(332),
    [sym_def_frame] = STATE(332),
    [sym_def_waveform] = STATE(332),
    [sym_def_calibration] = STATE(332),
    [sym_def_measure_calibration] = STATE(332),
    [sym_gate] = STATE(332),
    [sym_modifiers] = STATE(382),
    [sym_fence] = STATE(332),
    [sym_pulse] = STATE(332),
    [sym_delay] = STATE(332),
    [sym_delay_qubits] = STATE(381),
    [sym_delay_frames] = STATE(381),
    [sym_set_frequency] = STATE(332),
    [sym_shift_frequency] = STATE(332),
    [sym_shift_phase] = STATE(332),
    [sym_set_phase] = STATE(332),
    [sym_swap_phase] = STATE(332),
    [sym_set_scale] = STATE(332),
    [sym_declare] = STATE(332),
    [sym_capture] = STATE(332),
    [sym_raw_capture] = STATE(332),
    [sym_pragma] = STATE(332),
    [sym_measure] = STATE(332),
    [sym_include] = STATE(332),
    [sym_def_label] = STATE(332),
    [sym_jump] = STATE(332),
    [sym_jump_when] = STATE(332),
    [sym_jump_unless] = STATE(332),
    [sym_reset] = STATE(332),
    [sym_wait] = STATE(332),
    [sym_store] = STATE(332),
    [sym_load] = STATE(332),
    [sym_convert] = STATE(332),
    [sym_exchange] = STATE(332),
    [sym_move] = STATE(332),
    [sym_classical_unary] = STATE(332),
    [sym_classical_binary] = STATE(332),
    [sym_logical_binary_op] = STATE(351),
    [sym_arithmetic_binary_op] = STATE(351),
    [sym_classical_comparison] = STATE(332),
    [aux_sym_quil_repeat2] = STATE(2),
    [aux_sym_modifiers_repeat1] = STATE(156),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_HALT] = ACTIONS(5),
    [anon_sym_NOP] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DEFGATE] = ACTIONS(9),
    [anon_sym_DEFCIRCUIT] = ACTIONS(11),
    [anon_sym_DEFFRAME] = ACTIONS(13),
    [anon_sym_DEFWAVEFORM] = ACTIONS(15),
    [anon_sym_DEFCAL] = ACTIONS(17),
    [anon_sym_MEASURE] = ACTIONS(19),
    [anon_sym_CONTROLLED] = ACTIONS(21),
    [anon_sym_DAGGER] = ACTIONS(21),
    [anon_sym_FORKED] = ACTIONS(21),
    [anon_sym_FENCE] = ACTIONS(23),
    [anon_sym_NONBLOCKING] = ACTIONS(25),
    [anon_sym_PULSE] = ACTIONS(27),
    [anon_sym_DELAY] = ACTIONS(29),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(31),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(33),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(35),
    [anon_sym_SET_DASHPHASE] = ACTIONS(37),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(39),
    [anon_sym_SET_DASHSCALE] = ACTIONS(41),
    [anon_sym_DECLARE] = ACTIONS(43),
    [anon_sym_CAPTURE] = ACTIONS(45),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(47),
    [anon_sym_PRAGMA] = ACTIONS(49),
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
    [sym_identifier] = ACTIONS(83),
  },
  [2] = {
    [sym__all_instr] = STATE(332),
    [sym__instr] = STATE(332),
    [sym_def_gate] = STATE(332),
    [sym_def_gate_matrix] = STATE(387),
    [sym_def_gate_as_permutation] = STATE(387),
    [sym_def_pauli_gate] = STATE(387),
    [sym_def_circuit] = STATE(332),
    [sym_def_frame] = STATE(332),
    [sym_def_waveform] = STATE(332),
    [sym_def_calibration] = STATE(332),
    [sym_def_measure_calibration] = STATE(332),
    [sym_gate] = STATE(332),
    [sym_modifiers] = STATE(382),
    [sym_fence] = STATE(332),
    [sym_pulse] = STATE(332),
    [sym_delay] = STATE(332),
    [sym_delay_qubits] = STATE(381),
    [sym_delay_frames] = STATE(381),
    [sym_set_frequency] = STATE(332),
    [sym_shift_frequency] = STATE(332),
    [sym_shift_phase] = STATE(332),
    [sym_set_phase] = STATE(332),
    [sym_swap_phase] = STATE(332),
    [sym_set_scale] = STATE(332),
    [sym_declare] = STATE(332),
    [sym_capture] = STATE(332),
    [sym_raw_capture] = STATE(332),
    [sym_pragma] = STATE(332),
    [sym_measure] = STATE(332),
    [sym_include] = STATE(332),
    [sym_def_label] = STATE(332),
    [sym_jump] = STATE(332),
    [sym_jump_when] = STATE(332),
    [sym_jump_unless] = STATE(332),
    [sym_reset] = STATE(332),
    [sym_wait] = STATE(332),
    [sym_store] = STATE(332),
    [sym_load] = STATE(332),
    [sym_convert] = STATE(332),
    [sym_exchange] = STATE(332),
    [sym_move] = STATE(332),
    [sym_classical_unary] = STATE(332),
    [sym_classical_binary] = STATE(332),
    [sym_logical_binary_op] = STATE(351),
    [sym_arithmetic_binary_op] = STATE(351),
    [sym_classical_comparison] = STATE(332),
    [aux_sym_quil_repeat2] = STATE(3),
    [aux_sym_modifiers_repeat1] = STATE(156),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_HALT] = ACTIONS(5),
    [anon_sym_NOP] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_DEFGATE] = ACTIONS(9),
    [anon_sym_DEFCIRCUIT] = ACTIONS(11),
    [anon_sym_DEFFRAME] = ACTIONS(13),
    [anon_sym_DEFWAVEFORM] = ACTIONS(15),
    [anon_sym_DEFCAL] = ACTIONS(17),
    [anon_sym_MEASURE] = ACTIONS(19),
    [anon_sym_CONTROLLED] = ACTIONS(21),
    [anon_sym_DAGGER] = ACTIONS(21),
    [anon_sym_FORKED] = ACTIONS(21),
    [anon_sym_FENCE] = ACTIONS(23),
    [anon_sym_NONBLOCKING] = ACTIONS(25),
    [anon_sym_PULSE] = ACTIONS(27),
    [anon_sym_DELAY] = ACTIONS(29),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(31),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(33),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(35),
    [anon_sym_SET_DASHPHASE] = ACTIONS(37),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(39),
    [anon_sym_SET_DASHSCALE] = ACTIONS(41),
    [anon_sym_DECLARE] = ACTIONS(43),
    [anon_sym_CAPTURE] = ACTIONS(45),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(47),
    [anon_sym_PRAGMA] = ACTIONS(49),
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
    [sym_identifier] = ACTIONS(83),
  },
  [3] = {
    [sym__all_instr] = STATE(332),
    [sym__instr] = STATE(332),
    [sym_def_gate] = STATE(332),
    [sym_def_gate_matrix] = STATE(387),
    [sym_def_gate_as_permutation] = STATE(387),
    [sym_def_pauli_gate] = STATE(387),
    [sym_def_circuit] = STATE(332),
    [sym_def_frame] = STATE(332),
    [sym_def_waveform] = STATE(332),
    [sym_def_calibration] = STATE(332),
    [sym_def_measure_calibration] = STATE(332),
    [sym_gate] = STATE(332),
    [sym_modifiers] = STATE(382),
    [sym_fence] = STATE(332),
    [sym_pulse] = STATE(332),
    [sym_delay] = STATE(332),
    [sym_delay_qubits] = STATE(381),
    [sym_delay_frames] = STATE(381),
    [sym_set_frequency] = STATE(332),
    [sym_shift_frequency] = STATE(332),
    [sym_shift_phase] = STATE(332),
    [sym_set_phase] = STATE(332),
    [sym_swap_phase] = STATE(332),
    [sym_set_scale] = STATE(332),
    [sym_declare] = STATE(332),
    [sym_capture] = STATE(332),
    [sym_raw_capture] = STATE(332),
    [sym_pragma] = STATE(332),
    [sym_measure] = STATE(332),
    [sym_include] = STATE(332),
    [sym_def_label] = STATE(332),
    [sym_jump] = STATE(332),
    [sym_jump_when] = STATE(332),
    [sym_jump_unless] = STATE(332),
    [sym_reset] = STATE(332),
    [sym_wait] = STATE(332),
    [sym_store] = STATE(332),
    [sym_load] = STATE(332),
    [sym_convert] = STATE(332),
    [sym_exchange] = STATE(332),
    [sym_move] = STATE(332),
    [sym_classical_unary] = STATE(332),
    [sym_classical_binary] = STATE(332),
    [sym_logical_binary_op] = STATE(351),
    [sym_arithmetic_binary_op] = STATE(351),
    [sym_classical_comparison] = STATE(332),
    [aux_sym_quil_repeat2] = STATE(3),
    [aux_sym_modifiers_repeat1] = STATE(156),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_HALT] = ACTIONS(89),
    [anon_sym_NOP] = ACTIONS(89),
    [sym_comment] = ACTIONS(92),
    [anon_sym_DEFGATE] = ACTIONS(95),
    [anon_sym_DEFCIRCUIT] = ACTIONS(98),
    [anon_sym_DEFFRAME] = ACTIONS(101),
    [anon_sym_DEFWAVEFORM] = ACTIONS(104),
    [anon_sym_DEFCAL] = ACTIONS(107),
    [anon_sym_MEASURE] = ACTIONS(110),
    [anon_sym_CONTROLLED] = ACTIONS(113),
    [anon_sym_DAGGER] = ACTIONS(113),
    [anon_sym_FORKED] = ACTIONS(113),
    [anon_sym_FENCE] = ACTIONS(116),
    [anon_sym_NONBLOCKING] = ACTIONS(119),
    [anon_sym_PULSE] = ACTIONS(122),
    [anon_sym_DELAY] = ACTIONS(125),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(128),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(131),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(134),
    [anon_sym_SET_DASHPHASE] = ACTIONS(137),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(140),
    [anon_sym_SET_DASHSCALE] = ACTIONS(143),
    [anon_sym_DECLARE] = ACTIONS(146),
    [anon_sym_CAPTURE] = ACTIONS(149),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(152),
    [anon_sym_PRAGMA] = ACTIONS(155),
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
    [sym_identifier] = ACTIONS(206),
  },
  [4] = {
    [sym_pragma_name] = STATE(6),
    [sym_keyword] = STATE(12),
    [aux_sym__int] = STATE(9),
    [sym__string] = STATE(439),
    [sym__escaped_string] = STATE(439),
    [aux_sym_pragma_repeat1] = STATE(6),
    [anon_sym_HALT] = ACTIONS(209),
    [anon_sym_NOP] = ACTIONS(209),
    [anon_sym_DEFGATE] = ACTIONS(209),
    [anon_sym_AS] = ACTIONS(209),
    [anon_sym_MATRIX] = ACTIONS(209),
    [anon_sym_PERMUTATION] = ACTIONS(209),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(209),
    [anon_sym_DEFCIRCUIT] = ACTIONS(209),
    [anon_sym_DEFFRAME] = ACTIONS(209),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(209),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(209),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(209),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(209),
    [anon_sym_DEFWAVEFORM] = ACTIONS(209),
    [anon_sym_DEFCAL] = ACTIONS(209),
    [anon_sym_MEASURE] = ACTIONS(209),
    [anon_sym_CONTROLLED] = ACTIONS(209),
    [anon_sym_DAGGER] = ACTIONS(209),
    [anon_sym_FORKED] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(209),
    [anon_sym_FENCE] = ACTIONS(209),
    [anon_sym_NONBLOCKING] = ACTIONS(209),
    [anon_sym_PULSE] = ACTIONS(209),
    [anon_sym_DELAY] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(209),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(209),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(209),
    [anon_sym_SET_DASHPHASE] = ACTIONS(209),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(209),
    [anon_sym_SET_DASHSCALE] = ACTIONS(209),
    [anon_sym_DECLARE] = ACTIONS(209),
    [anon_sym_SHARING] = ACTIONS(209),
    [anon_sym_OFFSET] = ACTIONS(209),
    [anon_sym_CAPTURE] = ACTIONS(209),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(209),
    [anon_sym_PRAGMA] = ACTIONS(209),
    [anon_sym_INCLUDE] = ACTIONS(209),
    [anon_sym_LABEL] = ACTIONS(209),
    [anon_sym_JUMP] = ACTIONS(209),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(209),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(209),
    [anon_sym_RESET] = ACTIONS(209),
    [anon_sym_WAIT] = ACTIONS(209),
    [anon_sym_STORE] = ACTIONS(209),
    [anon_sym_LOAD] = ACTIONS(209),
    [anon_sym_CONVERT] = ACTIONS(209),
    [anon_sym_EXCHANGE] = ACTIONS(209),
    [anon_sym_MOVE] = ACTIONS(209),
    [anon_sym_NEG] = ACTIONS(209),
    [anon_sym_NOT] = ACTIONS(209),
    [anon_sym_TRUE] = ACTIONS(209),
    [anon_sym_FALSE] = ACTIONS(209),
    [anon_sym_AND] = ACTIONS(209),
    [anon_sym_OR] = ACTIONS(209),
    [anon_sym_IOR] = ACTIONS(209),
    [anon_sym_XOR] = ACTIONS(209),
    [anon_sym_ADD] = ACTIONS(209),
    [anon_sym_SUB] = ACTIONS(209),
    [anon_sym_MUL] = ACTIONS(209),
    [anon_sym_DIV] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_GE] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_LE] = ACTIONS(209),
    [anon_sym_SIN] = ACTIONS(209),
    [anon_sym_COS] = ACTIONS(209),
    [anon_sym_SQRT] = ACTIONS(209),
    [anon_sym_EXP] = ACTIONS(209),
    [anon_sym_CIS] = ACTIONS(209),
    [anon_sym_i] = ACTIONS(209),
    [anon_sym_pi] = ACTIONS(209),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(209),
    [sym_identifier] = ACTIONS(213),
    [sym__newline] = ACTIONS(215),
    [aux_sym__int_token1] = ACTIONS(217),
  },
  [5] = {
    [sym__instr] = STATE(356),
    [sym_gate] = STATE(356),
    [sym_modifiers] = STATE(382),
    [sym_fence] = STATE(356),
    [sym_pulse] = STATE(356),
    [sym_delay] = STATE(356),
    [sym_delay_qubits] = STATE(381),
    [sym_delay_frames] = STATE(381),
    [sym_set_frequency] = STATE(356),
    [sym_shift_frequency] = STATE(356),
    [sym_shift_phase] = STATE(356),
    [sym_set_phase] = STATE(356),
    [sym_swap_phase] = STATE(356),
    [sym_set_scale] = STATE(356),
    [sym_declare] = STATE(356),
    [sym_capture] = STATE(356),
    [sym_raw_capture] = STATE(356),
    [sym_pragma] = STATE(356),
    [sym_measure] = STATE(356),
    [sym_include] = STATE(356),
    [sym_def_label] = STATE(356),
    [sym_jump] = STATE(356),
    [sym_jump_when] = STATE(356),
    [sym_jump_unless] = STATE(356),
    [sym_reset] = STATE(356),
    [sym_wait] = STATE(356),
    [sym_store] = STATE(356),
    [sym_load] = STATE(356),
    [sym_convert] = STATE(356),
    [sym_exchange] = STATE(356),
    [sym_move] = STATE(356),
    [sym_classical_unary] = STATE(356),
    [sym_classical_binary] = STATE(356),
    [sym_logical_binary_op] = STATE(351),
    [sym_arithmetic_binary_op] = STATE(351),
    [sym_classical_comparison] = STATE(356),
    [aux_sym_modifiers_repeat1] = STATE(156),
    [anon_sym_HALT] = ACTIONS(219),
    [anon_sym_NOP] = ACTIONS(219),
    [anon_sym_MEASURE] = ACTIONS(19),
    [anon_sym_CONTROLLED] = ACTIONS(21),
    [anon_sym_DAGGER] = ACTIONS(21),
    [anon_sym_FORKED] = ACTIONS(21),
    [anon_sym_FENCE] = ACTIONS(23),
    [anon_sym_NONBLOCKING] = ACTIONS(25),
    [anon_sym_PULSE] = ACTIONS(27),
    [anon_sym_DELAY] = ACTIONS(29),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(31),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(33),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(35),
    [anon_sym_SET_DASHPHASE] = ACTIONS(37),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(39),
    [anon_sym_SET_DASHSCALE] = ACTIONS(41),
    [anon_sym_DECLARE] = ACTIONS(43),
    [anon_sym_CAPTURE] = ACTIONS(45),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(47),
    [anon_sym_PRAGMA] = ACTIONS(49),
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
    [sym_identifier] = ACTIONS(83),
  },
  [6] = {
    [sym_pragma_name] = STATE(7),
    [sym_keyword] = STATE(12),
    [aux_sym__int] = STATE(9),
    [sym__string] = STATE(390),
    [sym__escaped_string] = STATE(390),
    [aux_sym_pragma_repeat1] = STATE(7),
    [anon_sym_HALT] = ACTIONS(209),
    [anon_sym_NOP] = ACTIONS(209),
    [anon_sym_DEFGATE] = ACTIONS(209),
    [anon_sym_AS] = ACTIONS(209),
    [anon_sym_MATRIX] = ACTIONS(209),
    [anon_sym_PERMUTATION] = ACTIONS(209),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(209),
    [anon_sym_DEFCIRCUIT] = ACTIONS(209),
    [anon_sym_DEFFRAME] = ACTIONS(209),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(209),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(209),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(209),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(209),
    [anon_sym_DEFWAVEFORM] = ACTIONS(209),
    [anon_sym_DEFCAL] = ACTIONS(209),
    [anon_sym_MEASURE] = ACTIONS(209),
    [anon_sym_CONTROLLED] = ACTIONS(209),
    [anon_sym_DAGGER] = ACTIONS(209),
    [anon_sym_FORKED] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(209),
    [anon_sym_FENCE] = ACTIONS(209),
    [anon_sym_NONBLOCKING] = ACTIONS(209),
    [anon_sym_PULSE] = ACTIONS(209),
    [anon_sym_DELAY] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(209),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(209),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(209),
    [anon_sym_SET_DASHPHASE] = ACTIONS(209),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(209),
    [anon_sym_SET_DASHSCALE] = ACTIONS(209),
    [anon_sym_DECLARE] = ACTIONS(209),
    [anon_sym_SHARING] = ACTIONS(209),
    [anon_sym_OFFSET] = ACTIONS(209),
    [anon_sym_CAPTURE] = ACTIONS(209),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(209),
    [anon_sym_PRAGMA] = ACTIONS(209),
    [anon_sym_INCLUDE] = ACTIONS(209),
    [anon_sym_LABEL] = ACTIONS(209),
    [anon_sym_JUMP] = ACTIONS(209),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(209),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(209),
    [anon_sym_RESET] = ACTIONS(209),
    [anon_sym_WAIT] = ACTIONS(209),
    [anon_sym_STORE] = ACTIONS(209),
    [anon_sym_LOAD] = ACTIONS(209),
    [anon_sym_CONVERT] = ACTIONS(209),
    [anon_sym_EXCHANGE] = ACTIONS(209),
    [anon_sym_MOVE] = ACTIONS(209),
    [anon_sym_NEG] = ACTIONS(209),
    [anon_sym_NOT] = ACTIONS(209),
    [anon_sym_TRUE] = ACTIONS(209),
    [anon_sym_FALSE] = ACTIONS(209),
    [anon_sym_AND] = ACTIONS(209),
    [anon_sym_OR] = ACTIONS(209),
    [anon_sym_IOR] = ACTIONS(209),
    [anon_sym_XOR] = ACTIONS(209),
    [anon_sym_ADD] = ACTIONS(209),
    [anon_sym_SUB] = ACTIONS(209),
    [anon_sym_MUL] = ACTIONS(209),
    [anon_sym_DIV] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_GE] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_LE] = ACTIONS(209),
    [anon_sym_SIN] = ACTIONS(209),
    [anon_sym_COS] = ACTIONS(209),
    [anon_sym_SQRT] = ACTIONS(209),
    [anon_sym_EXP] = ACTIONS(209),
    [anon_sym_CIS] = ACTIONS(209),
    [anon_sym_i] = ACTIONS(209),
    [anon_sym_pi] = ACTIONS(209),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(209),
    [sym_identifier] = ACTIONS(213),
    [sym__newline] = ACTIONS(221),
    [aux_sym__int_token1] = ACTIONS(217),
  },
  [7] = {
    [sym_pragma_name] = STATE(7),
    [sym_keyword] = STATE(12),
    [aux_sym__int] = STATE(9),
    [aux_sym_pragma_repeat1] = STATE(7),
    [anon_sym_HALT] = ACTIONS(223),
    [anon_sym_NOP] = ACTIONS(223),
    [anon_sym_DEFGATE] = ACTIONS(223),
    [anon_sym_AS] = ACTIONS(223),
    [anon_sym_MATRIX] = ACTIONS(223),
    [anon_sym_PERMUTATION] = ACTIONS(223),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(223),
    [anon_sym_DEFCIRCUIT] = ACTIONS(223),
    [anon_sym_DEFFRAME] = ACTIONS(223),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(223),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(223),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(223),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(223),
    [anon_sym_DEFWAVEFORM] = ACTIONS(223),
    [anon_sym_DEFCAL] = ACTIONS(223),
    [anon_sym_MEASURE] = ACTIONS(223),
    [anon_sym_CONTROLLED] = ACTIONS(223),
    [anon_sym_DAGGER] = ACTIONS(223),
    [anon_sym_FORKED] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(223),
    [anon_sym_FENCE] = ACTIONS(223),
    [anon_sym_NONBLOCKING] = ACTIONS(223),
    [anon_sym_PULSE] = ACTIONS(223),
    [anon_sym_DELAY] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(223),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(223),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(223),
    [anon_sym_SET_DASHPHASE] = ACTIONS(223),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(223),
    [anon_sym_SET_DASHSCALE] = ACTIONS(223),
    [anon_sym_DECLARE] = ACTIONS(223),
    [anon_sym_SHARING] = ACTIONS(223),
    [anon_sym_OFFSET] = ACTIONS(223),
    [anon_sym_CAPTURE] = ACTIONS(223),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(223),
    [anon_sym_PRAGMA] = ACTIONS(223),
    [anon_sym_INCLUDE] = ACTIONS(223),
    [anon_sym_LABEL] = ACTIONS(223),
    [anon_sym_JUMP] = ACTIONS(223),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(223),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(223),
    [anon_sym_RESET] = ACTIONS(223),
    [anon_sym_WAIT] = ACTIONS(223),
    [anon_sym_STORE] = ACTIONS(223),
    [anon_sym_LOAD] = ACTIONS(223),
    [anon_sym_CONVERT] = ACTIONS(223),
    [anon_sym_EXCHANGE] = ACTIONS(223),
    [anon_sym_MOVE] = ACTIONS(223),
    [anon_sym_NEG] = ACTIONS(223),
    [anon_sym_NOT] = ACTIONS(223),
    [anon_sym_TRUE] = ACTIONS(223),
    [anon_sym_FALSE] = ACTIONS(223),
    [anon_sym_AND] = ACTIONS(223),
    [anon_sym_OR] = ACTIONS(223),
    [anon_sym_IOR] = ACTIONS(223),
    [anon_sym_XOR] = ACTIONS(223),
    [anon_sym_ADD] = ACTIONS(223),
    [anon_sym_SUB] = ACTIONS(223),
    [anon_sym_MUL] = ACTIONS(223),
    [anon_sym_DIV] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_GE] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LE] = ACTIONS(223),
    [anon_sym_SIN] = ACTIONS(223),
    [anon_sym_COS] = ACTIONS(223),
    [anon_sym_SQRT] = ACTIONS(223),
    [anon_sym_EXP] = ACTIONS(223),
    [anon_sym_CIS] = ACTIONS(223),
    [anon_sym_i] = ACTIONS(223),
    [anon_sym_pi] = ACTIONS(223),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(223),
    [sym_identifier] = ACTIONS(228),
    [sym__newline] = ACTIONS(231),
    [aux_sym__int_token1] = ACTIONS(233),
  },
  [8] = {
    [aux_sym__int] = STATE(8),
    [anon_sym_HALT] = ACTIONS(236),
    [anon_sym_NOP] = ACTIONS(236),
    [anon_sym_DEFGATE] = ACTIONS(236),
    [anon_sym_AS] = ACTIONS(236),
    [anon_sym_MATRIX] = ACTIONS(236),
    [anon_sym_PERMUTATION] = ACTIONS(236),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(236),
    [anon_sym_DEFCIRCUIT] = ACTIONS(236),
    [anon_sym_DEFFRAME] = ACTIONS(236),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(236),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(236),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(236),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(236),
    [anon_sym_DEFWAVEFORM] = ACTIONS(236),
    [anon_sym_DEFCAL] = ACTIONS(236),
    [anon_sym_MEASURE] = ACTIONS(236),
    [anon_sym_CONTROLLED] = ACTIONS(236),
    [anon_sym_DAGGER] = ACTIONS(236),
    [anon_sym_FORKED] = ACTIONS(236),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_SLASH] = ACTIONS(236),
    [anon_sym_CARET] = ACTIONS(236),
    [anon_sym_FENCE] = ACTIONS(236),
    [anon_sym_NONBLOCKING] = ACTIONS(236),
    [anon_sym_PULSE] = ACTIONS(236),
    [anon_sym_DELAY] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(236),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(236),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(236),
    [anon_sym_SET_DASHPHASE] = ACTIONS(236),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(236),
    [anon_sym_SET_DASHSCALE] = ACTIONS(236),
    [anon_sym_DECLARE] = ACTIONS(236),
    [anon_sym_SHARING] = ACTIONS(236),
    [anon_sym_OFFSET] = ACTIONS(236),
    [anon_sym_CAPTURE] = ACTIONS(236),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(236),
    [anon_sym_PRAGMA] = ACTIONS(236),
    [anon_sym_INCLUDE] = ACTIONS(236),
    [anon_sym_LABEL] = ACTIONS(236),
    [anon_sym_JUMP] = ACTIONS(236),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(236),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(236),
    [anon_sym_RESET] = ACTIONS(236),
    [anon_sym_WAIT] = ACTIONS(236),
    [anon_sym_STORE] = ACTIONS(236),
    [anon_sym_LOAD] = ACTIONS(236),
    [anon_sym_CONVERT] = ACTIONS(236),
    [anon_sym_EXCHANGE] = ACTIONS(236),
    [anon_sym_MOVE] = ACTIONS(236),
    [anon_sym_NEG] = ACTIONS(236),
    [anon_sym_NOT] = ACTIONS(236),
    [anon_sym_TRUE] = ACTIONS(236),
    [anon_sym_FALSE] = ACTIONS(236),
    [anon_sym_AND] = ACTIONS(236),
    [anon_sym_OR] = ACTIONS(236),
    [anon_sym_IOR] = ACTIONS(236),
    [anon_sym_XOR] = ACTIONS(236),
    [anon_sym_ADD] = ACTIONS(236),
    [anon_sym_SUB] = ACTIONS(236),
    [anon_sym_MUL] = ACTIONS(236),
    [anon_sym_DIV] = ACTIONS(236),
    [anon_sym_EQ] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(236),
    [anon_sym_GE] = ACTIONS(236),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_LE] = ACTIONS(236),
    [anon_sym_SIN] = ACTIONS(236),
    [anon_sym_COS] = ACTIONS(236),
    [anon_sym_SQRT] = ACTIONS(236),
    [anon_sym_EXP] = ACTIONS(236),
    [anon_sym_CIS] = ACTIONS(236),
    [anon_sym_i] = ACTIONS(236),
    [anon_sym_pi] = ACTIONS(236),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(236),
    [sym_identifier] = ACTIONS(236),
    [sym__newline] = ACTIONS(238),
    [aux_sym__int_token1] = ACTIONS(240),
  },
  [9] = {
    [aux_sym__int] = STATE(8),
    [anon_sym_HALT] = ACTIONS(243),
    [anon_sym_NOP] = ACTIONS(243),
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
    [anon_sym_NONBLOCKING] = ACTIONS(243),
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
    [anon_sym_FILTER_DASHNODE] = ACTIONS(243),
    [sym_identifier] = ACTIONS(243),
    [sym__newline] = ACTIONS(245),
    [aux_sym__int_token1] = ACTIONS(243),
  },
  [10] = {
    [anon_sym_HALT] = ACTIONS(243),
    [anon_sym_NOP] = ACTIONS(243),
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
    [anon_sym_NONBLOCKING] = ACTIONS(243),
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
    [anon_sym_FILTER_DASHNODE] = ACTIONS(243),
    [sym_identifier] = ACTIONS(243),
    [sym__newline] = ACTIONS(245),
    [aux_sym__int_token1] = ACTIONS(243),
  },
  [11] = {
    [anon_sym_HALT] = ACTIONS(247),
    [anon_sym_NOP] = ACTIONS(247),
    [anon_sym_DEFGATE] = ACTIONS(247),
    [anon_sym_AS] = ACTIONS(247),
    [anon_sym_MATRIX] = ACTIONS(247),
    [anon_sym_PERMUTATION] = ACTIONS(247),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(247),
    [anon_sym_DEFCIRCUIT] = ACTIONS(247),
    [anon_sym_DEFFRAME] = ACTIONS(247),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(247),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(247),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(247),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(247),
    [anon_sym_DEFWAVEFORM] = ACTIONS(247),
    [anon_sym_DEFCAL] = ACTIONS(247),
    [anon_sym_MEASURE] = ACTIONS(247),
    [anon_sym_CONTROLLED] = ACTIONS(247),
    [anon_sym_DAGGER] = ACTIONS(247),
    [anon_sym_FORKED] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_FENCE] = ACTIONS(247),
    [anon_sym_NONBLOCKING] = ACTIONS(247),
    [anon_sym_PULSE] = ACTIONS(247),
    [anon_sym_DELAY] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(247),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(247),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(247),
    [anon_sym_SET_DASHPHASE] = ACTIONS(247),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(247),
    [anon_sym_SET_DASHSCALE] = ACTIONS(247),
    [anon_sym_DECLARE] = ACTIONS(247),
    [anon_sym_SHARING] = ACTIONS(247),
    [anon_sym_OFFSET] = ACTIONS(247),
    [anon_sym_CAPTURE] = ACTIONS(247),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(247),
    [anon_sym_PRAGMA] = ACTIONS(247),
    [anon_sym_INCLUDE] = ACTIONS(247),
    [anon_sym_LABEL] = ACTIONS(247),
    [anon_sym_JUMP] = ACTIONS(247),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(247),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(247),
    [anon_sym_RESET] = ACTIONS(247),
    [anon_sym_WAIT] = ACTIONS(247),
    [anon_sym_STORE] = ACTIONS(247),
    [anon_sym_LOAD] = ACTIONS(247),
    [anon_sym_CONVERT] = ACTIONS(247),
    [anon_sym_EXCHANGE] = ACTIONS(247),
    [anon_sym_MOVE] = ACTIONS(247),
    [anon_sym_NEG] = ACTIONS(247),
    [anon_sym_NOT] = ACTIONS(247),
    [anon_sym_TRUE] = ACTIONS(247),
    [anon_sym_FALSE] = ACTIONS(247),
    [anon_sym_AND] = ACTIONS(247),
    [anon_sym_OR] = ACTIONS(247),
    [anon_sym_IOR] = ACTIONS(247),
    [anon_sym_XOR] = ACTIONS(247),
    [anon_sym_ADD] = ACTIONS(247),
    [anon_sym_SUB] = ACTIONS(247),
    [anon_sym_MUL] = ACTIONS(247),
    [anon_sym_DIV] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GE] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LE] = ACTIONS(247),
    [anon_sym_SIN] = ACTIONS(247),
    [anon_sym_COS] = ACTIONS(247),
    [anon_sym_SQRT] = ACTIONS(247),
    [anon_sym_EXP] = ACTIONS(247),
    [anon_sym_CIS] = ACTIONS(247),
    [anon_sym_i] = ACTIONS(247),
    [anon_sym_pi] = ACTIONS(247),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(247),
    [sym_identifier] = ACTIONS(247),
    [sym__newline] = ACTIONS(249),
    [aux_sym__int_token1] = ACTIONS(247),
  },
  [12] = {
    [anon_sym_HALT] = ACTIONS(243),
    [anon_sym_NOP] = ACTIONS(243),
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
    [anon_sym_NONBLOCKING] = ACTIONS(243),
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
    [anon_sym_FILTER_DASHNODE] = ACTIONS(243),
    [sym_identifier] = ACTIONS(243),
    [sym__newline] = ACTIONS(245),
    [aux_sym__int_token1] = ACTIONS(243),
  },
  [13] = {
    [sym_keyword] = STATE(4),
    [anon_sym_HALT] = ACTIONS(209),
    [anon_sym_NOP] = ACTIONS(209),
    [anon_sym_DEFGATE] = ACTIONS(209),
    [anon_sym_AS] = ACTIONS(209),
    [anon_sym_MATRIX] = ACTIONS(209),
    [anon_sym_PERMUTATION] = ACTIONS(209),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(209),
    [anon_sym_DEFCIRCUIT] = ACTIONS(209),
    [anon_sym_DEFFRAME] = ACTIONS(209),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(209),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(209),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(209),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(209),
    [anon_sym_DEFWAVEFORM] = ACTIONS(209),
    [anon_sym_DEFCAL] = ACTIONS(209),
    [anon_sym_MEASURE] = ACTIONS(209),
    [anon_sym_CONTROLLED] = ACTIONS(209),
    [anon_sym_DAGGER] = ACTIONS(209),
    [anon_sym_FORKED] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(209),
    [anon_sym_FENCE] = ACTIONS(209),
    [anon_sym_NONBLOCKING] = ACTIONS(209),
    [anon_sym_PULSE] = ACTIONS(209),
    [anon_sym_DELAY] = ACTIONS(209),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(209),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(209),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(209),
    [anon_sym_SET_DASHPHASE] = ACTIONS(209),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(209),
    [anon_sym_SET_DASHSCALE] = ACTIONS(209),
    [anon_sym_DECLARE] = ACTIONS(209),
    [anon_sym_SHARING] = ACTIONS(209),
    [anon_sym_OFFSET] = ACTIONS(209),
    [anon_sym_CAPTURE] = ACTIONS(209),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(209),
    [anon_sym_PRAGMA] = ACTIONS(209),
    [anon_sym_INCLUDE] = ACTIONS(209),
    [anon_sym_LABEL] = ACTIONS(209),
    [anon_sym_JUMP] = ACTIONS(209),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(209),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(209),
    [anon_sym_RESET] = ACTIONS(209),
    [anon_sym_WAIT] = ACTIONS(209),
    [anon_sym_STORE] = ACTIONS(209),
    [anon_sym_LOAD] = ACTIONS(209),
    [anon_sym_CONVERT] = ACTIONS(209),
    [anon_sym_EXCHANGE] = ACTIONS(209),
    [anon_sym_MOVE] = ACTIONS(209),
    [anon_sym_NEG] = ACTIONS(209),
    [anon_sym_NOT] = ACTIONS(209),
    [anon_sym_TRUE] = ACTIONS(209),
    [anon_sym_FALSE] = ACTIONS(209),
    [anon_sym_AND] = ACTIONS(209),
    [anon_sym_OR] = ACTIONS(209),
    [anon_sym_IOR] = ACTIONS(209),
    [anon_sym_XOR] = ACTIONS(209),
    [anon_sym_ADD] = ACTIONS(209),
    [anon_sym_SUB] = ACTIONS(209),
    [anon_sym_MUL] = ACTIONS(209),
    [anon_sym_DIV] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_GE] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_LE] = ACTIONS(209),
    [anon_sym_SIN] = ACTIONS(209),
    [anon_sym_COS] = ACTIONS(209),
    [anon_sym_SQRT] = ACTIONS(209),
    [anon_sym_EXP] = ACTIONS(209),
    [anon_sym_CIS] = ACTIONS(209),
    [anon_sym_i] = ACTIONS(209),
    [anon_sym_pi] = ACTIONS(209),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(209),
    [sym_identifier] = ACTIONS(251),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym_quil_repeat1,
    ACTIONS(255), 56,
      anon_sym_HALT,
      anon_sym_NOP,
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
      anon_sym_NONBLOCKING,
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
      sym_identifier,
  [68] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym_quil_repeat1,
    ACTIONS(260), 56,
      anon_sym_HALT,
      anon_sym_NOP,
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
      anon_sym_NONBLOCKING,
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
      sym_identifier,
  [136] = 1,
    ACTIONS(264), 50,
      anon_sym_HALT,
      anon_sym_NOP,
      anon_sym_MEASURE,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
      anon_sym_FENCE,
      anon_sym_NONBLOCKING,
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
      sym_identifier,
  [189] = 20,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      anon_sym_PERCENT,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      aux_sym__int_token1,
    STATE(48), 1,
      aux_sym__int,
    STATE(52), 1,
      sym_variable,
    STATE(56), 1,
      sym_qubit,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(227), 1,
      sym_expression,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(50), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(137), 3,
      sym__atom,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [260] = 18,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(288), 1,
      sym_expression,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(437), 2,
      sym__string,
      sym__escaped_string,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [326] = 18,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      aux_sym_delay_frames_repeat1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(209), 1,
      sym_expression,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [391] = 17,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(163), 1,
      sym_expression,
    STATE(395), 1,
      sym_function,
    STATE(443), 1,
      sym_matrix_row,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [453] = 17,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(163), 1,
      sym_expression,
    STATE(370), 1,
      sym_matrix_row,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [515] = 16,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(214), 1,
      sym_expression,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [574] = 16,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(217), 1,
      sym_expression,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [633] = 16,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(180), 1,
      sym_expression,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [692] = 16,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(202), 1,
      sym_expression,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [751] = 16,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(276), 1,
      sym_expression,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(144), 2,
      sym__product,
      sym__power,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [810] = 16,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(277), 1,
      sym_expression,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(144), 2,
      sym__product,
      sym__power,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [869] = 16,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(219), 1,
      sym_expression,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [928] = 16,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(193), 1,
      sym_expression,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(144), 2,
      sym__product,
      sym__power,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [987] = 16,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(218), 1,
      sym_expression,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1046] = 16,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(250), 1,
      sym_expression,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(144), 2,
      sym__product,
      sym__power,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1105] = 16,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(211), 1,
      sym_expression,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(144), 2,
      sym__product,
      sym__power,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1164] = 16,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(216), 1,
      sym_expression,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1223] = 16,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(165), 1,
      sym_expression,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(144), 2,
      sym__product,
      sym__power,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1282] = 16,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(266), 1,
      sym_expression,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(144), 2,
      sym__product,
      sym__power,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1341] = 16,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(167), 1,
      sym_expression,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(144), 2,
      sym__product,
      sym__power,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1400] = 16,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(215), 1,
      sym_expression,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(145), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1459] = 16,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(175), 1,
      sym_expression,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(144), 2,
      sym__product,
      sym__power,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1518] = 16,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(176), 1,
      sym_expression,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(144), 2,
      sym__product,
      sym__power,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1577] = 15,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(151), 2,
      sym__product,
      sym__power,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1633] = 15,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(140), 2,
      sym__product,
      sym__power,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1689] = 15,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(142), 1,
      sym__power,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1744] = 15,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(153), 1,
      sym__power,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(137), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1799] = 15,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(138), 1,
      sym__power,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1854] = 15,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(154), 1,
      sym__power,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(133), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1909] = 14,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_PERCENT,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(308), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(74), 1,
      sym__decimal,
    STATE(86), 1,
      sym__float,
    STATE(450), 1,
      sym_function,
    ACTIONS(296), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(132), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1961] = 14,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(395), 1,
      sym_function,
    ACTIONS(268), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(128), 4,
      sym__atom,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(274), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2013] = 5,
    ACTIONS(314), 1,
      sym__newline,
    STATE(49), 1,
      aux_sym__int,
    ACTIONS(316), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(312), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
    ACTIONS(310), 15,
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
  [2046] = 4,
    ACTIONS(238), 1,
      sym__newline,
    ACTIONS(318), 1,
      aux_sym__int_token1,
    STATE(49), 1,
      aux_sym__int,
    ACTIONS(236), 19,
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
  [2077] = 7,
    ACTIONS(323), 1,
      anon_sym_PERCENT,
    ACTIONS(326), 1,
      sym__newline,
    ACTIONS(328), 1,
      aux_sym__int_token1,
    STATE(53), 1,
      aux_sym__int,
    STATE(50), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(56), 2,
      sym_variable,
      sym_qubit,
    ACTIONS(321), 13,
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
    ACTIONS(333), 1,
      sym__newline,
    ACTIONS(331), 19,
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
    ACTIONS(339), 1,
      sym__newline,
    ACTIONS(337), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
    ACTIONS(335), 15,
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
    ACTIONS(314), 1,
      sym__newline,
    STATE(54), 1,
      aux_sym__int,
    ACTIONS(310), 16,
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
    ACTIONS(238), 1,
      sym__newline,
    ACTIONS(341), 1,
      aux_sym__int_token1,
    STATE(54), 1,
      aux_sym__int,
    ACTIONS(236), 15,
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
  [2216] = 4,
    ACTIONS(292), 1,
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
  [2243] = 2,
    ACTIONS(339), 1,
      sym__newline,
    ACTIONS(335), 16,
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
  [2265] = 3,
    ACTIONS(348), 1,
      aux_sym__int_token1,
    STATE(57), 1,
      aux_sym__int,
    ACTIONS(238), 15,
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
  [2289] = 4,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      aux_sym_delay_frames_repeat1,
    ACTIONS(351), 2,
      anon_sym_LPAREN,
      aux_sym__int_token1,
    ACTIONS(353), 13,
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
  [2315] = 2,
    ACTIONS(358), 2,
      anon_sym_LPAREN,
      aux_sym__int_token1,
    ACTIONS(360), 14,
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
    ACTIONS(362), 2,
      anon_sym_LPAREN,
      aux_sym__int_token1,
    ACTIONS(264), 13,
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
    ACTIONS(364), 2,
      anon_sym_LPAREN,
      aux_sym__int_token1,
    ACTIONS(366), 13,
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
    ACTIONS(238), 1,
      sym__newline,
    ACTIONS(368), 1,
      aux_sym__int_token1,
    STATE(62), 1,
      aux_sym__int,
    ACTIONS(236), 11,
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
    ACTIONS(371), 1,
      anon_sym_i,
    ACTIONS(373), 1,
      sym__newline,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      aux_sym__int_token1,
    STATE(62), 1,
      aux_sym__int,
    ACTIONS(316), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(312), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [2427] = 6,
    ACTIONS(379), 1,
      anon_sym_i,
    ACTIONS(383), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    STATE(57), 1,
      aux_sym__int,
    ACTIONS(381), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(373), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [2453] = 3,
    ACTIONS(389), 1,
      aux_sym__int_token1,
    STATE(70), 1,
      aux_sym__int,
    ACTIONS(387), 10,
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
  [2472] = 4,
    ACTIONS(387), 1,
      sym__newline,
    ACTIONS(393), 1,
      aux_sym__int_token1,
    STATE(67), 1,
      aux_sym__int,
    ACTIONS(391), 9,
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
    ACTIONS(377), 1,
      aux_sym__int_token1,
    ACTIONS(397), 1,
      sym__newline,
    STATE(62), 1,
      aux_sym__int,
    ACTIONS(395), 9,
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
    ACTIONS(377), 1,
      aux_sym__int_token1,
    ACTIONS(387), 1,
      sym__newline,
    STATE(62), 1,
      aux_sym__int,
    ACTIONS(391), 9,
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
    ACTIONS(385), 1,
      aux_sym__int_token1,
    STATE(57), 1,
      aux_sym__int,
    ACTIONS(387), 10,
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
    ACTIONS(385), 1,
      aux_sym__int_token1,
    STATE(57), 1,
      aux_sym__int,
    ACTIONS(397), 10,
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
  [2573] = 1,
    ACTIONS(333), 11,
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
  [2587] = 9,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    ACTIONS(276), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(384), 2,
      sym_addr,
      sym_number,
  [2617] = 3,
    ACTIONS(401), 1,
      sym__newline,
    ACTIONS(316), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(399), 7,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [2634] = 2,
    ACTIONS(381), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(401), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [2649] = 8,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(101), 1,
      sym_variables,
    STATE(158), 1,
      aux_sym__int,
    STATE(84), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [2676] = 4,
    ACTIONS(377), 1,
      aux_sym__int_token1,
    ACTIONS(413), 1,
      sym__newline,
    STATE(62), 1,
      aux_sym__int,
    ACTIONS(411), 7,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [2695] = 3,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    STATE(57), 1,
      aux_sym__int,
    ACTIONS(413), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [2712] = 8,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      sym__newline,
    ACTIONS(419), 1,
      aux_sym__int_token1,
    STATE(116), 1,
      sym_params,
    STATE(204), 1,
      aux_sym__int,
    STATE(94), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [2739] = 8,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      aux_sym__int_token1,
    ACTIONS(421), 1,
      sym__newline,
    STATE(92), 1,
      sym_params,
    STATE(204), 1,
      aux_sym__int,
    STATE(93), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [2766] = 6,
    ACTIONS(423), 1,
      anon_sym_PERCENT,
    ACTIONS(426), 1,
      aux_sym__int_token1,
    STATE(158), 1,
      aux_sym__int,
    ACTIONS(326), 2,
      anon_sym_COLON,
      anon_sym_DQUOTE,
    STATE(80), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [2788] = 7,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_params,
    STATE(158), 1,
      aux_sym__int,
    STATE(109), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [2812] = 2,
    ACTIONS(333), 1,
      sym__newline,
    ACTIONS(331), 8,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [2826] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(22), 1,
      sym_frame,
    STATE(158), 1,
      aux_sym__int,
    STATE(105), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [2847] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    ACTIONS(431), 1,
      anon_sym_COLON,
    STATE(158), 1,
      aux_sym__int,
    STATE(80), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [2868] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    ACTIONS(433), 1,
      anon_sym_COLON,
    STATE(158), 1,
      aux_sym__int,
    STATE(80), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [2889] = 2,
    ACTIONS(379), 1,
      anon_sym_i,
    ACTIONS(373), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [2902] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    ACTIONS(435), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym__int,
    STATE(80), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [2923] = 2,
    ACTIONS(439), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [2936] = 6,
    ACTIONS(326), 1,
      sym__newline,
    ACTIONS(441), 1,
      anon_sym_PERCENT,
    ACTIONS(444), 1,
      aux_sym__int_token1,
    STATE(204), 1,
      aux_sym__int,
    STATE(89), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [2957] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(158), 1,
      aux_sym__int,
    STATE(248), 1,
      sym_frame,
    STATE(119), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [2978] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(158), 1,
      aux_sym__int,
    STATE(247), 1,
      sym_frame,
    STATE(119), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [2999] = 6,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(417), 1,
      sym__newline,
    ACTIONS(419), 1,
      aux_sym__int_token1,
    STATE(204), 1,
      aux_sym__int,
    STATE(94), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3020] = 6,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(417), 1,
      sym__newline,
    ACTIONS(419), 1,
      aux_sym__int_token1,
    STATE(204), 1,
      aux_sym__int,
    STATE(89), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3041] = 6,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(419), 1,
      aux_sym__int_token1,
    ACTIONS(447), 1,
      sym__newline,
    STATE(204), 1,
      aux_sym__int,
    STATE(89), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3062] = 1,
    ACTIONS(449), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3073] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    ACTIONS(451), 1,
      anon_sym_COLON,
    STATE(158), 1,
      aux_sym__int,
    STATE(80), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3094] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(37), 1,
      sym_frame,
    STATE(158), 1,
      aux_sym__int,
    STATE(105), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3115] = 3,
    ACTIONS(437), 1,
      sym__newline,
    ACTIONS(455), 1,
      anon_sym_LBRACK,
    ACTIONS(453), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3130] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(33), 1,
      sym_frame,
    STATE(158), 1,
      aux_sym__int,
    STATE(105), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3151] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(23), 1,
      sym_frame,
    STATE(158), 1,
      aux_sym__int,
    STATE(105), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3172] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    ACTIONS(431), 1,
      anon_sym_COLON,
    STATE(158), 1,
      aux_sym__int,
    STATE(85), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3193] = 3,
    ACTIONS(371), 1,
      anon_sym_i,
    ACTIONS(373), 1,
      sym__newline,
    ACTIONS(312), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3208] = 7,
    ACTIONS(290), 1,
      aux_sym__int_token1,
    ACTIONS(459), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym__int,
    STATE(73), 1,
      sym__decimal,
    STATE(102), 1,
      sym__float,
    STATE(377), 1,
      sym_number,
    ACTIONS(457), 2,
      anon_sym_i,
      anon_sym_pi,
  [3231] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(30), 1,
      sym_frame,
    STATE(158), 1,
      aux_sym__int,
    STATE(105), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3252] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym__int,
    STATE(80), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3273] = 7,
    ACTIONS(463), 1,
      anon_sym_AS,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 1,
      sym_identifier,
    STATE(157), 1,
      sym_variables,
    STATE(447), 1,
      sym_qubit_variables,
    STATE(172), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [3296] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(158), 1,
      aux_sym__int,
    STATE(270), 1,
      sym_frame,
    STATE(119), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3317] = 2,
    ACTIONS(449), 1,
      sym__newline,
    ACTIONS(471), 7,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3330] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    ACTIONS(473), 1,
      anon_sym_COLON,
    STATE(158), 1,
      aux_sym__int,
    STATE(80), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3351] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(158), 1,
      aux_sym__int,
    STATE(271), 1,
      sym_frame,
    STATE(119), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3372] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(158), 1,
      aux_sym__int,
    STATE(273), 1,
      sym_frame,
    STATE(119), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3393] = 6,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(419), 1,
      aux_sym__int_token1,
    ACTIONS(475), 1,
      sym__newline,
    STATE(204), 1,
      aux_sym__int,
    STATE(89), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3414] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(28), 1,
      sym_frame,
    STATE(158), 1,
      aux_sym__int,
    STATE(105), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3435] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(158), 1,
      aux_sym__int,
    STATE(244), 1,
      sym_frame,
    STATE(119), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3456] = 6,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(419), 1,
      aux_sym__int_token1,
    ACTIONS(477), 1,
      sym__newline,
    STATE(204), 1,
      aux_sym__int,
    STATE(118), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3477] = 6,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(419), 1,
      aux_sym__int_token1,
    ACTIONS(447), 1,
      sym__newline,
    STATE(204), 1,
      aux_sym__int,
    STATE(112), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3498] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(158), 1,
      aux_sym__int,
    STATE(349), 1,
      sym_frame,
    STATE(87), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3519] = 6,
    ACTIONS(288), 1,
      anon_sym_PERCENT,
    ACTIONS(419), 1,
      aux_sym__int_token1,
    ACTIONS(479), 1,
      sym__newline,
    STATE(204), 1,
      aux_sym__int,
    STATE(89), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3540] = 6,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    ACTIONS(481), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym__int,
    STATE(80), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3561] = 1,
    ACTIONS(483), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3571] = 2,
    ACTIONS(487), 1,
      sym__newline,
    ACTIONS(485), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3583] = 5,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(409), 1,
      aux_sym__int_token1,
    STATE(158), 1,
      aux_sym__int,
    STATE(96), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(201), 2,
      sym_variable,
      sym_qubit,
  [3601] = 6,
    ACTIONS(489), 1,
      anon_sym_PERCENT,
    ACTIONS(491), 1,
      aux_sym__int_token1,
    STATE(17), 1,
      aux_sym_def_circuit_repeat1,
    STATE(53), 1,
      aux_sym__int,
    STATE(55), 1,
      sym_qubit_designator,
    STATE(56), 2,
      sym_variable,
      sym_qubit,
  [3621] = 1,
    ACTIONS(487), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3631] = 2,
    ACTIONS(495), 1,
      sym__newline,
    ACTIONS(493), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3643] = 1,
    ACTIONS(373), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3653] = 1,
    ACTIONS(497), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3663] = 2,
    ACTIONS(501), 1,
      sym__newline,
    ACTIONS(499), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3675] = 1,
    ACTIONS(495), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3685] = 2,
    ACTIONS(497), 1,
      sym__newline,
    ACTIONS(503), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3697] = 1,
    ACTIONS(505), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3707] = 1,
    ACTIONS(501), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3717] = 2,
    ACTIONS(509), 1,
      anon_sym_CARET,
    ACTIONS(507), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3729] = 2,
    ACTIONS(505), 1,
      sym__newline,
    ACTIONS(511), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3741] = 2,
    ACTIONS(373), 1,
      sym__newline,
    ACTIONS(312), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3753] = 2,
    ACTIONS(483), 1,
      sym__newline,
    ACTIONS(513), 6,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [3765] = 3,
    ACTIONS(507), 1,
      sym__newline,
    ACTIONS(517), 1,
      anon_sym_CARET,
    ACTIONS(515), 5,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3779] = 1,
    ACTIONS(519), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3788] = 4,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    ACTIONS(521), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(423), 2,
      sym_addr,
      sym_signed_number,
  [3803] = 3,
    ACTIONS(529), 1,
      sym__newline,
    ACTIONS(527), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(525), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3816] = 4,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    ACTIONS(521), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(376), 2,
      sym_addr,
      sym_signed_number,
  [3831] = 2,
    ACTIONS(519), 1,
      sym__newline,
    ACTIONS(531), 5,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3842] = 5,
    ACTIONS(533), 1,
      anon_sym_PERCENT,
    ACTIONS(535), 1,
      aux_sym__int_token1,
    STATE(162), 1,
      aux_sym__int,
    STATE(191), 1,
      sym_qubit_designator,
    STATE(262), 2,
      sym_variable,
      sym_qubit,
  [3859] = 2,
    ACTIONS(539), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(537), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3870] = 3,
    ACTIONS(537), 1,
      sym__newline,
    ACTIONS(527), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(541), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3883] = 2,
    STATE(402), 1,
      sym_frame_attr,
    ACTIONS(543), 5,
      anon_sym_SAMPLE_DASHRATE,
      anon_sym_INITIAL_DASHFREQUENCY,
      anon_sym_DIRECTION,
      anon_sym_HARDWARE_DASHOBJECT,
      anon_sym_CENTER_DASHFREQUENCY,
  [3894] = 2,
    ACTIONS(437), 1,
      aux_sym__int_token1,
    ACTIONS(453), 5,
      anon_sym_LBRACK,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
  [3905] = 2,
    ACTIONS(487), 1,
      aux_sym__int_token1,
    ACTIONS(485), 5,
      anon_sym_LBRACK,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
  [3916] = 5,
    ACTIONS(545), 1,
      anon_sym_PERCENT,
    ACTIONS(547), 1,
      aux_sym__int_token1,
    STATE(198), 1,
      aux_sym__int,
    STATE(325), 1,
      sym_qubit_designator,
    STATE(328), 2,
      sym_variable,
      sym_qubit,
  [3933] = 2,
    ACTIONS(497), 1,
      aux_sym__int_token1,
    ACTIONS(503), 5,
      anon_sym_LBRACK,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
      anon_sym_DOT,
  [3944] = 2,
    ACTIONS(539), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(529), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3955] = 4,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    ACTIONS(521), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(425), 2,
      sym_addr,
      sym_signed_number,
  [3970] = 2,
    ACTIONS(551), 1,
      sym__newline,
    ACTIONS(549), 5,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3981] = 1,
    ACTIONS(551), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3990] = 2,
    ACTIONS(487), 2,
      sym_identifier,
      aux_sym__int_token1,
    ACTIONS(485), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
  [4000] = 3,
    ACTIONS(555), 1,
      sym_identifier,
    STATE(160), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(553), 3,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
  [4012] = 4,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(559), 1,
      sym_identifier,
    STATE(419), 1,
      sym_qubit_variables,
    STATE(172), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4026] = 2,
    STATE(57), 1,
      aux_sym__int,
    ACTIONS(314), 4,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym__int_token1,
  [4036] = 1,
    ACTIONS(362), 5,
      anon_sym_SAMPLE_DASHRATE,
      anon_sym_INITIAL_DASHFREQUENCY,
      anon_sym_DIRECTION,
      anon_sym_HARDWARE_DASHOBJECT,
      anon_sym_CENTER_DASHFREQUENCY,
  [4044] = 3,
    ACTIONS(564), 1,
      sym_identifier,
    STATE(160), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(561), 3,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
  [4056] = 2,
    ACTIONS(437), 2,
      sym_identifier,
      aux_sym__int_token1,
    ACTIONS(453), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
  [4066] = 4,
    ACTIONS(314), 1,
      sym__newline,
    ACTIONS(566), 1,
      aux_sym__int_token1,
    STATE(164), 1,
      aux_sym__int,
    ACTIONS(310), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [4080] = 5,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_PLUS,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(574), 1,
      sym__newline,
    STATE(289), 1,
      aux_sym_params_repeat1,
  [4096] = 4,
    ACTIONS(238), 1,
      sym__newline,
    ACTIONS(576), 1,
      aux_sym__int_token1,
    STATE(164), 1,
      aux_sym__int,
    ACTIONS(236), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [4110] = 5,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_PLUS,
    ACTIONS(585), 1,
      anon_sym_DASH,
    STATE(238), 1,
      aux_sym_params_repeat1,
  [4126] = 2,
    ACTIONS(497), 2,
      sym_identifier,
      aux_sym__int_token1,
    ACTIONS(503), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
  [4136] = 5,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_PLUS,
    ACTIONS(585), 1,
      anon_sym_DASH,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_params_repeat1,
  [4152] = 5,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    ACTIONS(589), 1,
      aux_sym__int_token1,
    STATE(268), 1,
      aux_sym__int,
    STATE(424), 1,
      sym_addr,
  [4168] = 3,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(593), 1,
      sym__newline,
    STATE(190), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4179] = 3,
    ACTIONS(595), 1,
      anon_sym_OFFSET,
    ACTIONS(597), 1,
      sym__newline,
    STATE(179), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4190] = 3,
    ACTIONS(599), 1,
      sym__newline,
    STATE(146), 1,
      sym__newline_tab,
    STATE(195), 2,
      sym_frame_spec,
      aux_sym_def_frame_repeat1,
  [4201] = 3,
    ACTIONS(469), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_AS,
    STATE(192), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4212] = 3,
    ACTIONS(595), 1,
      anon_sym_OFFSET,
    ACTIONS(603), 1,
      sym__newline,
    STATE(179), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4223] = 4,
    ACTIONS(605), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(259), 1,
      aux_sym_matrix_repeat1,
    STATE(444), 1,
      sym_matrix,
  [4236] = 3,
    ACTIONS(583), 1,
      anon_sym_PLUS,
    ACTIONS(585), 1,
      anon_sym_DASH,
    ACTIONS(607), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4247] = 3,
    ACTIONS(583), 1,
      anon_sym_PLUS,
    ACTIONS(585), 1,
      anon_sym_DASH,
    ACTIONS(609), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4258] = 3,
    ACTIONS(595), 1,
      anon_sym_OFFSET,
    ACTIONS(611), 1,
      sym__newline,
    STATE(173), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4269] = 4,
    ACTIONS(605), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(259), 1,
      aux_sym_matrix_repeat1,
    STATE(408), 1,
      sym_matrix,
  [4282] = 3,
    ACTIONS(613), 1,
      anon_sym_OFFSET,
    ACTIONS(616), 1,
      sym__newline,
    STATE(179), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4293] = 2,
    ACTIONS(529), 1,
      sym__newline,
    ACTIONS(525), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4302] = 3,
    ACTIONS(595), 1,
      anon_sym_OFFSET,
    ACTIONS(618), 1,
      sym__newline,
    STATE(170), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [4313] = 3,
    ACTIONS(620), 1,
      sym__newline,
    STATE(5), 1,
      sym__newline_tab,
    STATE(416), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4324] = 3,
    ACTIONS(622), 1,
      sym_identifier,
    STATE(394), 1,
      sym_qubit_variables,
    STATE(169), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4335] = 3,
    ACTIONS(620), 1,
      sym__newline,
    STATE(5), 1,
      sym__newline_tab,
    STATE(449), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4346] = 3,
    ACTIONS(620), 1,
      sym__newline,
    STATE(5), 1,
      sym__newline_tab,
    STATE(448), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4357] = 4,
    ACTIONS(605), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(259), 1,
      aux_sym_matrix_repeat1,
    STATE(420), 1,
      sym_matrix,
  [4370] = 3,
    ACTIONS(624), 1,
      sym__newline,
    STATE(146), 1,
      sym__newline_tab,
    STATE(187), 2,
      sym_frame_spec,
      aux_sym_def_frame_repeat1,
  [4381] = 3,
    ACTIONS(620), 1,
      sym__newline,
    STATE(5), 1,
      sym__newline_tab,
    STATE(445), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4392] = 4,
    ACTIONS(605), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(259), 1,
      aux_sym_matrix_repeat1,
    STATE(367), 1,
      sym_matrix,
  [4405] = 3,
    ACTIONS(627), 1,
      sym_identifier,
    ACTIONS(630), 1,
      sym__newline,
    STATE(190), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4416] = 4,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(632), 1,
      sym__newline,
    STATE(407), 1,
      sym_addr,
  [4429] = 3,
    ACTIONS(634), 1,
      anon_sym_AS,
    ACTIONS(636), 1,
      sym_identifier,
    STATE(192), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [4440] = 1,
    ACTIONS(529), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4447] = 3,
    ACTIONS(620), 1,
      sym__newline,
    STATE(5), 1,
      sym__newline_tab,
    STATE(355), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4458] = 3,
    ACTIONS(639), 1,
      sym__newline,
    STATE(146), 1,
      sym__newline_tab,
    STATE(187), 2,
      sym_frame_spec,
      aux_sym_def_frame_repeat1,
  [4469] = 4,
    ACTIONS(605), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(259), 1,
      aux_sym_matrix_repeat1,
    STATE(429), 1,
      sym_matrix,
  [4482] = 4,
    ACTIONS(236), 1,
      anon_sym_COLON,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(641), 1,
      aux_sym__int_token1,
    STATE(197), 1,
      aux_sym__int,
  [4495] = 4,
    ACTIONS(310), 1,
      anon_sym_COLON,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(644), 1,
      aux_sym__int_token1,
    STATE(197), 1,
      aux_sym__int,
  [4508] = 4,
    ACTIONS(605), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(259), 1,
      aux_sym_matrix_repeat1,
    STATE(380), 1,
      sym_matrix,
  [4521] = 3,
    ACTIONS(620), 1,
      sym__newline,
    STATE(5), 1,
      sym__newline_tab,
    STATE(383), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4532] = 1,
    ACTIONS(339), 4,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym__int_token1,
  [4539] = 4,
    ACTIONS(570), 1,
      anon_sym_PLUS,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(609), 1,
      sym__newline,
    ACTIONS(646), 1,
      anon_sym_COMMA,
  [4552] = 3,
    ACTIONS(620), 1,
      sym__newline,
    STATE(5), 1,
      sym__newline_tab,
    STATE(388), 2,
      sym__indented_instrs,
      aux_sym__indented_instrs_repeat1,
  [4563] = 3,
    ACTIONS(314), 1,
      sym__newline,
    STATE(62), 1,
      aux_sym__int,
    ACTIONS(310), 2,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4574] = 3,
    ACTIONS(650), 1,
      anon_sym_SLASH,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [4585] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(403), 1,
      sym_addr,
  [4595] = 3,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(253), 1,
      sym_addr,
  [4605] = 3,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(152), 1,
      sym_addr,
  [4615] = 3,
    ACTIONS(570), 1,
      anon_sym_PLUS,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(658), 1,
      sym__newline,
  [4625] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(391), 1,
      sym_addr,
  [4635] = 3,
    ACTIONS(583), 1,
      anon_sym_PLUS,
    ACTIONS(585), 1,
      anon_sym_DASH,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
  [4645] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(392), 1,
      sym_addr,
  [4655] = 3,
    ACTIONS(662), 1,
      anon_sym_LBRACK,
    ACTIONS(664), 1,
      anon_sym_SHARING,
    ACTIONS(666), 1,
      sym__newline,
  [4665] = 3,
    ACTIONS(570), 1,
      anon_sym_PLUS,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(668), 1,
      sym__newline,
  [4675] = 3,
    ACTIONS(570), 1,
      anon_sym_PLUS,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(670), 1,
      sym__newline,
  [4685] = 3,
    ACTIONS(570), 1,
      anon_sym_PLUS,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(672), 1,
      sym__newline,
  [4695] = 3,
    ACTIONS(570), 1,
      anon_sym_PLUS,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(674), 1,
      sym__newline,
  [4705] = 3,
    ACTIONS(570), 1,
      anon_sym_PLUS,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(676), 1,
      sym__newline,
  [4715] = 3,
    ACTIONS(570), 1,
      anon_sym_PLUS,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(678), 1,
      sym__newline,
  [4725] = 2,
    STATE(108), 1,
      sym__signed_int,
    ACTIONS(680), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4733] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(353), 1,
      sym_addr,
  [4743] = 3,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(168), 1,
      sym_addr,
  [4753] = 3,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(139), 1,
      sym_addr,
  [4763] = 2,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(682), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [4771] = 3,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(257), 1,
      sym_addr,
  [4781] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(397), 1,
      sym_addr,
  [4791] = 3,
    ACTIONS(570), 1,
      anon_sym_PLUS,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(686), 1,
      sym__newline,
  [4801] = 3,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(252), 1,
      sym_addr,
  [4811] = 2,
    ACTIONS(339), 1,
      sym__newline,
    ACTIONS(335), 2,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4819] = 1,
    ACTIONS(688), 3,
      anon_sym_COLON,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4825] = 3,
    ACTIONS(609), 1,
      sym__newline,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_params_repeat1,
  [4835] = 3,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    ACTIONS(693), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym__int,
  [4845] = 1,
    ACTIONS(695), 3,
      anon_sym_COLON,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4851] = 3,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(697), 1,
      sym_identifier,
    STATE(357), 1,
      sym_addr,
  [4861] = 3,
    ACTIONS(535), 1,
      aux_sym__int_token1,
    STATE(162), 1,
      aux_sym__int,
    STATE(359), 1,
      sym_qubit,
  [4871] = 2,
    ACTIONS(701), 1,
      sym__newline,
    ACTIONS(699), 2,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4879] = 2,
    ACTIONS(703), 1,
      anon_sym_SLASH,
    ACTIONS(648), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [4887] = 3,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      aux_sym_params_repeat1,
  [4897] = 3,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_COLON,
    STATE(413), 1,
      sym_params,
  [4907] = 3,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    ACTIONS(709), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym__int,
  [4917] = 2,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    STATE(366), 2,
      sym__string,
      sym__escaped_string,
  [4925] = 3,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_variables_repeat1,
  [4935] = 1,
    ACTIONS(717), 3,
      anon_sym_COLON,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4941] = 3,
    ACTIONS(719), 1,
      sym_identifier,
    STATE(299), 1,
      sym_waveform_name,
    STATE(369), 1,
      sym_waveform,
  [4951] = 1,
    ACTIONS(701), 3,
      anon_sym_COLON,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [4957] = 3,
    ACTIONS(721), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(246), 1,
      aux_sym_matrix_repeat1,
  [4967] = 3,
    ACTIONS(724), 1,
      sym_identifier,
    STATE(212), 1,
      sym_waveform,
    STATE(255), 1,
      sym_waveform_name,
  [4977] = 3,
    ACTIONS(724), 1,
      sym_identifier,
    STATE(210), 1,
      sym_waveform,
    STATE(255), 1,
      sym_waveform_name,
  [4987] = 3,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_variables_repeat1,
  [4997] = 3,
    ACTIONS(583), 1,
      anon_sym_PLUS,
    ACTIONS(585), 1,
      anon_sym_DASH,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
  [5007] = 3,
    ACTIONS(730), 1,
      anon_sym_LBRACK,
    ACTIONS(732), 1,
      sym_identifier,
    STATE(72), 1,
      sym_addr,
  [5017] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(431), 1,
      sym_addr,
  [5027] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(428), 1,
      sym_addr,
  [5037] = 3,
    ACTIONS(734), 1,
      sym__newline,
    STATE(5), 1,
      sym__newline_tab,
    STATE(254), 1,
      aux_sym__indented_instrs_repeat1,
  [5047] = 3,
    ACTIONS(737), 1,
      anon_sym_LPAREN,
    ACTIONS(739), 1,
      anon_sym_LBRACK,
    ACTIONS(741), 1,
      sym_identifier,
  [5057] = 3,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_variables_repeat1,
  [5067] = 3,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(141), 1,
      sym_addr,
  [5077] = 2,
    ACTIONS(333), 1,
      sym__newline,
    ACTIONS(331), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [5085] = 3,
    ACTIONS(745), 1,
      sym__newline,
    STATE(21), 1,
      sym__newline_tab,
    STATE(246), 1,
      aux_sym_matrix_repeat1,
  [5095] = 2,
    STATE(95), 1,
      sym__signed_int,
    ACTIONS(747), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5103] = 3,
    ACTIONS(648), 1,
      sym__newline,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      anon_sym_SLASH,
  [5113] = 2,
    ACTIONS(339), 1,
      sym__newline,
    ACTIONS(335), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [5121] = 3,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    ACTIONS(751), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym__int,
  [5131] = 3,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      aux_sym_params_repeat1,
  [5141] = 3,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(755), 1,
      anon_sym_COLON,
    STATE(372), 1,
      sym_variables,
  [5151] = 3,
    ACTIONS(583), 1,
      anon_sym_PLUS,
    ACTIONS(585), 1,
      anon_sym_DASH,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
  [5161] = 3,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_variables_repeat1,
  [5171] = 3,
    ACTIONS(566), 1,
      aux_sym__int_token1,
    ACTIONS(761), 1,
      sym__newline,
    STATE(164), 1,
      aux_sym__int,
  [5181] = 3,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_waveform_repeat1,
  [5191] = 3,
    ACTIONS(724), 1,
      sym_identifier,
    STATE(206), 1,
      sym_waveform,
    STATE(255), 1,
      sym_waveform_name,
  [5201] = 3,
    ACTIONS(724), 1,
      sym_identifier,
    STATE(226), 1,
      sym_waveform,
    STATE(255), 1,
      sym_waveform_name,
  [5211] = 3,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_waveform_repeat1,
  [5221] = 3,
    ACTIONS(719), 1,
      sym_identifier,
    STATE(299), 1,
      sym_waveform_name,
    STATE(398), 1,
      sym_waveform,
  [5231] = 3,
    ACTIONS(769), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(298), 1,
      sym__newline_tab,
  [5241] = 3,
    ACTIONS(772), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(298), 1,
      sym__newline_tab,
  [5251] = 3,
    ACTIONS(583), 1,
      anon_sym_PLUS,
    ACTIONS(585), 1,
      anon_sym_DASH,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
  [5261] = 3,
    ACTIONS(583), 1,
      anon_sym_PLUS,
    ACTIONS(585), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [5271] = 3,
    ACTIONS(644), 1,
      aux_sym__int_token1,
    ACTIONS(778), 1,
      sym_identifier,
    STATE(197), 1,
      aux_sym__int,
  [5281] = 3,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      aux_sym_waveform_repeat1,
  [5291] = 3,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    ACTIONS(782), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym__int,
  [5301] = 3,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    ACTIONS(784), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym__int,
  [5311] = 3,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym_waveform_repeat1,
  [5321] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(378), 1,
      sym_addr,
  [5331] = 2,
    ACTIONS(695), 1,
      sym__newline,
    ACTIONS(791), 2,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [5339] = 3,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    ACTIONS(793), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_params_repeat1,
  [5349] = 3,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    ACTIONS(796), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym__int,
  [5359] = 3,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    ACTIONS(798), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym__int,
  [5369] = 3,
    ACTIONS(570), 1,
      anon_sym_PLUS,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(800), 1,
      sym__newline,
  [5379] = 3,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    ACTIONS(802), 1,
      sym__newline,
    STATE(231), 1,
      aux_sym_params_repeat1,
  [5389] = 3,
    ACTIONS(804), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(298), 1,
      sym__newline_tab,
  [5399] = 3,
    ACTIONS(804), 1,
      sym__newline,
    STATE(275), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(298), 1,
      sym__newline_tab,
  [5409] = 3,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_variables_repeat1,
  [5419] = 3,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    ACTIONS(811), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym__int,
  [5429] = 3,
    ACTIONS(813), 1,
      sym__newline,
    STATE(290), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(298), 1,
      sym__newline_tab,
  [5439] = 3,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym__int,
  [5449] = 3,
    ACTIONS(817), 1,
      anon_sym_PULSE,
    ACTIONS(819), 1,
      anon_sym_CAPTURE,
    ACTIONS(821), 1,
      anon_sym_RAW_DASHCAPTURE,
  [5459] = 3,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      aux_sym_waveform_repeat1,
  [5469] = 2,
    ACTIONS(825), 1,
      sym_identifier,
    STATE(409), 1,
      sym_pauli_term,
  [5476] = 2,
    ACTIONS(741), 1,
      sym__newline,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
  [5483] = 2,
    ACTIONS(829), 1,
      sym_identifier,
    STATE(239), 1,
      sym_waveform_name,
  [5490] = 2,
    ACTIONS(831), 1,
      sym_identifier,
    STATE(316), 1,
      sym_named_param,
  [5497] = 2,
    ACTIONS(833), 1,
      aux_sym__int_token1,
    STATE(295), 1,
      aux_sym__int,
  [5504] = 2,
    ACTIONS(835), 1,
      aux_sym__int_token1,
    STATE(293), 1,
      aux_sym__int,
  [5511] = 2,
    ACTIONS(837), 1,
      aux_sym__int_token1,
    STATE(281), 1,
      aux_sym__int,
  [5518] = 2,
    ACTIONS(839), 1,
      anon_sym_SHARING,
    ACTIONS(841), 1,
      sym__newline,
  [5525] = 2,
    ACTIONS(843), 1,
      aux_sym__int_token1,
    STATE(278), 1,
      aux_sym__int,
  [5532] = 2,
    ACTIONS(845), 1,
      anon_sym_MEASURE,
    ACTIONS(847), 1,
      sym_identifier,
  [5539] = 2,
    ACTIONS(831), 1,
      sym_identifier,
    STATE(272), 1,
      sym_named_param,
  [5546] = 2,
    ACTIONS(849), 1,
      aux_sym__int_token1,
    STATE(263), 1,
      aux_sym__int,
  [5553] = 2,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    STATE(242), 1,
      sym_variable,
  [5560] = 2,
    ACTIONS(851), 1,
      aux_sym__int_token1,
    STATE(240), 1,
      aux_sym__int,
  [5567] = 2,
    ACTIONS(688), 1,
      sym_identifier,
    ACTIONS(853), 1,
      anon_sym_COLON,
  [5574] = 1,
    ACTIONS(806), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5579] = 1,
    ACTIONS(855), 2,
      anon_sym_,
      anon_sym_TAB,
  [5584] = 2,
    ACTIONS(857), 1,
      aux_sym__int_token1,
    STATE(232), 1,
      aux_sym__int,
  [5591] = 1,
    ACTIONS(786), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5596] = 1,
    ACTIONS(859), 2,
      anon_sym_,
      anon_sym_TAB,
  [5601] = 1,
    ACTIONS(861), 2,
      anon_sym_,
      anon_sym_TAB,
  [5606] = 1,
    ACTIONS(863), 2,
      anon_sym_,
      anon_sym_TAB,
  [5611] = 1,
    ACTIONS(682), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [5616] = 2,
    ACTIONS(865), 1,
      anon_sym_AT,
    STATE(364), 1,
      sym_label,
  [5623] = 2,
    ACTIONS(867), 1,
      aux_sym__int_token1,
    STATE(76), 1,
      aux_sym__int,
  [5630] = 2,
    ACTIONS(865), 1,
      anon_sym_AT,
    STATE(363), 1,
      sym_label,
  [5637] = 2,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(333), 1,
      sym_identifier,
  [5644] = 2,
    ACTIONS(869), 1,
      anon_sym_COLON,
    ACTIONS(871), 1,
      sym_identifier,
  [5651] = 2,
    ACTIONS(865), 1,
      anon_sym_AT,
    STATE(362), 1,
      sym_label,
  [5658] = 2,
    ACTIONS(873), 1,
      anon_sym_OFFSET,
    ACTIONS(875), 1,
      sym__newline,
  [5665] = 2,
    ACTIONS(335), 1,
      anon_sym_COLON,
    ACTIONS(339), 1,
      sym_identifier,
  [5672] = 2,
    ACTIONS(865), 1,
      anon_sym_AT,
    STATE(361), 1,
      sym_label,
  [5679] = 2,
    ACTIONS(831), 1,
      sym_identifier,
    STATE(269), 1,
      sym_named_param,
  [5686] = 2,
    ACTIONS(877), 1,
      aux_sym__int_token1,
    STATE(280), 1,
      aux_sym__int,
  [5693] = 2,
    ACTIONS(879), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_quil_repeat1,
  [5700] = 2,
    ACTIONS(881), 1,
      anon_sym_LBRACK,
    ACTIONS(883), 1,
      sym_identifier,
  [5707] = 2,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    STATE(256), 1,
      sym_variable,
  [5714] = 2,
    ACTIONS(885), 1,
      anon_sym_LBRACK,
    ACTIONS(887), 1,
      sym_identifier,
  [5721] = 2,
    ACTIONS(889), 1,
      aux_sym__int_token1,
    STATE(68), 1,
      aux_sym__int,
  [5728] = 2,
    ACTIONS(891), 1,
      sym_identifier,
    ACTIONS(893), 1,
      sym__newline,
  [5735] = 2,
    ACTIONS(895), 1,
      anon_sym_MATRIX,
    ACTIONS(897), 1,
      anon_sym_PERMUTATION,
  [5742] = 2,
    ACTIONS(364), 1,
      sym__newline,
    ACTIONS(366), 1,
      anon_sym_COLON,
  [5749] = 2,
    ACTIONS(682), 1,
      sym__newline,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
  [5756] = 2,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    STATE(313), 1,
      sym_variable,
  [5763] = 2,
    ACTIONS(717), 1,
      sym_identifier,
    ACTIONS(899), 1,
      anon_sym_COLON,
  [5770] = 2,
    ACTIONS(605), 1,
      sym__newline,
    STATE(20), 1,
      sym__newline_tab,
  [5777] = 2,
    ACTIONS(901), 1,
      aux_sym__int_token1,
    STATE(77), 1,
      aux_sym__int,
  [5784] = 2,
    ACTIONS(903), 1,
      aux_sym__int_token1,
    STATE(69), 1,
      aux_sym__int,
  [5791] = 1,
    ACTIONS(891), 2,
      anon_sym_AS,
      sym_identifier,
  [5796] = 2,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(905), 1,
      anon_sym_LBRACK,
  [5803] = 2,
    ACTIONS(907), 1,
      aux_sym__int_token1,
    STATE(287), 1,
      aux_sym__int,
  [5810] = 2,
    ACTIONS(909), 1,
      anon_sym_COLON,
    ACTIONS(911), 1,
      sym__newline,
  [5817] = 2,
    ACTIONS(913), 1,
      sym__string_inner,
    STATE(441), 1,
      sym__string_esc_inner,
  [5824] = 1,
    ACTIONS(915), 1,
      sym__newline,
  [5828] = 1,
    ACTIONS(362), 1,
      sym_identifier,
  [5832] = 1,
    ACTIONS(917), 1,
      sym__newline,
  [5836] = 1,
    ACTIONS(919), 1,
      anon_sym_COLON,
  [5840] = 1,
    ACTIONS(921), 1,
      sym__newline,
  [5844] = 1,
    ACTIONS(923), 1,
      sym__newline,
  [5848] = 1,
    ACTIONS(925), 1,
      sym_identifier,
  [5852] = 1,
    ACTIONS(927), 1,
      anon_sym_COLON,
  [5856] = 1,
    ACTIONS(929), 1,
      sym__newline,
  [5860] = 1,
    ACTIONS(931), 1,
      anon_sym_PAULI_DASHSUM,
  [5864] = 1,
    ACTIONS(933), 1,
      sym__newline,
  [5868] = 1,
    ACTIONS(935), 1,
      sym__newline,
  [5872] = 1,
    ACTIONS(937), 1,
      sym__newline,
  [5876] = 1,
    ACTIONS(939), 1,
      sym__newline,
  [5880] = 1,
    ACTIONS(941), 1,
      sym_identifier,
  [5884] = 1,
    ACTIONS(943), 1,
      sym__newline,
  [5888] = 1,
    ACTIONS(945), 1,
      sym__newline,
  [5892] = 1,
    ACTIONS(947), 1,
      sym_identifier,
  [5896] = 1,
    ACTIONS(949), 1,
      sym__newline,
  [5900] = 1,
    ACTIONS(951), 1,
      sym__newline,
  [5904] = 1,
    ACTIONS(364), 1,
      sym_identifier,
  [5908] = 1,
    ACTIONS(953), 1,
      anon_sym_COLON,
  [5912] = 1,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
  [5916] = 1,
    ACTIONS(957), 1,
      sym_identifier,
  [5920] = 1,
    ACTIONS(959), 1,
      sym_identifier,
  [5924] = 1,
    ACTIONS(961), 1,
      sym__newline,
  [5928] = 1,
    ACTIONS(963), 1,
      sym__newline,
  [5932] = 1,
    ACTIONS(965), 1,
      sym__newline,
  [5936] = 1,
    ACTIONS(887), 1,
      sym__newline,
  [5940] = 1,
    ACTIONS(967), 1,
      sym__newline,
  [5944] = 1,
    ACTIONS(969), 1,
      sym__newline,
  [5948] = 1,
    ACTIONS(971), 1,
      sym_identifier,
  [5952] = 1,
    ACTIONS(973), 1,
      sym__newline,
  [5956] = 1,
    ACTIONS(975), 1,
      sym__newline,
  [5960] = 1,
    ACTIONS(977), 1,
      sym__newline,
  [5964] = 1,
    ACTIONS(979), 1,
      anon_sym_DQUOTE,
  [5968] = 1,
    ACTIONS(981), 1,
      sym__newline,
  [5972] = 1,
    ACTIONS(983), 1,
      sym__newline,
  [5976] = 1,
    ACTIONS(985), 1,
      ts_builtin_sym_end,
  [5980] = 1,
    ACTIONS(987), 1,
      sym__newline,
  [5984] = 1,
    ACTIONS(989), 1,
      sym__newline,
  [5988] = 1,
    ACTIONS(991), 1,
      sym__newline,
  [5992] = 1,
    ACTIONS(993), 1,
      sym_identifier,
  [5996] = 1,
    ACTIONS(995), 1,
      sym__newline,
  [6000] = 1,
    ACTIONS(997), 1,
      anon_sym_LPAREN,
  [6004] = 1,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
  [6008] = 1,
    ACTIONS(1001), 1,
      sym__newline,
  [6012] = 1,
    ACTIONS(1003), 1,
      sym__newline,
  [6016] = 1,
    ACTIONS(1005), 1,
      sym_identifier,
  [6020] = 1,
    ACTIONS(1007), 1,
      sym__newline,
  [6024] = 1,
    ACTIONS(1009), 1,
      sym_identifier,
  [6028] = 1,
    ACTIONS(1011), 1,
      anon_sym_COLON,
  [6032] = 1,
    ACTIONS(1013), 1,
      sym__newline,
  [6036] = 1,
    ACTIONS(1015), 1,
      anon_sym_COLON,
  [6040] = 1,
    ACTIONS(1017), 1,
      anon_sym_COLON,
  [6044] = 1,
    ACTIONS(1019), 1,
      sym_identifier,
  [6048] = 1,
    ACTIONS(1021), 1,
      sym__newline,
  [6052] = 1,
    ACTIONS(1023), 1,
      sym__newline,
  [6056] = 1,
    ACTIONS(1025), 1,
      sym__newline,
  [6060] = 1,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
  [6064] = 1,
    ACTIONS(1029), 1,
      sym_identifier,
  [6068] = 1,
    ACTIONS(1031), 1,
      sym_identifier,
  [6072] = 1,
    ACTIONS(1033), 1,
      anon_sym_COLON,
  [6076] = 1,
    ACTIONS(1035), 1,
      anon_sym_DQUOTE,
  [6080] = 1,
    ACTIONS(1037), 1,
      sym_identifier,
  [6084] = 1,
    ACTIONS(1039), 1,
      sym__newline,
  [6088] = 1,
    ACTIONS(1041), 1,
      anon_sym_DQUOTE,
  [6092] = 1,
    ACTIONS(1043), 1,
      anon_sym_PAULI_DASHSUM,
  [6096] = 1,
    ACTIONS(1045), 1,
      anon_sym_AS,
  [6100] = 1,
    ACTIONS(1047), 1,
      sym__newline,
  [6104] = 1,
    ACTIONS(1049), 1,
      sym_identifier,
  [6108] = 1,
    ACTIONS(1051), 1,
      anon_sym_COLON,
  [6112] = 1,
    ACTIONS(1053), 1,
      sym__newline,
  [6116] = 1,
    ACTIONS(761), 1,
      sym__newline,
  [6120] = 1,
    ACTIONS(1055), 1,
      sym__newline,
  [6124] = 1,
    ACTIONS(1057), 1,
      sym_identifier,
  [6128] = 1,
    ACTIONS(1059), 1,
      sym_identifier,
  [6132] = 1,
    ACTIONS(1061), 1,
      sym__newline,
  [6136] = 1,
    ACTIONS(1063), 1,
      sym__newline,
  [6140] = 1,
    ACTIONS(1065), 1,
      anon_sym_DQUOTE,
  [6144] = 1,
    ACTIONS(1067), 1,
      sym__newline,
  [6148] = 1,
    ACTIONS(1069), 1,
      sym_identifier,
  [6152] = 1,
    ACTIONS(883), 1,
      sym__newline,
  [6156] = 1,
    ACTIONS(1071), 1,
      aux_sym__string_esc_inner_token1,
  [6160] = 1,
    ACTIONS(1073), 1,
      sym__newline,
  [6164] = 1,
    ACTIONS(1075), 1,
      sym_identifier,
  [6168] = 1,
    ACTIONS(800), 1,
      sym__newline,
  [6172] = 1,
    ACTIONS(1077), 1,
      sym_identifier,
  [6176] = 1,
    ACTIONS(221), 1,
      sym__newline,
  [6180] = 1,
    ACTIONS(1079), 1,
      sym_identifier,
  [6184] = 1,
    ACTIONS(1081), 1,
      anon_sym_DQUOTE,
  [6188] = 1,
    ACTIONS(1083), 1,
      anon_sym_COLON,
  [6192] = 1,
    ACTIONS(1085), 1,
      sym__newline,
  [6196] = 1,
    ACTIONS(1087), 1,
      sym__newline,
  [6200] = 1,
    ACTIONS(1089), 1,
      sym__newline,
  [6204] = 1,
    ACTIONS(1091), 1,
      sym_identifier,
  [6208] = 1,
    ACTIONS(1093), 1,
      anon_sym_AS,
  [6212] = 1,
    ACTIONS(1095), 1,
      sym__newline,
  [6216] = 1,
    ACTIONS(1097), 1,
      sym__newline,
  [6220] = 1,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
  [6224] = 1,
    ACTIONS(1101), 1,
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
  [SMALL_STATE(49)] = 2046,
  [SMALL_STATE(50)] = 2077,
  [SMALL_STATE(51)] = 2113,
  [SMALL_STATE(52)] = 2138,
  [SMALL_STATE(53)] = 2164,
  [SMALL_STATE(54)] = 2189,
  [SMALL_STATE(55)] = 2216,
  [SMALL_STATE(56)] = 2243,
  [SMALL_STATE(57)] = 2265,
  [SMALL_STATE(58)] = 2289,
  [SMALL_STATE(59)] = 2315,
  [SMALL_STATE(60)] = 2336,
  [SMALL_STATE(61)] = 2356,
  [SMALL_STATE(62)] = 2376,
  [SMALL_STATE(63)] = 2399,
  [SMALL_STATE(64)] = 2427,
  [SMALL_STATE(65)] = 2453,
  [SMALL_STATE(66)] = 2472,
  [SMALL_STATE(67)] = 2493,
  [SMALL_STATE(68)] = 2514,
  [SMALL_STATE(69)] = 2535,
  [SMALL_STATE(70)] = 2554,
  [SMALL_STATE(71)] = 2573,
  [SMALL_STATE(72)] = 2587,
  [SMALL_STATE(73)] = 2617,
  [SMALL_STATE(74)] = 2634,
  [SMALL_STATE(75)] = 2649,
  [SMALL_STATE(76)] = 2676,
  [SMALL_STATE(77)] = 2695,
  [SMALL_STATE(78)] = 2712,
  [SMALL_STATE(79)] = 2739,
  [SMALL_STATE(80)] = 2766,
  [SMALL_STATE(81)] = 2788,
  [SMALL_STATE(82)] = 2812,
  [SMALL_STATE(83)] = 2826,
  [SMALL_STATE(84)] = 2847,
  [SMALL_STATE(85)] = 2868,
  [SMALL_STATE(86)] = 2889,
  [SMALL_STATE(87)] = 2902,
  [SMALL_STATE(88)] = 2923,
  [SMALL_STATE(89)] = 2936,
  [SMALL_STATE(90)] = 2957,
  [SMALL_STATE(91)] = 2978,
  [SMALL_STATE(92)] = 2999,
  [SMALL_STATE(93)] = 3020,
  [SMALL_STATE(94)] = 3041,
  [SMALL_STATE(95)] = 3062,
  [SMALL_STATE(96)] = 3073,
  [SMALL_STATE(97)] = 3094,
  [SMALL_STATE(98)] = 3115,
  [SMALL_STATE(99)] = 3130,
  [SMALL_STATE(100)] = 3151,
  [SMALL_STATE(101)] = 3172,
  [SMALL_STATE(102)] = 3193,
  [SMALL_STATE(103)] = 3208,
  [SMALL_STATE(104)] = 3231,
  [SMALL_STATE(105)] = 3252,
  [SMALL_STATE(106)] = 3273,
  [SMALL_STATE(107)] = 3296,
  [SMALL_STATE(108)] = 3317,
  [SMALL_STATE(109)] = 3330,
  [SMALL_STATE(110)] = 3351,
  [SMALL_STATE(111)] = 3372,
  [SMALL_STATE(112)] = 3393,
  [SMALL_STATE(113)] = 3414,
  [SMALL_STATE(114)] = 3435,
  [SMALL_STATE(115)] = 3456,
  [SMALL_STATE(116)] = 3477,
  [SMALL_STATE(117)] = 3498,
  [SMALL_STATE(118)] = 3519,
  [SMALL_STATE(119)] = 3540,
  [SMALL_STATE(120)] = 3561,
  [SMALL_STATE(121)] = 3571,
  [SMALL_STATE(122)] = 3583,
  [SMALL_STATE(123)] = 3601,
  [SMALL_STATE(124)] = 3621,
  [SMALL_STATE(125)] = 3631,
  [SMALL_STATE(126)] = 3643,
  [SMALL_STATE(127)] = 3653,
  [SMALL_STATE(128)] = 3663,
  [SMALL_STATE(129)] = 3675,
  [SMALL_STATE(130)] = 3685,
  [SMALL_STATE(131)] = 3697,
  [SMALL_STATE(132)] = 3707,
  [SMALL_STATE(133)] = 3717,
  [SMALL_STATE(134)] = 3729,
  [SMALL_STATE(135)] = 3741,
  [SMALL_STATE(136)] = 3753,
  [SMALL_STATE(137)] = 3765,
  [SMALL_STATE(138)] = 3779,
  [SMALL_STATE(139)] = 3788,
  [SMALL_STATE(140)] = 3803,
  [SMALL_STATE(141)] = 3816,
  [SMALL_STATE(142)] = 3831,
  [SMALL_STATE(143)] = 3842,
  [SMALL_STATE(144)] = 3859,
  [SMALL_STATE(145)] = 3870,
  [SMALL_STATE(146)] = 3883,
  [SMALL_STATE(147)] = 3894,
  [SMALL_STATE(148)] = 3905,
  [SMALL_STATE(149)] = 3916,
  [SMALL_STATE(150)] = 3933,
  [SMALL_STATE(151)] = 3944,
  [SMALL_STATE(152)] = 3955,
  [SMALL_STATE(153)] = 3970,
  [SMALL_STATE(154)] = 3981,
  [SMALL_STATE(155)] = 3990,
  [SMALL_STATE(156)] = 4000,
  [SMALL_STATE(157)] = 4012,
  [SMALL_STATE(158)] = 4026,
  [SMALL_STATE(159)] = 4036,
  [SMALL_STATE(160)] = 4044,
  [SMALL_STATE(161)] = 4056,
  [SMALL_STATE(162)] = 4066,
  [SMALL_STATE(163)] = 4080,
  [SMALL_STATE(164)] = 4096,
  [SMALL_STATE(165)] = 4110,
  [SMALL_STATE(166)] = 4126,
  [SMALL_STATE(167)] = 4136,
  [SMALL_STATE(168)] = 4152,
  [SMALL_STATE(169)] = 4168,
  [SMALL_STATE(170)] = 4179,
  [SMALL_STATE(171)] = 4190,
  [SMALL_STATE(172)] = 4201,
  [SMALL_STATE(173)] = 4212,
  [SMALL_STATE(174)] = 4223,
  [SMALL_STATE(175)] = 4236,
  [SMALL_STATE(176)] = 4247,
  [SMALL_STATE(177)] = 4258,
  [SMALL_STATE(178)] = 4269,
  [SMALL_STATE(179)] = 4282,
  [SMALL_STATE(180)] = 4293,
  [SMALL_STATE(181)] = 4302,
  [SMALL_STATE(182)] = 4313,
  [SMALL_STATE(183)] = 4324,
  [SMALL_STATE(184)] = 4335,
  [SMALL_STATE(185)] = 4346,
  [SMALL_STATE(186)] = 4357,
  [SMALL_STATE(187)] = 4370,
  [SMALL_STATE(188)] = 4381,
  [SMALL_STATE(189)] = 4392,
  [SMALL_STATE(190)] = 4405,
  [SMALL_STATE(191)] = 4416,
  [SMALL_STATE(192)] = 4429,
  [SMALL_STATE(193)] = 4440,
  [SMALL_STATE(194)] = 4447,
  [SMALL_STATE(195)] = 4458,
  [SMALL_STATE(196)] = 4469,
  [SMALL_STATE(197)] = 4482,
  [SMALL_STATE(198)] = 4495,
  [SMALL_STATE(199)] = 4508,
  [SMALL_STATE(200)] = 4521,
  [SMALL_STATE(201)] = 4532,
  [SMALL_STATE(202)] = 4539,
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
  [SMALL_STATE(220)] = 4725,
  [SMALL_STATE(221)] = 4733,
  [SMALL_STATE(222)] = 4743,
  [SMALL_STATE(223)] = 4753,
  [SMALL_STATE(224)] = 4763,
  [SMALL_STATE(225)] = 4771,
  [SMALL_STATE(226)] = 4781,
  [SMALL_STATE(227)] = 4791,
  [SMALL_STATE(228)] = 4801,
  [SMALL_STATE(229)] = 4811,
  [SMALL_STATE(230)] = 4819,
  [SMALL_STATE(231)] = 4825,
  [SMALL_STATE(232)] = 4835,
  [SMALL_STATE(233)] = 4845,
  [SMALL_STATE(234)] = 4851,
  [SMALL_STATE(235)] = 4861,
  [SMALL_STATE(236)] = 4871,
  [SMALL_STATE(237)] = 4879,
  [SMALL_STATE(238)] = 4887,
  [SMALL_STATE(239)] = 4897,
  [SMALL_STATE(240)] = 4907,
  [SMALL_STATE(241)] = 4917,
  [SMALL_STATE(242)] = 4925,
  [SMALL_STATE(243)] = 4935,
  [SMALL_STATE(244)] = 4941,
  [SMALL_STATE(245)] = 4951,
  [SMALL_STATE(246)] = 4957,
  [SMALL_STATE(247)] = 4967,
  [SMALL_STATE(248)] = 4977,
  [SMALL_STATE(249)] = 4987,
  [SMALL_STATE(250)] = 4997,
  [SMALL_STATE(251)] = 5007,
  [SMALL_STATE(252)] = 5017,
  [SMALL_STATE(253)] = 5027,
  [SMALL_STATE(254)] = 5037,
  [SMALL_STATE(255)] = 5047,
  [SMALL_STATE(256)] = 5057,
  [SMALL_STATE(257)] = 5067,
  [SMALL_STATE(258)] = 5077,
  [SMALL_STATE(259)] = 5085,
  [SMALL_STATE(260)] = 5095,
  [SMALL_STATE(261)] = 5103,
  [SMALL_STATE(262)] = 5113,
  [SMALL_STATE(263)] = 5121,
  [SMALL_STATE(264)] = 5131,
  [SMALL_STATE(265)] = 5141,
  [SMALL_STATE(266)] = 5151,
  [SMALL_STATE(267)] = 5161,
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
  [SMALL_STATE(285)] = 5339,
  [SMALL_STATE(286)] = 5349,
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
  [SMALL_STATE(306)] = 5525,
  [SMALL_STATE(307)] = 5532,
  [SMALL_STATE(308)] = 5539,
  [SMALL_STATE(309)] = 5546,
  [SMALL_STATE(310)] = 5553,
  [SMALL_STATE(311)] = 5560,
  [SMALL_STATE(312)] = 5567,
  [SMALL_STATE(313)] = 5574,
  [SMALL_STATE(314)] = 5579,
  [SMALL_STATE(315)] = 5584,
  [SMALL_STATE(316)] = 5591,
  [SMALL_STATE(317)] = 5596,
  [SMALL_STATE(318)] = 5601,
  [SMALL_STATE(319)] = 5606,
  [SMALL_STATE(320)] = 5611,
  [SMALL_STATE(321)] = 5616,
  [SMALL_STATE(322)] = 5623,
  [SMALL_STATE(323)] = 5630,
  [SMALL_STATE(324)] = 5637,
  [SMALL_STATE(325)] = 5644,
  [SMALL_STATE(326)] = 5651,
  [SMALL_STATE(327)] = 5658,
  [SMALL_STATE(328)] = 5665,
  [SMALL_STATE(329)] = 5672,
  [SMALL_STATE(330)] = 5679,
  [SMALL_STATE(331)] = 5686,
  [SMALL_STATE(332)] = 5693,
  [SMALL_STATE(333)] = 5700,
  [SMALL_STATE(334)] = 5707,
  [SMALL_STATE(335)] = 5714,
  [SMALL_STATE(336)] = 5721,
  [SMALL_STATE(337)] = 5728,
  [SMALL_STATE(338)] = 5735,
  [SMALL_STATE(339)] = 5742,
  [SMALL_STATE(340)] = 5749,
  [SMALL_STATE(341)] = 5756,
  [SMALL_STATE(342)] = 5763,
  [SMALL_STATE(343)] = 5770,
  [SMALL_STATE(344)] = 5777,
  [SMALL_STATE(345)] = 5784,
  [SMALL_STATE(346)] = 5791,
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
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quil, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quil, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quil_repeat2, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(332),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(332),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(406),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(451),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(117),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(300),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(307),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(143),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(156),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(115),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(296),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(114),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(123),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(113),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(104),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(100),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(99),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(97),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(83),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(438),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(91),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(90),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(13),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(241),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(321),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(323),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(326),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(329),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(235),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(400),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(399),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(234),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(228),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(207),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(208),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(221),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(222),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(223),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(225),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2), SHIFT_REPEAT(79),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(11),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(10),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pragma_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(9),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__int, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__int, 2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(8),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_name, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_name, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quil_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quil_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quil_repeat1, 2), SHIFT_REPEAT(14),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quil_repeat2, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__newline_tab, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay_qubits, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(49),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(432),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(53),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_designator, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_designator, 1),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(54),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 1),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(57),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delay_frames_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_delay_frames_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_delay_frames_repeat1, 2), SHIFT_REPEAT(401),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delay_frames_repeat1, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_delay_frames_repeat1, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newline_tab, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 4),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame, 4),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(62),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__signed_int, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__signed_int, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 1),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(374),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(158),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(426),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(204),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 4),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 3),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__power, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 4),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__power, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__power, 3),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__power, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__product, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__product, 3),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(160),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row, 1),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(164),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_variables, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 9, .production_id = 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_variables, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 6, .production_id = 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_param, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 5, .production_id = 1),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declare_repeat1, 2), SHIFT_REPEAT(306),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declare_repeat1, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 8, .production_id = 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_frame_repeat1, 2), SHIFT_REPEAT(317),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qubit_variables_repeat1, 2), SHIFT_REPEAT(337),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qubit_variables_repeat1, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measure, 2),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qubit_variables_repeat1, 2),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qubit_variables_repeat1, 2), SHIFT_REPEAT(346),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_frame, 4),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(197),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_params_repeat1, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform_name, 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform_name, 1),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay_frames, 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 3, .production_id = 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_scale, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_swap_phase, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_phase, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_phase, 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_frequency, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_frequency, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform_name, 3),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform_name, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay_qubits, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 4),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(25),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2), SHIFT_REPEAT(318),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__indented_instrs_repeat1, 2), SHIFT_REPEAT(319),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_binary_op, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_pauli_gate_repeat1, 2), SHIFT_REPEAT(314),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_pauli_gate, 8),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_waveform_repeat1, 2),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_waveform_repeat1, 2), SHIFT_REPEAT(301),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 4),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(39),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_spec, 4),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_pauli_gate, 7),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(341),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_pauli_gate, 6),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 6, .production_id = 2),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables, 4),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_descriptor, 3),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_descriptor, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform, 5),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 5),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform, 4),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 4),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_variable, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_variable, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables, 3),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_frame, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_binary, 1),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_unary, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_attr, 1),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_circuit, 5),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__indented_instrs_repeat1, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reset, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_unless, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_when, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_label, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 5),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pulse, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_comparison, 4),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_number, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 4),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_waveform, 5),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay, 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_measure_calibration, 5),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_store, 4),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_esc_inner, 2),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate, 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_calibration, 5),
  [985] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 4),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_capture, 4),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pauli_term, 5),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pulse, 4),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 1),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_capture, 5),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measure, 3),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_waveform, 4),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_pauli_gate_repeat1, 2),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_circuit, 4),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 4),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_binary_op, 3),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 3),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exchange, 3),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 6),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert, 3),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_as_permutation, 7),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 7),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_circuit, 6),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_measure_calibration, 6),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_calibration, 6),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
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
