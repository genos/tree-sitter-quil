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
#define STATE_COUNT 562
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 206
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

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
  sym_instr = 101,
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
  sym_gate_no_qubits = 115,
  sym_modifiers = 116,
  sym_modifier = 117,
  sym_indented_instrs = 118,
  sym_params = 119,
  sym_param = 120,
  sym_matrix = 121,
  sym_matrix_row = 122,
  sym_expression = 123,
  sym_product = 124,
  sym_power = 125,
  sym_atom = 126,
  sym_variables = 127,
  sym_variable = 128,
  sym_fence = 129,
  sym_pulse = 130,
  sym_delay = 131,
  sym_delay_qubits = 132,
  sym_delay_frames = 133,
  sym_set_frequency = 134,
  sym_shift_frequency = 135,
  sym_shift_phase = 136,
  sym_set_phase = 137,
  sym_swap_phase = 138,
  sym_set_scale = 139,
  sym_declare = 140,
  sym_offset_descriptor = 141,
  sym_capture = 142,
  sym_raw_capture = 143,
  sym_addr = 144,
  sym_pragma = 145,
  sym_pragma_name = 146,
  sym_measure = 147,
  sym_halt = 148,
  sym_nop = 149,
  sym_include = 150,
  sym_def_label = 151,
  sym_jump = 152,
  sym_jump_when = 153,
  sym_jump_unless = 154,
  sym_label = 155,
  sym_reset = 156,
  sym_wait = 157,
  sym_store = 158,
  sym_load = 159,
  sym_convert = 160,
  sym_exchange = 161,
  sym_move = 162,
  sym_classical_unary = 163,
  sym_classical_binary = 164,
  sym_logical_binary_op = 165,
  sym_arithmetic_binary_op = 166,
  sym_classical_comparison = 167,
  sym_qubit_designator = 168,
  sym_qubit = 169,
  sym_qubit_variables = 170,
  sym_qubit_variable = 171,
  sym_named_param = 172,
  sym_waveform = 173,
  sym_waveform_name = 174,
  sym_frame = 175,
  sym_function = 176,
  sym_number = 177,
  sym_int_n = 178,
  sym_float_n = 179,
  sym_signed_number = 180,
  sym_keyword = 181,
  sym_name = 182,
  sym__newline_tab = 183,
  sym__float = 184,
  sym__decimal = 185,
  sym__signed_int = 186,
  aux_sym__int = 187,
  sym__string = 188,
  sym__escaped_string = 189,
  sym__string_esc_inner = 190,
  aux_sym_def_pauli_gate_repeat1 = 191,
  aux_sym_def_circuit_repeat1 = 192,
  aux_sym_def_frame_repeat1 = 193,
  aux_sym_def_frame_repeat2 = 194,
  aux_sym_modifiers_repeat1 = 195,
  aux_sym_indented_instrs_repeat1 = 196,
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
  [sym_instr] = "instr",
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
  [sym_gate_no_qubits] = "gate_no_qubits",
  [sym_modifiers] = "modifiers",
  [sym_modifier] = "modifier",
  [sym_indented_instrs] = "indented_instrs",
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
  [aux_sym_def_pauli_gate_repeat1] = "def_pauli_gate_repeat1",
  [aux_sym_def_circuit_repeat1] = "def_circuit_repeat1",
  [aux_sym_def_frame_repeat1] = "def_frame_repeat1",
  [aux_sym_def_frame_repeat2] = "def_frame_repeat2",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
  [aux_sym_indented_instrs_repeat1] = "indented_instrs_repeat1",
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
  [sym_instr] = sym_instr,
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
  [sym_gate_no_qubits] = sym_gate_no_qubits,
  [sym_modifiers] = sym_modifiers,
  [sym_modifier] = sym_modifier,
  [sym_indented_instrs] = sym_indented_instrs,
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
  [aux_sym_def_pauli_gate_repeat1] = aux_sym_def_pauli_gate_repeat1,
  [aux_sym_def_circuit_repeat1] = aux_sym_def_circuit_repeat1,
  [aux_sym_def_frame_repeat1] = aux_sym_def_frame_repeat1,
  [aux_sym_def_frame_repeat2] = aux_sym_def_frame_repeat2,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
  [aux_sym_indented_instrs_repeat1] = aux_sym_indented_instrs_repeat1,
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
  [sym_instr] = {
    .visible = true,
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
  [sym_gate_no_qubits] = {
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
  [sym_indented_instrs] = {
    .visible = true,
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
  [aux_sym_def_frame_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indented_instrs_repeat1] = {
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
  [5] = 3,
  [6] = 4,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 9,
  [15] = 15,
  [16] = 15,
  [17] = 12,
  [18] = 11,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 32,
  [44] = 31,
  [45] = 35,
  [46] = 40,
  [47] = 37,
  [48] = 38,
  [49] = 42,
  [50] = 33,
  [51] = 39,
  [52] = 34,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 55,
  [59] = 59,
  [60] = 59,
  [61] = 9,
  [62] = 62,
  [63] = 63,
  [64] = 62,
  [65] = 63,
  [66] = 9,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 70,
  [73] = 9,
  [74] = 74,
  [75] = 69,
  [76] = 76,
  [77] = 71,
  [78] = 78,
  [79] = 74,
  [80] = 9,
  [81] = 78,
  [82] = 76,
  [83] = 83,
  [84] = 9,
  [85] = 85,
  [86] = 21,
  [87] = 62,
  [88] = 88,
  [89] = 9,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 62,
  [94] = 67,
  [95] = 95,
  [96] = 67,
  [97] = 90,
  [98] = 91,
  [99] = 95,
  [100] = 92,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 103,
  [105] = 105,
  [106] = 106,
  [107] = 102,
  [108] = 108,
  [109] = 101,
  [110] = 63,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 111,
  [118] = 118,
  [119] = 119,
  [120] = 116,
  [121] = 121,
  [122] = 122,
  [123] = 118,
  [124] = 63,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 112,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 9,
  [135] = 133,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 126,
  [143] = 121,
  [144] = 128,
  [145] = 145,
  [146] = 114,
  [147] = 113,
  [148] = 148,
  [149] = 136,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 125,
  [158] = 148,
  [159] = 106,
  [160] = 105,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 115,
  [165] = 127,
  [166] = 166,
  [167] = 151,
  [168] = 153,
  [169] = 154,
  [170] = 155,
  [171] = 161,
  [172] = 172,
  [173] = 137,
  [174] = 174,
  [175] = 119,
  [176] = 172,
  [177] = 174,
  [178] = 152,
  [179] = 156,
  [180] = 132,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 182,
  [189] = 189,
  [190] = 150,
  [191] = 140,
  [192] = 163,
  [193] = 187,
  [194] = 131,
  [195] = 181,
  [196] = 196,
  [197] = 197,
  [198] = 196,
  [199] = 197,
  [200] = 184,
  [201] = 185,
  [202] = 186,
  [203] = 78,
  [204] = 76,
  [205] = 205,
  [206] = 206,
  [207] = 206,
  [208] = 78,
  [209] = 9,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 105,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 214,
  [221] = 212,
  [222] = 222,
  [223] = 223,
  [224] = 106,
  [225] = 74,
  [226] = 222,
  [227] = 74,
  [228] = 219,
  [229] = 76,
  [230] = 162,
  [231] = 116,
  [232] = 74,
  [233] = 233,
  [234] = 211,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 21,
  [240] = 240,
  [241] = 241,
  [242] = 116,
  [243] = 74,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 213,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 258,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 251,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 248,
  [283] = 263,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 256,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 279,
  [295] = 252,
  [296] = 293,
  [297] = 236,
  [298] = 298,
  [299] = 255,
  [300] = 245,
  [301] = 74,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 260,
  [309] = 162,
  [310] = 310,
  [311] = 270,
  [312] = 312,
  [313] = 279,
  [314] = 314,
  [315] = 240,
  [316] = 241,
  [317] = 292,
  [318] = 237,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
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
  [339] = 324,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 335,
  [344] = 304,
  [345] = 326,
  [346] = 346,
  [347] = 337,
  [348] = 262,
  [349] = 349,
  [350] = 328,
  [351] = 325,
  [352] = 352,
  [353] = 336,
  [354] = 354,
  [355] = 271,
  [356] = 272,
  [357] = 273,
  [358] = 358,
  [359] = 328,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 274,
  [366] = 275,
  [367] = 277,
  [368] = 368,
  [369] = 369,
  [370] = 280,
  [371] = 371,
  [372] = 332,
  [373] = 373,
  [374] = 307,
  [375] = 286,
  [376] = 302,
  [377] = 330,
  [378] = 378,
  [379] = 379,
  [380] = 349,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 346,
  [385] = 361,
  [386] = 319,
  [387] = 360,
  [388] = 388,
  [389] = 88,
  [390] = 381,
  [391] = 379,
  [392] = 378,
  [393] = 362,
  [394] = 358,
  [395] = 364,
  [396] = 354,
  [397] = 352,
  [398] = 398,
  [399] = 382,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 373,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 244,
  [411] = 407,
  [412] = 404,
  [413] = 413,
  [414] = 400,
  [415] = 325,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 320,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 427,
  [439] = 322,
  [440] = 440,
  [441] = 441,
  [442] = 418,
  [443] = 443,
  [444] = 434,
  [445] = 445,
  [446] = 333,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 338,
  [451] = 451,
  [452] = 420,
  [453] = 427,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 443,
  [459] = 418,
  [460] = 371,
  [461] = 461,
  [462] = 462,
  [463] = 421,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 449,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 451,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 449,
  [478] = 447,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 464,
  [485] = 465,
  [486] = 466,
  [487] = 467,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 491,
  [493] = 493,
  [494] = 494,
  [495] = 474,
  [496] = 496,
  [497] = 497,
  [498] = 449,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 441,
  [503] = 503,
  [504] = 454,
  [505] = 505,
  [506] = 426,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 520,
  [529] = 529,
  [530] = 519,
  [531] = 531,
  [532] = 532,
  [533] = 21,
  [534] = 519,
  [535] = 519,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 542,
  [545] = 527,
  [546] = 546,
  [547] = 517,
  [548] = 548,
  [549] = 510,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 557,
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
      if (lookahead == '0') ADVANCE(7);
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
          lookahead == ' ') SKIP(6)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(497);
      if (lookahead == 'P') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(500);
      if (lookahead == 'P') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(451);
      if (lookahead == 'W') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(116);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 27:
      if (lookahead == '9') ADVANCE(586);
      END_STATE();
    case 28:
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
          lookahead == ' ') SKIP(28)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'H') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(102);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 41:
      if (lookahead == 'B') ADVANCE(77);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(138);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(139);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(460);
      if (lookahead == 'D') ADVANCE(263);
      if (lookahead == 'F') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(122);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(118);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(136);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(210);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 63:
      if (lookahead == 'F') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'F') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'F') ADVANCE(109);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(112);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(206);
      END_STATE();
    case 68:
      if (lookahead == 'H') ADVANCE(29);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(137);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(36);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'J') ADVANCE(61);
      END_STATE();
    case 78:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 79:
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'L') ADVANCE(115);
      END_STATE();
    case 81:
      if (lookahead == 'L') ADVANCE(25);
      END_STATE();
    case 82:
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 83:
      if (lookahead == 'M') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 'M') ADVANCE(130);
      END_STATE();
    case 85:
      if (lookahead == 'M') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(67);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(173);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(161);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(75);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(120);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 93:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 94:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 95:
      if (lookahead == 'O') ADVANCE(88);
      END_STATE();
    case 96:
      if (lookahead == 'P') ADVANCE(119);
      END_STATE();
    case 97:
      if (lookahead == 'P') ADVANCE(78);
      END_STATE();
    case 98:
      if (lookahead == 'P') ADVANCE(127);
      END_STATE();
    case 99:
      if (lookahead == 'Q') ADVANCE(131);
      END_STATE();
    case 100:
      if (lookahead == 'Q') ADVANCE(132);
      END_STATE();
    case 101:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 102:
      if (lookahead == 'R') ADVANCE(48);
      END_STATE();
    case 103:
      if (lookahead == 'R') ADVANCE(50);
      END_STATE();
    case 104:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 113:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 114:
      if (lookahead == 'S') ADVANCE(156);
      END_STATE();
    case 115:
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 116:
      if (lookahead == 'S') ADVANCE(129);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(208);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(175);
      END_STATE();
    case 119:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 120:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(106);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 128:
      if (lookahead == 'U') ADVANCE(79);
      END_STATE();
    case 129:
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 130:
      if (lookahead == 'U') ADVANCE(125);
      END_STATE();
    case 131:
      if (lookahead == 'U') ADVANCE(59);
      END_STATE();
    case 132:
      if (lookahead == 'U') ADVANCE(60);
      END_STATE();
    case 133:
      if (lookahead == 'U') ADVANCE(107);
      END_STATE();
    case 134:
      if (lookahead == 'U') ADVANCE(110);
      END_STATE();
    case 135:
      if (lookahead == 'W') ADVANCE(20);
      END_STATE();
    case 136:
      if (lookahead == 'W') ADVANCE(38);
      END_STATE();
    case 137:
      if (lookahead == 'X') ADVANCE(158);
      END_STATE();
    case 138:
      if (lookahead == 'Y') ADVANCE(177);
      END_STATE();
    case 139:
      if (lookahead == 'Y') ADVANCE(171);
      END_STATE();
    case 140:
      if (lookahead == '\\') ADVANCE(587);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 142:
      if (eof) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(7);
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
          lookahead == ' ') SKIP(142)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 143:
      if (eof) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(395);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 144:
      if (eof) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(7);
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
          lookahead == ' ') SKIP(144)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 145:
      if (eof) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'E') ADVANCE(582);
      if (lookahead == 'O') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(68);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      END_STATE();
    case 146:
      if (eof) ADVANCE(153);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 147:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(205);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 148:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(395);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 149:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == 'A') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 150:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(7);
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
          lookahead == ' ') SKIP(150)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 151:
      if (eof) ADVANCE(153);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(392);
      if (lookahead == 'E') ADVANCE(584);
      if (lookahead == 'S') ADVANCE(395);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 152:
      if (eof) ADVANCE(153);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(186);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'C') ADVANCE(30);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'E') ADVANCE(582);
      if (lookahead == 'H') ADVANCE(35);
      if (lookahead == 'I') ADVANCE(89);
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == 'O') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '^') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      END_STATE();
    case 153:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DEFGATE);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DEFFRAME);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DEFWAVEFORM);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DEFCAL);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_MEASURE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_CONTROLLED);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DAGGER);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_FORKED);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DELAY);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_SHIFT_DASHFREQUENCY);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SHIFT_DASHPHASE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SET_DASHPHASE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SWAP_DASHPHASE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SET_DASHSCALE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DECLARE);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PRAGMA);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_HALT);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_NOP);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LABEL);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_JUMP);
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_JUMP_DASHWHEN);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_JUMP_DASHUNLESS);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_STORE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LOAD);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_CONVERT);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EXCHANGE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_MOVE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_NEG);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_IOR);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_ADD);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_MUL);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DIV);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_GE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SIN);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COS);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SQRT);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EXP);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_CIS);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_nonblocking);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_FILTER_DASHNODE);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(464);
      if (lookahead == 'O') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(556);
      if (lookahead == 'E') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(486);
      if (lookahead == 'I') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(409);
      if (lookahead == 'I') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'B') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'B') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'B') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'B') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(387);
      if (lookahead == 'P') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(415);
      if (lookahead == 'L') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'D') ADVANCE(319);
      if (lookahead == 'N') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'D') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'D') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'D') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'D') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'D') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'D') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'D') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'D') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'T') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(380);
      if (lookahead == 'O') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(379);
      if (lookahead == 'R') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(504);
      if (lookahead == 'O') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'Q') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'J') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'K') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'K') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(516);
      if (lookahead == 'R') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'M') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'M') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'M') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'M') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'M') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'M') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'M') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(309);
      if (lookahead == 'O') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(531);
      if (lookahead == 'S') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(310);
      if (lookahead == 'O') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'Q') ADVANCE(242);
      if (lookahead == 'X') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'Q') ADVANCE(242);
      if (lookahead == 'X') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'Q') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'Q') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'Q') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'Q') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(351);
      if (lookahead == 'V') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead == 'U') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(480);
      if (lookahead == 'V') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'V') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'V') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'V') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'W') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'W') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'X') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'X') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'Y') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'Y') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'Y') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'Y') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'Y') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(12);
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
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'Q') ADVANCE(242);
      if (lookahead == 'X') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == '-') ADVANCE(19);
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
      if (lookahead == '\\') ADVANCE(140);
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
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 142},
  [4] = {.lex_state = 142},
  [5] = {.lex_state = 150},
  [6] = {.lex_state = 150},
  [7] = {.lex_state = 142},
  [8] = {.lex_state = 150},
  [9] = {.lex_state = 142},
  [10] = {.lex_state = 142},
  [11] = {.lex_state = 142},
  [12] = {.lex_state = 142},
  [13] = {.lex_state = 150},
  [14] = {.lex_state = 150},
  [15] = {.lex_state = 142},
  [16] = {.lex_state = 150},
  [17] = {.lex_state = 150},
  [18] = {.lex_state = 150},
  [19] = {.lex_state = 150},
  [20] = {.lex_state = 150},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 143},
  [23] = {.lex_state = 148},
  [24] = {.lex_state = 148},
  [25] = {.lex_state = 148},
  [26] = {.lex_state = 148},
  [27] = {.lex_state = 148},
  [28] = {.lex_state = 148},
  [29] = {.lex_state = 148},
  [30] = {.lex_state = 148},
  [31] = {.lex_state = 148},
  [32] = {.lex_state = 148},
  [33] = {.lex_state = 148},
  [34] = {.lex_state = 148},
  [35] = {.lex_state = 148},
  [36] = {.lex_state = 148},
  [37] = {.lex_state = 148},
  [38] = {.lex_state = 148},
  [39] = {.lex_state = 148},
  [40] = {.lex_state = 148},
  [41] = {.lex_state = 148},
  [42] = {.lex_state = 148},
  [43] = {.lex_state = 148},
  [44] = {.lex_state = 148},
  [45] = {.lex_state = 148},
  [46] = {.lex_state = 148},
  [47] = {.lex_state = 148},
  [48] = {.lex_state = 148},
  [49] = {.lex_state = 148},
  [50] = {.lex_state = 148},
  [51] = {.lex_state = 148},
  [52] = {.lex_state = 148},
  [53] = {.lex_state = 148},
  [54] = {.lex_state = 148},
  [55] = {.lex_state = 148},
  [56] = {.lex_state = 148},
  [57] = {.lex_state = 148},
  [58] = {.lex_state = 148},
  [59] = {.lex_state = 148},
  [60] = {.lex_state = 148},
  [61] = {.lex_state = 144},
  [62] = {.lex_state = 144},
  [63] = {.lex_state = 143},
  [64] = {.lex_state = 151},
  [65] = {.lex_state = 148},
  [66] = {.lex_state = 151},
  [67] = {.lex_state = 143},
  [68] = {.lex_state = 148},
  [69] = {.lex_state = 143},
  [70] = {.lex_state = 143},
  [71] = {.lex_state = 143},
  [72] = {.lex_state = 148},
  [73] = {.lex_state = 143},
  [74] = {.lex_state = 143},
  [75] = {.lex_state = 148},
  [76] = {.lex_state = 143},
  [77] = {.lex_state = 148},
  [78] = {.lex_state = 143},
  [79] = {.lex_state = 148},
  [80] = {.lex_state = 148},
  [81] = {.lex_state = 148},
  [82] = {.lex_state = 148},
  [83] = {.lex_state = 148},
  [84] = {.lex_state = 145},
  [85] = {.lex_state = 148},
  [86] = {.lex_state = 148},
  [87] = {.lex_state = 145},
  [88] = {.lex_state = 148},
  [89] = {.lex_state = 152},
  [90] = {.lex_state = 145},
  [91] = {.lex_state = 145},
  [92] = {.lex_state = 145},
  [93] = {.lex_state = 152},
  [94] = {.lex_state = 147},
  [95] = {.lex_state = 26},
  [96] = {.lex_state = 146},
  [97] = {.lex_state = 152},
  [98] = {.lex_state = 152},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 152},
  [101] = {.lex_state = 142},
  [102] = {.lex_state = 145},
  [103] = {.lex_state = 145},
  [104] = {.lex_state = 152},
  [105] = {.lex_state = 147},
  [106] = {.lex_state = 147},
  [107] = {.lex_state = 152},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 142},
  [113] = {.lex_state = 145},
  [114] = {.lex_state = 145},
  [115] = {.lex_state = 142},
  [116] = {.lex_state = 147},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 152},
  [119] = {.lex_state = 145},
  [120] = {.lex_state = 142},
  [121] = {.lex_state = 142},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 152},
  [124] = {.lex_state = 142},
  [125] = {.lex_state = 142},
  [126] = {.lex_state = 142},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 142},
  [132] = {.lex_state = 142},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 147},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 142},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 152},
  [147] = {.lex_state = 152},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 142},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 142},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 142},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 142},
  [160] = {.lex_state = 142},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 149},
  [163] = {.lex_state = 142},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 152},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 149},
  [184] = {.lex_state = 142},
  [185] = {.lex_state = 142},
  [186] = {.lex_state = 142},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 142},
  [197] = {.lex_state = 142},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 147},
  [204] = {.lex_state = 147},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 146},
  [209] = {.lex_state = 146},
  [210] = {.lex_state = 45},
  [211] = {.lex_state = 142},
  [212] = {.lex_state = 147},
  [213] = {.lex_state = 142},
  [214] = {.lex_state = 147},
  [215] = {.lex_state = 26},
  [216] = {.lex_state = 142},
  [217] = {.lex_state = 152},
  [218] = {.lex_state = 142},
  [219] = {.lex_state = 147},
  [220] = {.lex_state = 147},
  [221] = {.lex_state = 147},
  [222] = {.lex_state = 147},
  [223] = {.lex_state = 45},
  [224] = {.lex_state = 26},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 147},
  [227] = {.lex_state = 147},
  [228] = {.lex_state = 147},
  [229] = {.lex_state = 146},
  [230] = {.lex_state = 142},
  [231] = {.lex_state = 26},
  [232] = {.lex_state = 146},
  [233] = {.lex_state = 142},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 142},
  [236] = {.lex_state = 142},
  [237] = {.lex_state = 145},
  [238] = {.lex_state = 147},
  [239] = {.lex_state = 152},
  [240] = {.lex_state = 146},
  [241] = {.lex_state = 145},
  [242] = {.lex_state = 147},
  [243] = {.lex_state = 142},
  [244] = {.lex_state = 147},
  [245] = {.lex_state = 145},
  [246] = {.lex_state = 142},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 146},
  [249] = {.lex_state = 142},
  [250] = {.lex_state = 142},
  [251] = {.lex_state = 146},
  [252] = {.lex_state = 145},
  [253] = {.lex_state = 142},
  [254] = {.lex_state = 142},
  [255] = {.lex_state = 145},
  [256] = {.lex_state = 147},
  [257] = {.lex_state = 142},
  [258] = {.lex_state = 147},
  [259] = {.lex_state = 147},
  [260] = {.lex_state = 147},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 142},
  [263] = {.lex_state = 147},
  [264] = {.lex_state = 142},
  [265] = {.lex_state = 149},
  [266] = {.lex_state = 142},
  [267] = {.lex_state = 142},
  [268] = {.lex_state = 142},
  [269] = {.lex_state = 147},
  [270] = {.lex_state = 147},
  [271] = {.lex_state = 145},
  [272] = {.lex_state = 142},
  [273] = {.lex_state = 142},
  [274] = {.lex_state = 142},
  [275] = {.lex_state = 142},
  [276] = {.lex_state = 142},
  [277] = {.lex_state = 142},
  [278] = {.lex_state = 142},
  [279] = {.lex_state = 147},
  [280] = {.lex_state = 142},
  [281] = {.lex_state = 45},
  [282] = {.lex_state = 149},
  [283] = {.lex_state = 147},
  [284] = {.lex_state = 142},
  [285] = {.lex_state = 142},
  [286] = {.lex_state = 142},
  [287] = {.lex_state = 142},
  [288] = {.lex_state = 147},
  [289] = {.lex_state = 142},
  [290] = {.lex_state = 142},
  [291] = {.lex_state = 142},
  [292] = {.lex_state = 147},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 142},
  [295] = {.lex_state = 152},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 147},
  [299] = {.lex_state = 152},
  [300] = {.lex_state = 152},
  [301] = {.lex_state = 142},
  [302] = {.lex_state = 142},
  [303] = {.lex_state = 147},
  [304] = {.lex_state = 142},
  [305] = {.lex_state = 142},
  [306] = {.lex_state = 142},
  [307] = {.lex_state = 147},
  [308] = {.lex_state = 147},
  [309] = {.lex_state = 147},
  [310] = {.lex_state = 142},
  [311] = {.lex_state = 147},
  [312] = {.lex_state = 142},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 147},
  [316] = {.lex_state = 152},
  [317] = {.lex_state = 147},
  [318] = {.lex_state = 152},
  [319] = {.lex_state = 147},
  [320] = {.lex_state = 146},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 147},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 142},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 147},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 142},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 147},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 147},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 145},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 147},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 152},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 147},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 147},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 147},
  [355] = {.lex_state = 152},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 147},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 147},
  [361] = {.lex_state = 147},
  [362] = {.lex_state = 147},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 147},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 145},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 147},
  [374] = {.lex_state = 142},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 147},
  [379] = {.lex_state = 147},
  [380] = {.lex_state = 147},
  [381] = {.lex_state = 147},
  [382] = {.lex_state = 147},
  [383] = {.lex_state = 147},
  [384] = {.lex_state = 152},
  [385] = {.lex_state = 147},
  [386] = {.lex_state = 147},
  [387] = {.lex_state = 147},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 147},
  [390] = {.lex_state = 147},
  [391] = {.lex_state = 147},
  [392] = {.lex_state = 147},
  [393] = {.lex_state = 147},
  [394] = {.lex_state = 147},
  [395] = {.lex_state = 147},
  [396] = {.lex_state = 147},
  [397] = {.lex_state = 147},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 147},
  [400] = {.lex_state = 147},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 147},
  [404] = {.lex_state = 147},
  [405] = {.lex_state = 85},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 147},
  [408] = {.lex_state = 147},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 142},
  [411] = {.lex_state = 147},
  [412] = {.lex_state = 147},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 147},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 147},
  [417] = {.lex_state = 142},
  [418] = {.lex_state = 147},
  [419] = {.lex_state = 147},
  [420] = {.lex_state = 147},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 149},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 152},
  [425] = {.lex_state = 142},
  [426] = {.lex_state = 147},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 142},
  [429] = {.lex_state = 142},
  [430] = {.lex_state = 142},
  [431] = {.lex_state = 142},
  [432] = {.lex_state = 142},
  [433] = {.lex_state = 147},
  [434] = {.lex_state = 147},
  [435] = {.lex_state = 142},
  [436] = {.lex_state = 142},
  [437] = {.lex_state = 142},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 142},
  [440] = {.lex_state = 588},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 147},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 147},
  [445] = {.lex_state = 142},
  [446] = {.lex_state = 142},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 142},
  [449] = {.lex_state = 4},
  [450] = {.lex_state = 152},
  [451] = {.lex_state = 147},
  [452] = {.lex_state = 147},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 147},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 142},
  [457] = {.lex_state = 142},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 147},
  [460] = {.lex_state = 152},
  [461] = {.lex_state = 142},
  [462] = {.lex_state = 147},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 4},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 142},
  [471] = {.lex_state = 142},
  [472] = {.lex_state = 147},
  [473] = {.lex_state = 142},
  [474] = {.lex_state = 147},
  [475] = {.lex_state = 142},
  [476] = {.lex_state = 142},
  [477] = {.lex_state = 4},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 142},
  [480] = {.lex_state = 142},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 142},
  [483] = {.lex_state = 142},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 142},
  [489] = {.lex_state = 142},
  [490] = {.lex_state = 142},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 142},
  [494] = {.lex_state = 142},
  [495] = {.lex_state = 147},
  [496] = {.lex_state = 142},
  [497] = {.lex_state = 142},
  [498] = {.lex_state = 4},
  [499] = {.lex_state = 142},
  [500] = {.lex_state = 142},
  [501] = {.lex_state = 142},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 142},
  [504] = {.lex_state = 147},
  [505] = {.lex_state = 142},
  [506] = {.lex_state = 147},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 142},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 147},
  [511] = {.lex_state = 152},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 147},
  [520] = {.lex_state = 147},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 147},
  [528] = {.lex_state = 147},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 147},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 147},
  [534] = {.lex_state = 147},
  [535] = {.lex_state = 147},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 147},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 147},
  [545] = {.lex_state = 147},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 147},
  [550] = {.lex_state = 152},
  [551] = {.lex_state = 152},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 587},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 152},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
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
    [sym_quil] = STATE(526),
    [sym__all_instr] = STATE(529),
    [sym_instr] = STATE(529),
    [sym_def_gate] = STATE(529),
    [sym_def_gate_matrix] = STATE(532),
    [sym_def_gate_as_permutation] = STATE(532),
    [sym_def_pauli_gate] = STATE(532),
    [sym_def_circuit] = STATE(529),
    [sym_def_frame] = STATE(529),
    [sym_def_waveform] = STATE(529),
    [sym_def_calibration] = STATE(529),
    [sym_def_measure_calibration] = STATE(529),
    [sym_gate] = STATE(475),
    [sym_gate_no_qubits] = STATE(475),
    [sym_modifiers] = STATE(474),
    [sym_modifier] = STATE(223),
    [sym_fence] = STATE(475),
    [sym_pulse] = STATE(475),
    [sym_delay] = STATE(475),
    [sym_delay_qubits] = STATE(471),
    [sym_delay_frames] = STATE(471),
    [sym_set_frequency] = STATE(475),
    [sym_shift_frequency] = STATE(475),
    [sym_shift_phase] = STATE(475),
    [sym_set_phase] = STATE(475),
    [sym_swap_phase] = STATE(475),
    [sym_set_scale] = STATE(475),
    [sym_declare] = STATE(475),
    [sym_capture] = STATE(475),
    [sym_raw_capture] = STATE(475),
    [sym_pragma] = STATE(475),
    [sym_measure] = STATE(475),
    [sym_halt] = STATE(475),
    [sym_nop] = STATE(475),
    [sym_include] = STATE(475),
    [sym_def_label] = STATE(475),
    [sym_jump] = STATE(475),
    [sym_jump_when] = STATE(475),
    [sym_jump_unless] = STATE(475),
    [sym_reset] = STATE(475),
    [sym_wait] = STATE(475),
    [sym_store] = STATE(475),
    [sym_load] = STATE(475),
    [sym_convert] = STATE(475),
    [sym_exchange] = STATE(475),
    [sym_move] = STATE(475),
    [sym_classical_unary] = STATE(475),
    [sym_classical_binary] = STATE(475),
    [sym_logical_binary_op] = STATE(470),
    [sym_arithmetic_binary_op] = STATE(470),
    [sym_classical_comparison] = STATE(475),
    [sym_name] = STATE(109),
    [aux_sym_modifiers_repeat1] = STATE(223),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DEFGATE] = ACTIONS(5),
    [anon_sym_DEFCIRCUIT] = ACTIONS(7),
    [anon_sym_DEFFRAME] = ACTIONS(9),
    [anon_sym_DEFWAVEFORM] = ACTIONS(11),
    [anon_sym_DEFCAL] = ACTIONS(13),
    [anon_sym_MEASURE] = ACTIONS(15),
    [anon_sym_CONTROLLED] = ACTIONS(17),
    [anon_sym_DAGGER] = ACTIONS(17),
    [anon_sym_FORKED] = ACTIONS(17),
    [anon_sym_FENCE] = ACTIONS(19),
    [anon_sym_PULSE] = ACTIONS(21),
    [anon_sym_DELAY] = ACTIONS(23),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(25),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(27),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(29),
    [anon_sym_SET_DASHPHASE] = ACTIONS(31),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(33),
    [anon_sym_SET_DASHSCALE] = ACTIONS(35),
    [anon_sym_DECLARE] = ACTIONS(37),
    [anon_sym_CAPTURE] = ACTIONS(39),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(41),
    [anon_sym_PRAGMA] = ACTIONS(43),
    [anon_sym_HALT] = ACTIONS(45),
    [anon_sym_NOP] = ACTIONS(47),
    [anon_sym_INCLUDE] = ACTIONS(49),
    [anon_sym_LABEL] = ACTIONS(51),
    [anon_sym_JUMP] = ACTIONS(53),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(55),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(57),
    [anon_sym_RESET] = ACTIONS(59),
    [anon_sym_WAIT] = ACTIONS(61),
    [anon_sym_STORE] = ACTIONS(63),
    [anon_sym_LOAD] = ACTIONS(65),
    [anon_sym_CONVERT] = ACTIONS(67),
    [anon_sym_EXCHANGE] = ACTIONS(69),
    [anon_sym_MOVE] = ACTIONS(71),
    [anon_sym_NEG] = ACTIONS(73),
    [anon_sym_NOT] = ACTIONS(73),
    [anon_sym_TRUE] = ACTIONS(73),
    [anon_sym_FALSE] = ACTIONS(73),
    [anon_sym_AND] = ACTIONS(75),
    [anon_sym_OR] = ACTIONS(75),
    [anon_sym_IOR] = ACTIONS(75),
    [anon_sym_XOR] = ACTIONS(75),
    [anon_sym_ADD] = ACTIONS(77),
    [anon_sym_SUB] = ACTIONS(77),
    [anon_sym_MUL] = ACTIONS(77),
    [anon_sym_DIV] = ACTIONS(77),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_GE] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LE] = ACTIONS(79),
    [sym_nonblocking] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
  },
  [2] = {
    [sym_instr] = STATE(501),
    [sym_gate] = STATE(475),
    [sym_gate_no_qubits] = STATE(475),
    [sym_modifiers] = STATE(495),
    [sym_modifier] = STATE(223),
    [sym_fence] = STATE(475),
    [sym_pulse] = STATE(475),
    [sym_delay] = STATE(475),
    [sym_delay_qubits] = STATE(471),
    [sym_delay_frames] = STATE(471),
    [sym_set_frequency] = STATE(475),
    [sym_shift_frequency] = STATE(475),
    [sym_shift_phase] = STATE(475),
    [sym_set_phase] = STATE(475),
    [sym_swap_phase] = STATE(475),
    [sym_set_scale] = STATE(475),
    [sym_declare] = STATE(475),
    [sym_capture] = STATE(475),
    [sym_raw_capture] = STATE(475),
    [sym_pragma] = STATE(475),
    [sym_measure] = STATE(475),
    [sym_halt] = STATE(475),
    [sym_nop] = STATE(475),
    [sym_include] = STATE(475),
    [sym_def_label] = STATE(475),
    [sym_jump] = STATE(475),
    [sym_jump_when] = STATE(475),
    [sym_jump_unless] = STATE(475),
    [sym_reset] = STATE(475),
    [sym_wait] = STATE(475),
    [sym_store] = STATE(475),
    [sym_load] = STATE(475),
    [sym_convert] = STATE(475),
    [sym_exchange] = STATE(475),
    [sym_move] = STATE(475),
    [sym_classical_unary] = STATE(475),
    [sym_classical_binary] = STATE(475),
    [sym_logical_binary_op] = STATE(470),
    [sym_arithmetic_binary_op] = STATE(470),
    [sym_classical_comparison] = STATE(475),
    [sym_name] = STATE(101),
    [aux_sym_modifiers_repeat1] = STATE(223),
    [anon_sym_MEASURE] = ACTIONS(85),
    [anon_sym_CONTROLLED] = ACTIONS(17),
    [anon_sym_DAGGER] = ACTIONS(17),
    [anon_sym_FORKED] = ACTIONS(17),
    [anon_sym_FENCE] = ACTIONS(87),
    [anon_sym_PULSE] = ACTIONS(89),
    [anon_sym_DELAY] = ACTIONS(91),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(93),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(95),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(97),
    [anon_sym_SET_DASHPHASE] = ACTIONS(99),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(101),
    [anon_sym_SET_DASHSCALE] = ACTIONS(103),
    [anon_sym_DECLARE] = ACTIONS(105),
    [anon_sym_CAPTURE] = ACTIONS(107),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(109),
    [anon_sym_PRAGMA] = ACTIONS(111),
    [anon_sym_HALT] = ACTIONS(45),
    [anon_sym_NOP] = ACTIONS(47),
    [anon_sym_INCLUDE] = ACTIONS(49),
    [anon_sym_LABEL] = ACTIONS(113),
    [anon_sym_JUMP] = ACTIONS(115),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(117),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(119),
    [anon_sym_RESET] = ACTIONS(121),
    [anon_sym_WAIT] = ACTIONS(61),
    [anon_sym_STORE] = ACTIONS(123),
    [anon_sym_LOAD] = ACTIONS(125),
    [anon_sym_CONVERT] = ACTIONS(127),
    [anon_sym_EXCHANGE] = ACTIONS(129),
    [anon_sym_MOVE] = ACTIONS(131),
    [anon_sym_NEG] = ACTIONS(133),
    [anon_sym_NOT] = ACTIONS(133),
    [anon_sym_TRUE] = ACTIONS(133),
    [anon_sym_FALSE] = ACTIONS(133),
    [anon_sym_AND] = ACTIONS(135),
    [anon_sym_OR] = ACTIONS(135),
    [anon_sym_IOR] = ACTIONS(135),
    [anon_sym_XOR] = ACTIONS(135),
    [anon_sym_ADD] = ACTIONS(137),
    [anon_sym_SUB] = ACTIONS(137),
    [anon_sym_MUL] = ACTIONS(137),
    [anon_sym_DIV] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(139),
    [anon_sym_GE] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_LE] = ACTIONS(139),
    [sym_nonblocking] = ACTIONS(141),
    [sym_identifier] = ACTIONS(143),
  },
  [3] = {
    [sym_pragma_name] = STATE(4),
    [sym_keyword] = STATE(11),
    [aux_sym__int] = STATE(10),
    [sym__string] = STATE(445),
    [sym__escaped_string] = STATE(445),
    [aux_sym_pragma_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_DEFGATE] = ACTIONS(147),
    [anon_sym_AS] = ACTIONS(147),
    [anon_sym_MATRIX] = ACTIONS(147),
    [anon_sym_PERMUTATION] = ACTIONS(147),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(147),
    [anon_sym_DEFCIRCUIT] = ACTIONS(147),
    [anon_sym_DEFFRAME] = ACTIONS(147),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(147),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(147),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(147),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(147),
    [anon_sym_DEFWAVEFORM] = ACTIONS(147),
    [anon_sym_DEFCAL] = ACTIONS(147),
    [anon_sym_MEASURE] = ACTIONS(147),
    [anon_sym_CONTROLLED] = ACTIONS(147),
    [anon_sym_DAGGER] = ACTIONS(147),
    [anon_sym_FORKED] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_FENCE] = ACTIONS(147),
    [anon_sym_PULSE] = ACTIONS(147),
    [anon_sym_DELAY] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(147),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(147),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(147),
    [anon_sym_SET_DASHPHASE] = ACTIONS(147),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(147),
    [anon_sym_SET_DASHSCALE] = ACTIONS(147),
    [anon_sym_DECLARE] = ACTIONS(147),
    [anon_sym_SHARING] = ACTIONS(147),
    [anon_sym_OFFSET] = ACTIONS(147),
    [anon_sym_CAPTURE] = ACTIONS(147),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(147),
    [anon_sym_PRAGMA] = ACTIONS(147),
    [anon_sym_HALT] = ACTIONS(147),
    [anon_sym_NOP] = ACTIONS(147),
    [anon_sym_INCLUDE] = ACTIONS(147),
    [anon_sym_LABEL] = ACTIONS(147),
    [anon_sym_JUMP] = ACTIONS(147),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(147),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(147),
    [anon_sym_RESET] = ACTIONS(147),
    [anon_sym_WAIT] = ACTIONS(147),
    [anon_sym_STORE] = ACTIONS(147),
    [anon_sym_LOAD] = ACTIONS(147),
    [anon_sym_CONVERT] = ACTIONS(147),
    [anon_sym_EXCHANGE] = ACTIONS(147),
    [anon_sym_MOVE] = ACTIONS(147),
    [anon_sym_NEG] = ACTIONS(147),
    [anon_sym_NOT] = ACTIONS(147),
    [anon_sym_TRUE] = ACTIONS(147),
    [anon_sym_FALSE] = ACTIONS(147),
    [anon_sym_AND] = ACTIONS(147),
    [anon_sym_OR] = ACTIONS(147),
    [anon_sym_IOR] = ACTIONS(147),
    [anon_sym_XOR] = ACTIONS(147),
    [anon_sym_ADD] = ACTIONS(147),
    [anon_sym_SUB] = ACTIONS(147),
    [anon_sym_MUL] = ACTIONS(147),
    [anon_sym_DIV] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_GE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_LE] = ACTIONS(147),
    [anon_sym_SIN] = ACTIONS(147),
    [anon_sym_COS] = ACTIONS(147),
    [anon_sym_SQRT] = ACTIONS(147),
    [anon_sym_EXP] = ACTIONS(147),
    [anon_sym_CIS] = ACTIONS(147),
    [anon_sym_i] = ACTIONS(147),
    [anon_sym_pi] = ACTIONS(147),
    [sym_nonblocking] = ACTIONS(147),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(147),
    [sym_identifier] = ACTIONS(151),
    [sym__newline] = ACTIONS(145),
    [aux_sym__int_token1] = ACTIONS(153),
  },
  [4] = {
    [sym_pragma_name] = STATE(7),
    [sym_keyword] = STATE(11),
    [aux_sym__int] = STATE(10),
    [sym__string] = STATE(493),
    [sym__escaped_string] = STATE(493),
    [aux_sym_pragma_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_DEFGATE] = ACTIONS(147),
    [anon_sym_AS] = ACTIONS(147),
    [anon_sym_MATRIX] = ACTIONS(147),
    [anon_sym_PERMUTATION] = ACTIONS(147),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(147),
    [anon_sym_DEFCIRCUIT] = ACTIONS(147),
    [anon_sym_DEFFRAME] = ACTIONS(147),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(147),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(147),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(147),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(147),
    [anon_sym_DEFWAVEFORM] = ACTIONS(147),
    [anon_sym_DEFCAL] = ACTIONS(147),
    [anon_sym_MEASURE] = ACTIONS(147),
    [anon_sym_CONTROLLED] = ACTIONS(147),
    [anon_sym_DAGGER] = ACTIONS(147),
    [anon_sym_FORKED] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [anon_sym_CARET] = ACTIONS(147),
    [anon_sym_FENCE] = ACTIONS(147),
    [anon_sym_PULSE] = ACTIONS(147),
    [anon_sym_DELAY] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(147),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(147),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(147),
    [anon_sym_SET_DASHPHASE] = ACTIONS(147),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(147),
    [anon_sym_SET_DASHSCALE] = ACTIONS(147),
    [anon_sym_DECLARE] = ACTIONS(147),
    [anon_sym_SHARING] = ACTIONS(147),
    [anon_sym_OFFSET] = ACTIONS(147),
    [anon_sym_CAPTURE] = ACTIONS(147),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(147),
    [anon_sym_PRAGMA] = ACTIONS(147),
    [anon_sym_HALT] = ACTIONS(147),
    [anon_sym_NOP] = ACTIONS(147),
    [anon_sym_INCLUDE] = ACTIONS(147),
    [anon_sym_LABEL] = ACTIONS(147),
    [anon_sym_JUMP] = ACTIONS(147),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(147),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(147),
    [anon_sym_RESET] = ACTIONS(147),
    [anon_sym_WAIT] = ACTIONS(147),
    [anon_sym_STORE] = ACTIONS(147),
    [anon_sym_LOAD] = ACTIONS(147),
    [anon_sym_CONVERT] = ACTIONS(147),
    [anon_sym_EXCHANGE] = ACTIONS(147),
    [anon_sym_MOVE] = ACTIONS(147),
    [anon_sym_NEG] = ACTIONS(147),
    [anon_sym_NOT] = ACTIONS(147),
    [anon_sym_TRUE] = ACTIONS(147),
    [anon_sym_FALSE] = ACTIONS(147),
    [anon_sym_AND] = ACTIONS(147),
    [anon_sym_OR] = ACTIONS(147),
    [anon_sym_IOR] = ACTIONS(147),
    [anon_sym_XOR] = ACTIONS(147),
    [anon_sym_ADD] = ACTIONS(147),
    [anon_sym_SUB] = ACTIONS(147),
    [anon_sym_MUL] = ACTIONS(147),
    [anon_sym_DIV] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_GE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_LE] = ACTIONS(147),
    [anon_sym_SIN] = ACTIONS(147),
    [anon_sym_COS] = ACTIONS(147),
    [anon_sym_SQRT] = ACTIONS(147),
    [anon_sym_EXP] = ACTIONS(147),
    [anon_sym_CIS] = ACTIONS(147),
    [anon_sym_i] = ACTIONS(147),
    [anon_sym_pi] = ACTIONS(147),
    [sym_nonblocking] = ACTIONS(147),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(147),
    [sym_identifier] = ACTIONS(151),
    [sym__newline] = ACTIONS(155),
    [aux_sym__int_token1] = ACTIONS(153),
  },
  [5] = {
    [sym_pragma_name] = STATE(6),
    [sym_keyword] = STATE(18),
    [aux_sym__int] = STATE(13),
    [sym__string] = STATE(445),
    [sym__escaped_string] = STATE(445),
    [aux_sym_pragma_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_DEFGATE] = ACTIONS(157),
    [anon_sym_AS] = ACTIONS(157),
    [anon_sym_MATRIX] = ACTIONS(157),
    [anon_sym_PERMUTATION] = ACTIONS(157),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(157),
    [anon_sym_DEFCIRCUIT] = ACTIONS(157),
    [anon_sym_DEFFRAME] = ACTIONS(157),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(157),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(157),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(157),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(157),
    [anon_sym_DEFWAVEFORM] = ACTIONS(157),
    [anon_sym_DEFCAL] = ACTIONS(157),
    [anon_sym_MEASURE] = ACTIONS(157),
    [anon_sym_CONTROLLED] = ACTIONS(157),
    [anon_sym_DAGGER] = ACTIONS(157),
    [anon_sym_FORKED] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_CARET] = ACTIONS(159),
    [anon_sym_FENCE] = ACTIONS(157),
    [anon_sym_PULSE] = ACTIONS(157),
    [anon_sym_DELAY] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(157),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(157),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(157),
    [anon_sym_SET_DASHPHASE] = ACTIONS(157),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(157),
    [anon_sym_SET_DASHSCALE] = ACTIONS(157),
    [anon_sym_DECLARE] = ACTIONS(157),
    [anon_sym_SHARING] = ACTIONS(157),
    [anon_sym_OFFSET] = ACTIONS(157),
    [anon_sym_CAPTURE] = ACTIONS(157),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(157),
    [anon_sym_PRAGMA] = ACTIONS(157),
    [anon_sym_HALT] = ACTIONS(157),
    [anon_sym_NOP] = ACTIONS(157),
    [anon_sym_INCLUDE] = ACTIONS(157),
    [anon_sym_LABEL] = ACTIONS(157),
    [anon_sym_JUMP] = ACTIONS(157),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(157),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(157),
    [anon_sym_RESET] = ACTIONS(157),
    [anon_sym_WAIT] = ACTIONS(157),
    [anon_sym_STORE] = ACTIONS(157),
    [anon_sym_LOAD] = ACTIONS(157),
    [anon_sym_CONVERT] = ACTIONS(157),
    [anon_sym_EXCHANGE] = ACTIONS(157),
    [anon_sym_MOVE] = ACTIONS(157),
    [anon_sym_NEG] = ACTIONS(157),
    [anon_sym_NOT] = ACTIONS(157),
    [anon_sym_TRUE] = ACTIONS(157),
    [anon_sym_FALSE] = ACTIONS(157),
    [anon_sym_AND] = ACTIONS(157),
    [anon_sym_OR] = ACTIONS(157),
    [anon_sym_IOR] = ACTIONS(157),
    [anon_sym_XOR] = ACTIONS(157),
    [anon_sym_ADD] = ACTIONS(157),
    [anon_sym_SUB] = ACTIONS(157),
    [anon_sym_MUL] = ACTIONS(157),
    [anon_sym_DIV] = ACTIONS(157),
    [anon_sym_EQ] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GE] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_LE] = ACTIONS(157),
    [anon_sym_SIN] = ACTIONS(157),
    [anon_sym_COS] = ACTIONS(157),
    [anon_sym_SQRT] = ACTIONS(157),
    [anon_sym_EXP] = ACTIONS(157),
    [anon_sym_CIS] = ACTIONS(157),
    [anon_sym_i] = ACTIONS(157),
    [anon_sym_pi] = ACTIONS(157),
    [sym_nonblocking] = ACTIONS(157),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(157),
    [sym_identifier] = ACTIONS(163),
    [aux_sym__int_token1] = ACTIONS(165),
  },
  [6] = {
    [sym_pragma_name] = STATE(8),
    [sym_keyword] = STATE(18),
    [aux_sym__int] = STATE(13),
    [sym__string] = STATE(493),
    [sym__escaped_string] = STATE(493),
    [aux_sym_pragma_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_DEFGATE] = ACTIONS(157),
    [anon_sym_AS] = ACTIONS(157),
    [anon_sym_MATRIX] = ACTIONS(157),
    [anon_sym_PERMUTATION] = ACTIONS(157),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(157),
    [anon_sym_DEFCIRCUIT] = ACTIONS(157),
    [anon_sym_DEFFRAME] = ACTIONS(157),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(157),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(157),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(157),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(157),
    [anon_sym_DEFWAVEFORM] = ACTIONS(157),
    [anon_sym_DEFCAL] = ACTIONS(157),
    [anon_sym_MEASURE] = ACTIONS(157),
    [anon_sym_CONTROLLED] = ACTIONS(157),
    [anon_sym_DAGGER] = ACTIONS(157),
    [anon_sym_FORKED] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_CARET] = ACTIONS(159),
    [anon_sym_FENCE] = ACTIONS(157),
    [anon_sym_PULSE] = ACTIONS(157),
    [anon_sym_DELAY] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(157),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(157),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(157),
    [anon_sym_SET_DASHPHASE] = ACTIONS(157),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(157),
    [anon_sym_SET_DASHSCALE] = ACTIONS(157),
    [anon_sym_DECLARE] = ACTIONS(157),
    [anon_sym_SHARING] = ACTIONS(157),
    [anon_sym_OFFSET] = ACTIONS(157),
    [anon_sym_CAPTURE] = ACTIONS(157),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(157),
    [anon_sym_PRAGMA] = ACTIONS(157),
    [anon_sym_HALT] = ACTIONS(157),
    [anon_sym_NOP] = ACTIONS(157),
    [anon_sym_INCLUDE] = ACTIONS(157),
    [anon_sym_LABEL] = ACTIONS(157),
    [anon_sym_JUMP] = ACTIONS(157),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(157),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(157),
    [anon_sym_RESET] = ACTIONS(157),
    [anon_sym_WAIT] = ACTIONS(157),
    [anon_sym_STORE] = ACTIONS(157),
    [anon_sym_LOAD] = ACTIONS(157),
    [anon_sym_CONVERT] = ACTIONS(157),
    [anon_sym_EXCHANGE] = ACTIONS(157),
    [anon_sym_MOVE] = ACTIONS(157),
    [anon_sym_NEG] = ACTIONS(157),
    [anon_sym_NOT] = ACTIONS(157),
    [anon_sym_TRUE] = ACTIONS(157),
    [anon_sym_FALSE] = ACTIONS(157),
    [anon_sym_AND] = ACTIONS(157),
    [anon_sym_OR] = ACTIONS(157),
    [anon_sym_IOR] = ACTIONS(157),
    [anon_sym_XOR] = ACTIONS(157),
    [anon_sym_ADD] = ACTIONS(157),
    [anon_sym_SUB] = ACTIONS(157),
    [anon_sym_MUL] = ACTIONS(157),
    [anon_sym_DIV] = ACTIONS(157),
    [anon_sym_EQ] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GE] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_LE] = ACTIONS(157),
    [anon_sym_SIN] = ACTIONS(157),
    [anon_sym_COS] = ACTIONS(157),
    [anon_sym_SQRT] = ACTIONS(157),
    [anon_sym_EXP] = ACTIONS(157),
    [anon_sym_CIS] = ACTIONS(157),
    [anon_sym_i] = ACTIONS(157),
    [anon_sym_pi] = ACTIONS(157),
    [sym_nonblocking] = ACTIONS(157),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(157),
    [sym_identifier] = ACTIONS(163),
    [aux_sym__int_token1] = ACTIONS(165),
  },
  [7] = {
    [sym_pragma_name] = STATE(7),
    [sym_keyword] = STATE(11),
    [aux_sym__int] = STATE(10),
    [aux_sym_pragma_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_DEFGATE] = ACTIONS(169),
    [anon_sym_AS] = ACTIONS(169),
    [anon_sym_MATRIX] = ACTIONS(169),
    [anon_sym_PERMUTATION] = ACTIONS(169),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(169),
    [anon_sym_DEFCIRCUIT] = ACTIONS(169),
    [anon_sym_DEFFRAME] = ACTIONS(169),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(169),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(169),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(169),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(169),
    [anon_sym_DEFWAVEFORM] = ACTIONS(169),
    [anon_sym_DEFCAL] = ACTIONS(169),
    [anon_sym_MEASURE] = ACTIONS(169),
    [anon_sym_CONTROLLED] = ACTIONS(169),
    [anon_sym_DAGGER] = ACTIONS(169),
    [anon_sym_FORKED] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_CARET] = ACTIONS(169),
    [anon_sym_FENCE] = ACTIONS(169),
    [anon_sym_PULSE] = ACTIONS(169),
    [anon_sym_DELAY] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(169),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(169),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(169),
    [anon_sym_SET_DASHPHASE] = ACTIONS(169),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(169),
    [anon_sym_SET_DASHSCALE] = ACTIONS(169),
    [anon_sym_DECLARE] = ACTIONS(169),
    [anon_sym_SHARING] = ACTIONS(169),
    [anon_sym_OFFSET] = ACTIONS(169),
    [anon_sym_CAPTURE] = ACTIONS(169),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(169),
    [anon_sym_PRAGMA] = ACTIONS(169),
    [anon_sym_HALT] = ACTIONS(169),
    [anon_sym_NOP] = ACTIONS(169),
    [anon_sym_INCLUDE] = ACTIONS(169),
    [anon_sym_LABEL] = ACTIONS(169),
    [anon_sym_JUMP] = ACTIONS(169),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(169),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(169),
    [anon_sym_RESET] = ACTIONS(169),
    [anon_sym_WAIT] = ACTIONS(169),
    [anon_sym_STORE] = ACTIONS(169),
    [anon_sym_LOAD] = ACTIONS(169),
    [anon_sym_CONVERT] = ACTIONS(169),
    [anon_sym_EXCHANGE] = ACTIONS(169),
    [anon_sym_MOVE] = ACTIONS(169),
    [anon_sym_NEG] = ACTIONS(169),
    [anon_sym_NOT] = ACTIONS(169),
    [anon_sym_TRUE] = ACTIONS(169),
    [anon_sym_FALSE] = ACTIONS(169),
    [anon_sym_AND] = ACTIONS(169),
    [anon_sym_OR] = ACTIONS(169),
    [anon_sym_IOR] = ACTIONS(169),
    [anon_sym_XOR] = ACTIONS(169),
    [anon_sym_ADD] = ACTIONS(169),
    [anon_sym_SUB] = ACTIONS(169),
    [anon_sym_MUL] = ACTIONS(169),
    [anon_sym_DIV] = ACTIONS(169),
    [anon_sym_EQ] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_GE] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_LE] = ACTIONS(169),
    [anon_sym_SIN] = ACTIONS(169),
    [anon_sym_COS] = ACTIONS(169),
    [anon_sym_SQRT] = ACTIONS(169),
    [anon_sym_EXP] = ACTIONS(169),
    [anon_sym_CIS] = ACTIONS(169),
    [anon_sym_i] = ACTIONS(169),
    [anon_sym_pi] = ACTIONS(169),
    [sym_nonblocking] = ACTIONS(169),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(169),
    [sym_identifier] = ACTIONS(174),
    [sym__newline] = ACTIONS(167),
    [aux_sym__int_token1] = ACTIONS(177),
  },
  [8] = {
    [sym_pragma_name] = STATE(8),
    [sym_keyword] = STATE(18),
    [aux_sym__int] = STATE(13),
    [aux_sym_pragma_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_DEFGATE] = ACTIONS(180),
    [anon_sym_AS] = ACTIONS(180),
    [anon_sym_MATRIX] = ACTIONS(180),
    [anon_sym_PERMUTATION] = ACTIONS(180),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(180),
    [anon_sym_DEFCIRCUIT] = ACTIONS(180),
    [anon_sym_DEFFRAME] = ACTIONS(180),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(180),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(180),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(180),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(180),
    [anon_sym_DEFWAVEFORM] = ACTIONS(180),
    [anon_sym_DEFCAL] = ACTIONS(180),
    [anon_sym_MEASURE] = ACTIONS(180),
    [anon_sym_CONTROLLED] = ACTIONS(180),
    [anon_sym_DAGGER] = ACTIONS(180),
    [anon_sym_FORKED] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_FENCE] = ACTIONS(180),
    [anon_sym_PULSE] = ACTIONS(180),
    [anon_sym_DELAY] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(180),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(180),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(180),
    [anon_sym_SET_DASHPHASE] = ACTIONS(180),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(180),
    [anon_sym_SET_DASHSCALE] = ACTIONS(180),
    [anon_sym_DECLARE] = ACTIONS(180),
    [anon_sym_SHARING] = ACTIONS(180),
    [anon_sym_OFFSET] = ACTIONS(180),
    [anon_sym_CAPTURE] = ACTIONS(180),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(180),
    [anon_sym_PRAGMA] = ACTIONS(180),
    [anon_sym_HALT] = ACTIONS(180),
    [anon_sym_NOP] = ACTIONS(180),
    [anon_sym_INCLUDE] = ACTIONS(180),
    [anon_sym_LABEL] = ACTIONS(180),
    [anon_sym_JUMP] = ACTIONS(180),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(180),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(180),
    [anon_sym_RESET] = ACTIONS(180),
    [anon_sym_WAIT] = ACTIONS(180),
    [anon_sym_STORE] = ACTIONS(180),
    [anon_sym_LOAD] = ACTIONS(180),
    [anon_sym_CONVERT] = ACTIONS(180),
    [anon_sym_EXCHANGE] = ACTIONS(180),
    [anon_sym_MOVE] = ACTIONS(180),
    [anon_sym_NEG] = ACTIONS(180),
    [anon_sym_NOT] = ACTIONS(180),
    [anon_sym_TRUE] = ACTIONS(180),
    [anon_sym_FALSE] = ACTIONS(180),
    [anon_sym_AND] = ACTIONS(180),
    [anon_sym_OR] = ACTIONS(180),
    [anon_sym_IOR] = ACTIONS(180),
    [anon_sym_XOR] = ACTIONS(180),
    [anon_sym_ADD] = ACTIONS(180),
    [anon_sym_SUB] = ACTIONS(180),
    [anon_sym_MUL] = ACTIONS(180),
    [anon_sym_DIV] = ACTIONS(180),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_GE] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_LE] = ACTIONS(180),
    [anon_sym_SIN] = ACTIONS(180),
    [anon_sym_COS] = ACTIONS(180),
    [anon_sym_SQRT] = ACTIONS(180),
    [anon_sym_EXP] = ACTIONS(180),
    [anon_sym_CIS] = ACTIONS(180),
    [anon_sym_i] = ACTIONS(180),
    [anon_sym_pi] = ACTIONS(180),
    [sym_nonblocking] = ACTIONS(180),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(180),
    [sym_identifier] = ACTIONS(186),
    [aux_sym__int_token1] = ACTIONS(189),
  },
  [9] = {
    [aux_sym__int] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_DEFGATE] = ACTIONS(194),
    [anon_sym_AS] = ACTIONS(194),
    [anon_sym_MATRIX] = ACTIONS(194),
    [anon_sym_PERMUTATION] = ACTIONS(194),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(194),
    [anon_sym_DEFCIRCUIT] = ACTIONS(194),
    [anon_sym_DEFFRAME] = ACTIONS(194),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(194),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(194),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(194),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(194),
    [anon_sym_DEFWAVEFORM] = ACTIONS(194),
    [anon_sym_DEFCAL] = ACTIONS(194),
    [anon_sym_MEASURE] = ACTIONS(194),
    [anon_sym_CONTROLLED] = ACTIONS(194),
    [anon_sym_DAGGER] = ACTIONS(194),
    [anon_sym_FORKED] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_FENCE] = ACTIONS(194),
    [anon_sym_PULSE] = ACTIONS(194),
    [anon_sym_DELAY] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(194),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(194),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(194),
    [anon_sym_SET_DASHPHASE] = ACTIONS(194),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(194),
    [anon_sym_SET_DASHSCALE] = ACTIONS(194),
    [anon_sym_DECLARE] = ACTIONS(194),
    [anon_sym_SHARING] = ACTIONS(194),
    [anon_sym_OFFSET] = ACTIONS(194),
    [anon_sym_CAPTURE] = ACTIONS(194),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(194),
    [anon_sym_PRAGMA] = ACTIONS(194),
    [anon_sym_HALT] = ACTIONS(194),
    [anon_sym_NOP] = ACTIONS(194),
    [anon_sym_INCLUDE] = ACTIONS(194),
    [anon_sym_LABEL] = ACTIONS(194),
    [anon_sym_JUMP] = ACTIONS(194),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(194),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(194),
    [anon_sym_RESET] = ACTIONS(194),
    [anon_sym_WAIT] = ACTIONS(194),
    [anon_sym_STORE] = ACTIONS(194),
    [anon_sym_LOAD] = ACTIONS(194),
    [anon_sym_CONVERT] = ACTIONS(194),
    [anon_sym_EXCHANGE] = ACTIONS(194),
    [anon_sym_MOVE] = ACTIONS(194),
    [anon_sym_NEG] = ACTIONS(194),
    [anon_sym_NOT] = ACTIONS(194),
    [anon_sym_TRUE] = ACTIONS(194),
    [anon_sym_FALSE] = ACTIONS(194),
    [anon_sym_AND] = ACTIONS(194),
    [anon_sym_OR] = ACTIONS(194),
    [anon_sym_IOR] = ACTIONS(194),
    [anon_sym_XOR] = ACTIONS(194),
    [anon_sym_ADD] = ACTIONS(194),
    [anon_sym_SUB] = ACTIONS(194),
    [anon_sym_MUL] = ACTIONS(194),
    [anon_sym_DIV] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [anon_sym_GE] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(194),
    [anon_sym_LE] = ACTIONS(194),
    [anon_sym_SIN] = ACTIONS(194),
    [anon_sym_COS] = ACTIONS(194),
    [anon_sym_SQRT] = ACTIONS(194),
    [anon_sym_EXP] = ACTIONS(194),
    [anon_sym_CIS] = ACTIONS(194),
    [anon_sym_i] = ACTIONS(194),
    [anon_sym_pi] = ACTIONS(194),
    [sym_nonblocking] = ACTIONS(194),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(194),
    [sym_identifier] = ACTIONS(194),
    [sym__newline] = ACTIONS(192),
    [aux_sym__int_token1] = ACTIONS(196),
  },
  [10] = {
    [aux_sym__int] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_DEFGATE] = ACTIONS(201),
    [anon_sym_AS] = ACTIONS(201),
    [anon_sym_MATRIX] = ACTIONS(201),
    [anon_sym_PERMUTATION] = ACTIONS(201),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(201),
    [anon_sym_DEFCIRCUIT] = ACTIONS(201),
    [anon_sym_DEFFRAME] = ACTIONS(201),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(201),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(201),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_DEFWAVEFORM] = ACTIONS(201),
    [anon_sym_DEFCAL] = ACTIONS(201),
    [anon_sym_MEASURE] = ACTIONS(201),
    [anon_sym_CONTROLLED] = ACTIONS(201),
    [anon_sym_DAGGER] = ACTIONS(201),
    [anon_sym_FORKED] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_CARET] = ACTIONS(201),
    [anon_sym_FENCE] = ACTIONS(201),
    [anon_sym_PULSE] = ACTIONS(201),
    [anon_sym_DELAY] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(201),
    [anon_sym_SET_DASHPHASE] = ACTIONS(201),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(201),
    [anon_sym_SET_DASHSCALE] = ACTIONS(201),
    [anon_sym_DECLARE] = ACTIONS(201),
    [anon_sym_SHARING] = ACTIONS(201),
    [anon_sym_OFFSET] = ACTIONS(201),
    [anon_sym_CAPTURE] = ACTIONS(201),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(201),
    [anon_sym_PRAGMA] = ACTIONS(201),
    [anon_sym_HALT] = ACTIONS(201),
    [anon_sym_NOP] = ACTIONS(201),
    [anon_sym_INCLUDE] = ACTIONS(201),
    [anon_sym_LABEL] = ACTIONS(201),
    [anon_sym_JUMP] = ACTIONS(201),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(201),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(201),
    [anon_sym_RESET] = ACTIONS(201),
    [anon_sym_WAIT] = ACTIONS(201),
    [anon_sym_STORE] = ACTIONS(201),
    [anon_sym_LOAD] = ACTIONS(201),
    [anon_sym_CONVERT] = ACTIONS(201),
    [anon_sym_EXCHANGE] = ACTIONS(201),
    [anon_sym_MOVE] = ACTIONS(201),
    [anon_sym_NEG] = ACTIONS(201),
    [anon_sym_NOT] = ACTIONS(201),
    [anon_sym_TRUE] = ACTIONS(201),
    [anon_sym_FALSE] = ACTIONS(201),
    [anon_sym_AND] = ACTIONS(201),
    [anon_sym_OR] = ACTIONS(201),
    [anon_sym_IOR] = ACTIONS(201),
    [anon_sym_XOR] = ACTIONS(201),
    [anon_sym_ADD] = ACTIONS(201),
    [anon_sym_SUB] = ACTIONS(201),
    [anon_sym_MUL] = ACTIONS(201),
    [anon_sym_DIV] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_GE] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LE] = ACTIONS(201),
    [anon_sym_SIN] = ACTIONS(201),
    [anon_sym_COS] = ACTIONS(201),
    [anon_sym_SQRT] = ACTIONS(201),
    [anon_sym_EXP] = ACTIONS(201),
    [anon_sym_CIS] = ACTIONS(201),
    [anon_sym_i] = ACTIONS(201),
    [anon_sym_pi] = ACTIONS(201),
    [sym_nonblocking] = ACTIONS(201),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(201),
    [sym_identifier] = ACTIONS(201),
    [sym__newline] = ACTIONS(199),
    [aux_sym__int_token1] = ACTIONS(201),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_DEFGATE] = ACTIONS(201),
    [anon_sym_AS] = ACTIONS(201),
    [anon_sym_MATRIX] = ACTIONS(201),
    [anon_sym_PERMUTATION] = ACTIONS(201),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(201),
    [anon_sym_DEFCIRCUIT] = ACTIONS(201),
    [anon_sym_DEFFRAME] = ACTIONS(201),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(201),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(201),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_DEFWAVEFORM] = ACTIONS(201),
    [anon_sym_DEFCAL] = ACTIONS(201),
    [anon_sym_MEASURE] = ACTIONS(201),
    [anon_sym_CONTROLLED] = ACTIONS(201),
    [anon_sym_DAGGER] = ACTIONS(201),
    [anon_sym_FORKED] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_CARET] = ACTIONS(201),
    [anon_sym_FENCE] = ACTIONS(201),
    [anon_sym_PULSE] = ACTIONS(201),
    [anon_sym_DELAY] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(201),
    [anon_sym_SET_DASHPHASE] = ACTIONS(201),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(201),
    [anon_sym_SET_DASHSCALE] = ACTIONS(201),
    [anon_sym_DECLARE] = ACTIONS(201),
    [anon_sym_SHARING] = ACTIONS(201),
    [anon_sym_OFFSET] = ACTIONS(201),
    [anon_sym_CAPTURE] = ACTIONS(201),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(201),
    [anon_sym_PRAGMA] = ACTIONS(201),
    [anon_sym_HALT] = ACTIONS(201),
    [anon_sym_NOP] = ACTIONS(201),
    [anon_sym_INCLUDE] = ACTIONS(201),
    [anon_sym_LABEL] = ACTIONS(201),
    [anon_sym_JUMP] = ACTIONS(201),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(201),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(201),
    [anon_sym_RESET] = ACTIONS(201),
    [anon_sym_WAIT] = ACTIONS(201),
    [anon_sym_STORE] = ACTIONS(201),
    [anon_sym_LOAD] = ACTIONS(201),
    [anon_sym_CONVERT] = ACTIONS(201),
    [anon_sym_EXCHANGE] = ACTIONS(201),
    [anon_sym_MOVE] = ACTIONS(201),
    [anon_sym_NEG] = ACTIONS(201),
    [anon_sym_NOT] = ACTIONS(201),
    [anon_sym_TRUE] = ACTIONS(201),
    [anon_sym_FALSE] = ACTIONS(201),
    [anon_sym_AND] = ACTIONS(201),
    [anon_sym_OR] = ACTIONS(201),
    [anon_sym_IOR] = ACTIONS(201),
    [anon_sym_XOR] = ACTIONS(201),
    [anon_sym_ADD] = ACTIONS(201),
    [anon_sym_SUB] = ACTIONS(201),
    [anon_sym_MUL] = ACTIONS(201),
    [anon_sym_DIV] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_GE] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LE] = ACTIONS(201),
    [anon_sym_SIN] = ACTIONS(201),
    [anon_sym_COS] = ACTIONS(201),
    [anon_sym_SQRT] = ACTIONS(201),
    [anon_sym_EXP] = ACTIONS(201),
    [anon_sym_CIS] = ACTIONS(201),
    [anon_sym_i] = ACTIONS(201),
    [anon_sym_pi] = ACTIONS(201),
    [sym_nonblocking] = ACTIONS(201),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(201),
    [sym_identifier] = ACTIONS(201),
    [sym__newline] = ACTIONS(199),
    [aux_sym__int_token1] = ACTIONS(201),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_DEFGATE] = ACTIONS(205),
    [anon_sym_AS] = ACTIONS(205),
    [anon_sym_MATRIX] = ACTIONS(205),
    [anon_sym_PERMUTATION] = ACTIONS(205),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(205),
    [anon_sym_DEFCIRCUIT] = ACTIONS(205),
    [anon_sym_DEFFRAME] = ACTIONS(205),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(205),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(205),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(205),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(205),
    [anon_sym_DEFWAVEFORM] = ACTIONS(205),
    [anon_sym_DEFCAL] = ACTIONS(205),
    [anon_sym_MEASURE] = ACTIONS(205),
    [anon_sym_CONTROLLED] = ACTIONS(205),
    [anon_sym_DAGGER] = ACTIONS(205),
    [anon_sym_FORKED] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_FENCE] = ACTIONS(205),
    [anon_sym_PULSE] = ACTIONS(205),
    [anon_sym_DELAY] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(205),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(205),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(205),
    [anon_sym_SET_DASHPHASE] = ACTIONS(205),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(205),
    [anon_sym_SET_DASHSCALE] = ACTIONS(205),
    [anon_sym_DECLARE] = ACTIONS(205),
    [anon_sym_SHARING] = ACTIONS(205),
    [anon_sym_OFFSET] = ACTIONS(205),
    [anon_sym_CAPTURE] = ACTIONS(205),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(205),
    [anon_sym_PRAGMA] = ACTIONS(205),
    [anon_sym_HALT] = ACTIONS(205),
    [anon_sym_NOP] = ACTIONS(205),
    [anon_sym_INCLUDE] = ACTIONS(205),
    [anon_sym_LABEL] = ACTIONS(205),
    [anon_sym_JUMP] = ACTIONS(205),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(205),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(205),
    [anon_sym_RESET] = ACTIONS(205),
    [anon_sym_WAIT] = ACTIONS(205),
    [anon_sym_STORE] = ACTIONS(205),
    [anon_sym_LOAD] = ACTIONS(205),
    [anon_sym_CONVERT] = ACTIONS(205),
    [anon_sym_EXCHANGE] = ACTIONS(205),
    [anon_sym_MOVE] = ACTIONS(205),
    [anon_sym_NEG] = ACTIONS(205),
    [anon_sym_NOT] = ACTIONS(205),
    [anon_sym_TRUE] = ACTIONS(205),
    [anon_sym_FALSE] = ACTIONS(205),
    [anon_sym_AND] = ACTIONS(205),
    [anon_sym_OR] = ACTIONS(205),
    [anon_sym_IOR] = ACTIONS(205),
    [anon_sym_XOR] = ACTIONS(205),
    [anon_sym_ADD] = ACTIONS(205),
    [anon_sym_SUB] = ACTIONS(205),
    [anon_sym_MUL] = ACTIONS(205),
    [anon_sym_DIV] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_GE] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_LE] = ACTIONS(205),
    [anon_sym_SIN] = ACTIONS(205),
    [anon_sym_COS] = ACTIONS(205),
    [anon_sym_SQRT] = ACTIONS(205),
    [anon_sym_EXP] = ACTIONS(205),
    [anon_sym_CIS] = ACTIONS(205),
    [anon_sym_i] = ACTIONS(205),
    [anon_sym_pi] = ACTIONS(205),
    [sym_nonblocking] = ACTIONS(205),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(205),
    [sym_identifier] = ACTIONS(205),
    [sym__newline] = ACTIONS(203),
    [aux_sym__int_token1] = ACTIONS(205),
  },
  [13] = {
    [aux_sym__int] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_DEFGATE] = ACTIONS(201),
    [anon_sym_AS] = ACTIONS(201),
    [anon_sym_MATRIX] = ACTIONS(201),
    [anon_sym_PERMUTATION] = ACTIONS(201),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(201),
    [anon_sym_DEFCIRCUIT] = ACTIONS(201),
    [anon_sym_DEFFRAME] = ACTIONS(201),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(201),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(201),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_DEFWAVEFORM] = ACTIONS(201),
    [anon_sym_DEFCAL] = ACTIONS(201),
    [anon_sym_MEASURE] = ACTIONS(201),
    [anon_sym_CONTROLLED] = ACTIONS(201),
    [anon_sym_DAGGER] = ACTIONS(201),
    [anon_sym_FORKED] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(199),
    [anon_sym_FENCE] = ACTIONS(201),
    [anon_sym_PULSE] = ACTIONS(201),
    [anon_sym_DELAY] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(201),
    [anon_sym_SET_DASHPHASE] = ACTIONS(201),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(201),
    [anon_sym_SET_DASHSCALE] = ACTIONS(201),
    [anon_sym_DECLARE] = ACTIONS(201),
    [anon_sym_SHARING] = ACTIONS(201),
    [anon_sym_OFFSET] = ACTIONS(201),
    [anon_sym_CAPTURE] = ACTIONS(201),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(201),
    [anon_sym_PRAGMA] = ACTIONS(201),
    [anon_sym_HALT] = ACTIONS(201),
    [anon_sym_NOP] = ACTIONS(201),
    [anon_sym_INCLUDE] = ACTIONS(201),
    [anon_sym_LABEL] = ACTIONS(201),
    [anon_sym_JUMP] = ACTIONS(201),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(201),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(201),
    [anon_sym_RESET] = ACTIONS(201),
    [anon_sym_WAIT] = ACTIONS(201),
    [anon_sym_STORE] = ACTIONS(201),
    [anon_sym_LOAD] = ACTIONS(201),
    [anon_sym_CONVERT] = ACTIONS(201),
    [anon_sym_EXCHANGE] = ACTIONS(201),
    [anon_sym_MOVE] = ACTIONS(201),
    [anon_sym_NEG] = ACTIONS(201),
    [anon_sym_NOT] = ACTIONS(201),
    [anon_sym_TRUE] = ACTIONS(201),
    [anon_sym_FALSE] = ACTIONS(201),
    [anon_sym_AND] = ACTIONS(201),
    [anon_sym_OR] = ACTIONS(201),
    [anon_sym_IOR] = ACTIONS(201),
    [anon_sym_XOR] = ACTIONS(201),
    [anon_sym_ADD] = ACTIONS(201),
    [anon_sym_SUB] = ACTIONS(201),
    [anon_sym_MUL] = ACTIONS(201),
    [anon_sym_DIV] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_GE] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LE] = ACTIONS(201),
    [anon_sym_SIN] = ACTIONS(201),
    [anon_sym_COS] = ACTIONS(201),
    [anon_sym_SQRT] = ACTIONS(201),
    [anon_sym_EXP] = ACTIONS(201),
    [anon_sym_CIS] = ACTIONS(201),
    [anon_sym_i] = ACTIONS(201),
    [anon_sym_pi] = ACTIONS(201),
    [sym_nonblocking] = ACTIONS(201),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(201),
    [sym_identifier] = ACTIONS(201),
    [aux_sym__int_token1] = ACTIONS(199),
  },
  [14] = {
    [aux_sym__int] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_DEFGATE] = ACTIONS(194),
    [anon_sym_AS] = ACTIONS(194),
    [anon_sym_MATRIX] = ACTIONS(194),
    [anon_sym_PERMUTATION] = ACTIONS(194),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(194),
    [anon_sym_DEFCIRCUIT] = ACTIONS(194),
    [anon_sym_DEFFRAME] = ACTIONS(194),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(194),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(194),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(194),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(194),
    [anon_sym_DEFWAVEFORM] = ACTIONS(194),
    [anon_sym_DEFCAL] = ACTIONS(194),
    [anon_sym_MEASURE] = ACTIONS(194),
    [anon_sym_CONTROLLED] = ACTIONS(194),
    [anon_sym_DAGGER] = ACTIONS(194),
    [anon_sym_FORKED] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(192),
    [anon_sym_FENCE] = ACTIONS(194),
    [anon_sym_PULSE] = ACTIONS(194),
    [anon_sym_DELAY] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(194),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(194),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(194),
    [anon_sym_SET_DASHPHASE] = ACTIONS(194),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(194),
    [anon_sym_SET_DASHSCALE] = ACTIONS(194),
    [anon_sym_DECLARE] = ACTIONS(194),
    [anon_sym_SHARING] = ACTIONS(194),
    [anon_sym_OFFSET] = ACTIONS(194),
    [anon_sym_CAPTURE] = ACTIONS(194),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(194),
    [anon_sym_PRAGMA] = ACTIONS(194),
    [anon_sym_HALT] = ACTIONS(194),
    [anon_sym_NOP] = ACTIONS(194),
    [anon_sym_INCLUDE] = ACTIONS(194),
    [anon_sym_LABEL] = ACTIONS(194),
    [anon_sym_JUMP] = ACTIONS(194),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(194),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(194),
    [anon_sym_RESET] = ACTIONS(194),
    [anon_sym_WAIT] = ACTIONS(194),
    [anon_sym_STORE] = ACTIONS(194),
    [anon_sym_LOAD] = ACTIONS(194),
    [anon_sym_CONVERT] = ACTIONS(194),
    [anon_sym_EXCHANGE] = ACTIONS(194),
    [anon_sym_MOVE] = ACTIONS(194),
    [anon_sym_NEG] = ACTIONS(194),
    [anon_sym_NOT] = ACTIONS(194),
    [anon_sym_TRUE] = ACTIONS(194),
    [anon_sym_FALSE] = ACTIONS(194),
    [anon_sym_AND] = ACTIONS(194),
    [anon_sym_OR] = ACTIONS(194),
    [anon_sym_IOR] = ACTIONS(194),
    [anon_sym_XOR] = ACTIONS(194),
    [anon_sym_ADD] = ACTIONS(194),
    [anon_sym_SUB] = ACTIONS(194),
    [anon_sym_MUL] = ACTIONS(194),
    [anon_sym_DIV] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [anon_sym_GE] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(194),
    [anon_sym_LE] = ACTIONS(194),
    [anon_sym_SIN] = ACTIONS(194),
    [anon_sym_COS] = ACTIONS(194),
    [anon_sym_SQRT] = ACTIONS(194),
    [anon_sym_EXP] = ACTIONS(194),
    [anon_sym_CIS] = ACTIONS(194),
    [anon_sym_i] = ACTIONS(194),
    [anon_sym_pi] = ACTIONS(194),
    [sym_nonblocking] = ACTIONS(194),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(194),
    [sym_identifier] = ACTIONS(194),
    [aux_sym__int_token1] = ACTIONS(207),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_DEFGATE] = ACTIONS(201),
    [anon_sym_AS] = ACTIONS(201),
    [anon_sym_MATRIX] = ACTIONS(201),
    [anon_sym_PERMUTATION] = ACTIONS(201),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(201),
    [anon_sym_DEFCIRCUIT] = ACTIONS(201),
    [anon_sym_DEFFRAME] = ACTIONS(201),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(201),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(201),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_DEFWAVEFORM] = ACTIONS(201),
    [anon_sym_DEFCAL] = ACTIONS(201),
    [anon_sym_MEASURE] = ACTIONS(201),
    [anon_sym_CONTROLLED] = ACTIONS(201),
    [anon_sym_DAGGER] = ACTIONS(201),
    [anon_sym_FORKED] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_CARET] = ACTIONS(201),
    [anon_sym_FENCE] = ACTIONS(201),
    [anon_sym_PULSE] = ACTIONS(201),
    [anon_sym_DELAY] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(201),
    [anon_sym_SET_DASHPHASE] = ACTIONS(201),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(201),
    [anon_sym_SET_DASHSCALE] = ACTIONS(201),
    [anon_sym_DECLARE] = ACTIONS(201),
    [anon_sym_SHARING] = ACTIONS(201),
    [anon_sym_OFFSET] = ACTIONS(201),
    [anon_sym_CAPTURE] = ACTIONS(201),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(201),
    [anon_sym_PRAGMA] = ACTIONS(201),
    [anon_sym_HALT] = ACTIONS(201),
    [anon_sym_NOP] = ACTIONS(201),
    [anon_sym_INCLUDE] = ACTIONS(201),
    [anon_sym_LABEL] = ACTIONS(201),
    [anon_sym_JUMP] = ACTIONS(201),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(201),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(201),
    [anon_sym_RESET] = ACTIONS(201),
    [anon_sym_WAIT] = ACTIONS(201),
    [anon_sym_STORE] = ACTIONS(201),
    [anon_sym_LOAD] = ACTIONS(201),
    [anon_sym_CONVERT] = ACTIONS(201),
    [anon_sym_EXCHANGE] = ACTIONS(201),
    [anon_sym_MOVE] = ACTIONS(201),
    [anon_sym_NEG] = ACTIONS(201),
    [anon_sym_NOT] = ACTIONS(201),
    [anon_sym_TRUE] = ACTIONS(201),
    [anon_sym_FALSE] = ACTIONS(201),
    [anon_sym_AND] = ACTIONS(201),
    [anon_sym_OR] = ACTIONS(201),
    [anon_sym_IOR] = ACTIONS(201),
    [anon_sym_XOR] = ACTIONS(201),
    [anon_sym_ADD] = ACTIONS(201),
    [anon_sym_SUB] = ACTIONS(201),
    [anon_sym_MUL] = ACTIONS(201),
    [anon_sym_DIV] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_GE] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LE] = ACTIONS(201),
    [anon_sym_SIN] = ACTIONS(201),
    [anon_sym_COS] = ACTIONS(201),
    [anon_sym_SQRT] = ACTIONS(201),
    [anon_sym_EXP] = ACTIONS(201),
    [anon_sym_CIS] = ACTIONS(201),
    [anon_sym_i] = ACTIONS(201),
    [anon_sym_pi] = ACTIONS(201),
    [sym_nonblocking] = ACTIONS(201),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(201),
    [sym_identifier] = ACTIONS(201),
    [sym__newline] = ACTIONS(199),
    [aux_sym__int_token1] = ACTIONS(201),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_DEFGATE] = ACTIONS(201),
    [anon_sym_AS] = ACTIONS(201),
    [anon_sym_MATRIX] = ACTIONS(201),
    [anon_sym_PERMUTATION] = ACTIONS(201),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(201),
    [anon_sym_DEFCIRCUIT] = ACTIONS(201),
    [anon_sym_DEFFRAME] = ACTIONS(201),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(201),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(201),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_DEFWAVEFORM] = ACTIONS(201),
    [anon_sym_DEFCAL] = ACTIONS(201),
    [anon_sym_MEASURE] = ACTIONS(201),
    [anon_sym_CONTROLLED] = ACTIONS(201),
    [anon_sym_DAGGER] = ACTIONS(201),
    [anon_sym_FORKED] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(199),
    [anon_sym_FENCE] = ACTIONS(201),
    [anon_sym_PULSE] = ACTIONS(201),
    [anon_sym_DELAY] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(201),
    [anon_sym_SET_DASHPHASE] = ACTIONS(201),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(201),
    [anon_sym_SET_DASHSCALE] = ACTIONS(201),
    [anon_sym_DECLARE] = ACTIONS(201),
    [anon_sym_SHARING] = ACTIONS(201),
    [anon_sym_OFFSET] = ACTIONS(201),
    [anon_sym_CAPTURE] = ACTIONS(201),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(201),
    [anon_sym_PRAGMA] = ACTIONS(201),
    [anon_sym_HALT] = ACTIONS(201),
    [anon_sym_NOP] = ACTIONS(201),
    [anon_sym_INCLUDE] = ACTIONS(201),
    [anon_sym_LABEL] = ACTIONS(201),
    [anon_sym_JUMP] = ACTIONS(201),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(201),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(201),
    [anon_sym_RESET] = ACTIONS(201),
    [anon_sym_WAIT] = ACTIONS(201),
    [anon_sym_STORE] = ACTIONS(201),
    [anon_sym_LOAD] = ACTIONS(201),
    [anon_sym_CONVERT] = ACTIONS(201),
    [anon_sym_EXCHANGE] = ACTIONS(201),
    [anon_sym_MOVE] = ACTIONS(201),
    [anon_sym_NEG] = ACTIONS(201),
    [anon_sym_NOT] = ACTIONS(201),
    [anon_sym_TRUE] = ACTIONS(201),
    [anon_sym_FALSE] = ACTIONS(201),
    [anon_sym_AND] = ACTIONS(201),
    [anon_sym_OR] = ACTIONS(201),
    [anon_sym_IOR] = ACTIONS(201),
    [anon_sym_XOR] = ACTIONS(201),
    [anon_sym_ADD] = ACTIONS(201),
    [anon_sym_SUB] = ACTIONS(201),
    [anon_sym_MUL] = ACTIONS(201),
    [anon_sym_DIV] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_GE] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LE] = ACTIONS(201),
    [anon_sym_SIN] = ACTIONS(201),
    [anon_sym_COS] = ACTIONS(201),
    [anon_sym_SQRT] = ACTIONS(201),
    [anon_sym_EXP] = ACTIONS(201),
    [anon_sym_CIS] = ACTIONS(201),
    [anon_sym_i] = ACTIONS(201),
    [anon_sym_pi] = ACTIONS(201),
    [sym_nonblocking] = ACTIONS(201),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(201),
    [sym_identifier] = ACTIONS(201),
    [aux_sym__int_token1] = ACTIONS(199),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_DEFGATE] = ACTIONS(205),
    [anon_sym_AS] = ACTIONS(205),
    [anon_sym_MATRIX] = ACTIONS(205),
    [anon_sym_PERMUTATION] = ACTIONS(205),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(205),
    [anon_sym_DEFCIRCUIT] = ACTIONS(205),
    [anon_sym_DEFFRAME] = ACTIONS(205),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(205),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(205),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(205),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(205),
    [anon_sym_DEFWAVEFORM] = ACTIONS(205),
    [anon_sym_DEFCAL] = ACTIONS(205),
    [anon_sym_MEASURE] = ACTIONS(205),
    [anon_sym_CONTROLLED] = ACTIONS(205),
    [anon_sym_DAGGER] = ACTIONS(205),
    [anon_sym_FORKED] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_CARET] = ACTIONS(203),
    [anon_sym_FENCE] = ACTIONS(205),
    [anon_sym_PULSE] = ACTIONS(205),
    [anon_sym_DELAY] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(205),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(205),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(205),
    [anon_sym_SET_DASHPHASE] = ACTIONS(205),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(205),
    [anon_sym_SET_DASHSCALE] = ACTIONS(205),
    [anon_sym_DECLARE] = ACTIONS(205),
    [anon_sym_SHARING] = ACTIONS(205),
    [anon_sym_OFFSET] = ACTIONS(205),
    [anon_sym_CAPTURE] = ACTIONS(205),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(205),
    [anon_sym_PRAGMA] = ACTIONS(205),
    [anon_sym_HALT] = ACTIONS(205),
    [anon_sym_NOP] = ACTIONS(205),
    [anon_sym_INCLUDE] = ACTIONS(205),
    [anon_sym_LABEL] = ACTIONS(205),
    [anon_sym_JUMP] = ACTIONS(205),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(205),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(205),
    [anon_sym_RESET] = ACTIONS(205),
    [anon_sym_WAIT] = ACTIONS(205),
    [anon_sym_STORE] = ACTIONS(205),
    [anon_sym_LOAD] = ACTIONS(205),
    [anon_sym_CONVERT] = ACTIONS(205),
    [anon_sym_EXCHANGE] = ACTIONS(205),
    [anon_sym_MOVE] = ACTIONS(205),
    [anon_sym_NEG] = ACTIONS(205),
    [anon_sym_NOT] = ACTIONS(205),
    [anon_sym_TRUE] = ACTIONS(205),
    [anon_sym_FALSE] = ACTIONS(205),
    [anon_sym_AND] = ACTIONS(205),
    [anon_sym_OR] = ACTIONS(205),
    [anon_sym_IOR] = ACTIONS(205),
    [anon_sym_XOR] = ACTIONS(205),
    [anon_sym_ADD] = ACTIONS(205),
    [anon_sym_SUB] = ACTIONS(205),
    [anon_sym_MUL] = ACTIONS(205),
    [anon_sym_DIV] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_GE] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_LE] = ACTIONS(205),
    [anon_sym_SIN] = ACTIONS(205),
    [anon_sym_COS] = ACTIONS(205),
    [anon_sym_SQRT] = ACTIONS(205),
    [anon_sym_EXP] = ACTIONS(205),
    [anon_sym_CIS] = ACTIONS(205),
    [anon_sym_i] = ACTIONS(205),
    [anon_sym_pi] = ACTIONS(205),
    [sym_nonblocking] = ACTIONS(205),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(205),
    [sym_identifier] = ACTIONS(205),
    [aux_sym__int_token1] = ACTIONS(203),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_DEFGATE] = ACTIONS(201),
    [anon_sym_AS] = ACTIONS(201),
    [anon_sym_MATRIX] = ACTIONS(201),
    [anon_sym_PERMUTATION] = ACTIONS(201),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(201),
    [anon_sym_DEFCIRCUIT] = ACTIONS(201),
    [anon_sym_DEFFRAME] = ACTIONS(201),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(201),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(201),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_DEFWAVEFORM] = ACTIONS(201),
    [anon_sym_DEFCAL] = ACTIONS(201),
    [anon_sym_MEASURE] = ACTIONS(201),
    [anon_sym_CONTROLLED] = ACTIONS(201),
    [anon_sym_DAGGER] = ACTIONS(201),
    [anon_sym_FORKED] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(199),
    [anon_sym_FENCE] = ACTIONS(201),
    [anon_sym_PULSE] = ACTIONS(201),
    [anon_sym_DELAY] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(201),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(201),
    [anon_sym_SET_DASHPHASE] = ACTIONS(201),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(201),
    [anon_sym_SET_DASHSCALE] = ACTIONS(201),
    [anon_sym_DECLARE] = ACTIONS(201),
    [anon_sym_SHARING] = ACTIONS(201),
    [anon_sym_OFFSET] = ACTIONS(201),
    [anon_sym_CAPTURE] = ACTIONS(201),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(201),
    [anon_sym_PRAGMA] = ACTIONS(201),
    [anon_sym_HALT] = ACTIONS(201),
    [anon_sym_NOP] = ACTIONS(201),
    [anon_sym_INCLUDE] = ACTIONS(201),
    [anon_sym_LABEL] = ACTIONS(201),
    [anon_sym_JUMP] = ACTIONS(201),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(201),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(201),
    [anon_sym_RESET] = ACTIONS(201),
    [anon_sym_WAIT] = ACTIONS(201),
    [anon_sym_STORE] = ACTIONS(201),
    [anon_sym_LOAD] = ACTIONS(201),
    [anon_sym_CONVERT] = ACTIONS(201),
    [anon_sym_EXCHANGE] = ACTIONS(201),
    [anon_sym_MOVE] = ACTIONS(201),
    [anon_sym_NEG] = ACTIONS(201),
    [anon_sym_NOT] = ACTIONS(201),
    [anon_sym_TRUE] = ACTIONS(201),
    [anon_sym_FALSE] = ACTIONS(201),
    [anon_sym_AND] = ACTIONS(201),
    [anon_sym_OR] = ACTIONS(201),
    [anon_sym_IOR] = ACTIONS(201),
    [anon_sym_XOR] = ACTIONS(201),
    [anon_sym_ADD] = ACTIONS(201),
    [anon_sym_SUB] = ACTIONS(201),
    [anon_sym_MUL] = ACTIONS(201),
    [anon_sym_DIV] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_GE] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LE] = ACTIONS(201),
    [anon_sym_SIN] = ACTIONS(201),
    [anon_sym_COS] = ACTIONS(201),
    [anon_sym_SQRT] = ACTIONS(201),
    [anon_sym_EXP] = ACTIONS(201),
    [anon_sym_CIS] = ACTIONS(201),
    [anon_sym_i] = ACTIONS(201),
    [anon_sym_pi] = ACTIONS(201),
    [sym_nonblocking] = ACTIONS(201),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(201),
    [sym_identifier] = ACTIONS(201),
    [aux_sym__int_token1] = ACTIONS(199),
  },
  [19] = {
    [sym_keyword] = STATE(5),
    [anon_sym_DEFGATE] = ACTIONS(157),
    [anon_sym_AS] = ACTIONS(157),
    [anon_sym_MATRIX] = ACTIONS(157),
    [anon_sym_PERMUTATION] = ACTIONS(157),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(157),
    [anon_sym_DEFCIRCUIT] = ACTIONS(157),
    [anon_sym_DEFFRAME] = ACTIONS(157),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(157),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(157),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(157),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(157),
    [anon_sym_DEFWAVEFORM] = ACTIONS(157),
    [anon_sym_DEFCAL] = ACTIONS(157),
    [anon_sym_MEASURE] = ACTIONS(157),
    [anon_sym_CONTROLLED] = ACTIONS(157),
    [anon_sym_DAGGER] = ACTIONS(157),
    [anon_sym_FORKED] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_CARET] = ACTIONS(159),
    [anon_sym_FENCE] = ACTIONS(157),
    [anon_sym_PULSE] = ACTIONS(157),
    [anon_sym_DELAY] = ACTIONS(157),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(157),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(157),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(157),
    [anon_sym_SET_DASHPHASE] = ACTIONS(157),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(157),
    [anon_sym_SET_DASHSCALE] = ACTIONS(157),
    [anon_sym_DECLARE] = ACTIONS(157),
    [anon_sym_SHARING] = ACTIONS(157),
    [anon_sym_OFFSET] = ACTIONS(157),
    [anon_sym_CAPTURE] = ACTIONS(157),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(157),
    [anon_sym_PRAGMA] = ACTIONS(157),
    [anon_sym_HALT] = ACTIONS(157),
    [anon_sym_NOP] = ACTIONS(157),
    [anon_sym_INCLUDE] = ACTIONS(157),
    [anon_sym_LABEL] = ACTIONS(157),
    [anon_sym_JUMP] = ACTIONS(157),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(157),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(157),
    [anon_sym_RESET] = ACTIONS(157),
    [anon_sym_WAIT] = ACTIONS(157),
    [anon_sym_STORE] = ACTIONS(157),
    [anon_sym_LOAD] = ACTIONS(157),
    [anon_sym_CONVERT] = ACTIONS(157),
    [anon_sym_EXCHANGE] = ACTIONS(157),
    [anon_sym_MOVE] = ACTIONS(157),
    [anon_sym_NEG] = ACTIONS(157),
    [anon_sym_NOT] = ACTIONS(157),
    [anon_sym_TRUE] = ACTIONS(157),
    [anon_sym_FALSE] = ACTIONS(157),
    [anon_sym_AND] = ACTIONS(157),
    [anon_sym_OR] = ACTIONS(157),
    [anon_sym_IOR] = ACTIONS(157),
    [anon_sym_XOR] = ACTIONS(157),
    [anon_sym_ADD] = ACTIONS(157),
    [anon_sym_SUB] = ACTIONS(157),
    [anon_sym_MUL] = ACTIONS(157),
    [anon_sym_DIV] = ACTIONS(157),
    [anon_sym_EQ] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_GE] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_LE] = ACTIONS(157),
    [anon_sym_SIN] = ACTIONS(157),
    [anon_sym_COS] = ACTIONS(157),
    [anon_sym_SQRT] = ACTIONS(157),
    [anon_sym_EXP] = ACTIONS(157),
    [anon_sym_CIS] = ACTIONS(157),
    [anon_sym_i] = ACTIONS(157),
    [anon_sym_pi] = ACTIONS(157),
    [sym_nonblocking] = ACTIONS(157),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(157),
    [sym_identifier] = ACTIONS(210),
  },
  [20] = {
    [sym_keyword] = STATE(3),
    [anon_sym_DEFGATE] = ACTIONS(147),
    [anon_sym_AS] = ACTIONS(147),
    [anon_sym_MATRIX] = ACTIONS(147),
    [anon_sym_PERMUTATION] = ACTIONS(147),
    [anon_sym_PAULI_DASHSUM] = ACTIONS(147),
    [anon_sym_DEFCIRCUIT] = ACTIONS(147),
    [anon_sym_DEFFRAME] = ACTIONS(147),
    [anon_sym_SAMPLE_DASHRATE] = ACTIONS(147),
    [anon_sym_INITIAL_DASHFREQUENCY] = ACTIONS(147),
    [anon_sym_HARDWARE_DASHOBJECT] = ACTIONS(147),
    [anon_sym_CENTER_DASHFREQUENCY] = ACTIONS(147),
    [anon_sym_DEFWAVEFORM] = ACTIONS(147),
    [anon_sym_DEFCAL] = ACTIONS(147),
    [anon_sym_MEASURE] = ACTIONS(147),
    [anon_sym_CONTROLLED] = ACTIONS(147),
    [anon_sym_DAGGER] = ACTIONS(147),
    [anon_sym_FORKED] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_SLASH] = ACTIONS(212),
    [anon_sym_CARET] = ACTIONS(212),
    [anon_sym_FENCE] = ACTIONS(147),
    [anon_sym_PULSE] = ACTIONS(147),
    [anon_sym_DELAY] = ACTIONS(147),
    [anon_sym_SET_DASHFREQUENCY] = ACTIONS(147),
    [anon_sym_SHIFT_DASHFREQUENCY] = ACTIONS(147),
    [anon_sym_SHIFT_DASHPHASE] = ACTIONS(147),
    [anon_sym_SET_DASHPHASE] = ACTIONS(147),
    [anon_sym_SWAP_DASHPHASE] = ACTIONS(147),
    [anon_sym_SET_DASHSCALE] = ACTIONS(147),
    [anon_sym_DECLARE] = ACTIONS(147),
    [anon_sym_SHARING] = ACTIONS(147),
    [anon_sym_OFFSET] = ACTIONS(147),
    [anon_sym_CAPTURE] = ACTIONS(147),
    [anon_sym_RAW_DASHCAPTURE] = ACTIONS(147),
    [anon_sym_PRAGMA] = ACTIONS(147),
    [anon_sym_HALT] = ACTIONS(147),
    [anon_sym_NOP] = ACTIONS(147),
    [anon_sym_INCLUDE] = ACTIONS(147),
    [anon_sym_LABEL] = ACTIONS(147),
    [anon_sym_JUMP] = ACTIONS(147),
    [anon_sym_JUMP_DASHWHEN] = ACTIONS(147),
    [anon_sym_JUMP_DASHUNLESS] = ACTIONS(147),
    [anon_sym_RESET] = ACTIONS(147),
    [anon_sym_WAIT] = ACTIONS(147),
    [anon_sym_STORE] = ACTIONS(147),
    [anon_sym_LOAD] = ACTIONS(147),
    [anon_sym_CONVERT] = ACTIONS(147),
    [anon_sym_EXCHANGE] = ACTIONS(147),
    [anon_sym_MOVE] = ACTIONS(147),
    [anon_sym_NEG] = ACTIONS(147),
    [anon_sym_NOT] = ACTIONS(147),
    [anon_sym_TRUE] = ACTIONS(147),
    [anon_sym_FALSE] = ACTIONS(147),
    [anon_sym_AND] = ACTIONS(147),
    [anon_sym_OR] = ACTIONS(147),
    [anon_sym_IOR] = ACTIONS(147),
    [anon_sym_XOR] = ACTIONS(147),
    [anon_sym_ADD] = ACTIONS(147),
    [anon_sym_SUB] = ACTIONS(147),
    [anon_sym_MUL] = ACTIONS(147),
    [anon_sym_DIV] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_GE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_LE] = ACTIONS(147),
    [anon_sym_SIN] = ACTIONS(147),
    [anon_sym_COS] = ACTIONS(147),
    [anon_sym_SQRT] = ACTIONS(147),
    [anon_sym_EXP] = ACTIONS(147),
    [anon_sym_CIS] = ACTIONS(147),
    [anon_sym_i] = ACTIONS(147),
    [anon_sym_pi] = ACTIONS(147),
    [sym_nonblocking] = ACTIONS(147),
    [anon_sym_FILTER_DASHNODE] = ACTIONS(147),
    [sym_identifier] = ACTIONS(214),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(216), 50,
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
  [53] = 24,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_PERCENT,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      aux_sym__int_token1,
    STATE(62), 1,
      aux_sym__int,
    STATE(69), 1,
      sym_int_n,
    STATE(70), 1,
      sym_variable,
    STATE(76), 1,
      sym_qubit,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(114), 1,
      sym_float_n,
    STATE(163), 1,
      sym_atom,
    STATE(196), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(286), 1,
      sym_expression,
    STATE(561), 1,
      sym_function,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(222), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(63), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(140), 2,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [135] = 24,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_PERCENT,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(252), 1,
      aux_sym__int_token1,
    STATE(64), 1,
      aux_sym__int,
    STATE(72), 1,
      sym_variable,
    STATE(75), 1,
      sym_int_n,
    STATE(82), 1,
      sym_qubit,
    STATE(104), 1,
      sym__decimal,
    STATE(146), 1,
      sym_float_n,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(375), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(65), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(191), 2,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [216] = 21,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(196), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(235), 1,
      sym_expression,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(331), 2,
      sym__string,
      sym__escaped_string,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [290] = 21,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(83), 1,
      aux_sym_delay_frames_repeat1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(348), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [363] = 21,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      aux_sym_delay_frames_repeat1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(196), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(262), 1,
      sym_expression,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [436] = 20,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(261), 1,
      sym_expression,
    STATE(413), 1,
      sym_param,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [506] = 20,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(234), 1,
      sym_expression,
    STATE(543), 1,
      sym_matrix_row,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [576] = 20,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(196), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(211), 1,
      sym_expression,
    STATE(508), 1,
      sym_matrix_row,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [646] = 20,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(261), 1,
      sym_expression,
    STATE(481), 1,
      sym_param,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [716] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(247), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [783] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(297), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [850] = 19,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(196), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(275), 1,
      sym_expression,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [917] = 19,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(196), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(277), 1,
      sym_expression,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [984] = 19,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(196), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(280), 1,
      sym_expression,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1051] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(341), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1118] = 19,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(196), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(272), 1,
      sym_expression,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1185] = 19,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(196), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(273), 1,
      sym_expression,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1252] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(332), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1319] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(337), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1386] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(314), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1453] = 19,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(196), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(274), 1,
      sym_expression,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1520] = 19,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(196), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(236), 1,
      sym_expression,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1587] = 19,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(196), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(213), 1,
      sym_expression,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1654] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(370), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1721] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(347), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1788] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(356), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1855] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(357), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1922] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(365), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [1989] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(366), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2056] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(372), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2123] = 19,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(198), 1,
      sym_product,
    STATE(199), 1,
      sym_power,
    STATE(367), 1,
      sym_expression,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2190] = 18,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(199), 1,
      sym_power,
    STATE(202), 1,
      sym_product,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2254] = 18,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(186), 1,
      sym_product,
    STATE(197), 1,
      sym_power,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2318] = 17,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(185), 1,
      sym_power,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2379] = 17,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(163), 1,
      sym_atom,
    STATE(184), 1,
      sym_power,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2440] = 17,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(200), 1,
      sym_power,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2501] = 17,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(192), 1,
      sym_atom,
    STATE(201), 1,
      sym_power,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2562] = 16,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(132), 1,
      sym_atom,
    STATE(561), 1,
      sym_function,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    ACTIONS(256), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(140), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2620] = 16,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(180), 1,
      sym_atom,
    STATE(557), 1,
      sym_function,
    ACTIONS(240), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(191), 3,
      sym_variable,
      sym_addr,
      sym_number,
    ACTIONS(228), 5,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
  [2678] = 4,
    ACTIONS(272), 1,
      aux_sym__int_token1,
    STATE(61), 1,
      aux_sym__int,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(194), 19,
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
  [2710] = 4,
    STATE(61), 1,
      aux_sym__int,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(277), 18,
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
  [2742] = 8,
    ACTIONS(285), 1,
      anon_sym_PERCENT,
    ACTIONS(288), 1,
      aux_sym__int_token1,
    STATE(74), 1,
      aux_sym__int,
    STATE(78), 1,
      sym_int_n,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(63), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(76), 2,
      sym_variable,
      sym_qubit,
    ACTIONS(283), 13,
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
  [2782] = 4,
    STATE(66), 1,
      aux_sym__int,
    ACTIONS(291), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(277), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
    ACTIONS(275), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
  [2813] = 8,
    ACTIONS(293), 1,
      anon_sym_PERCENT,
    ACTIONS(296), 1,
      aux_sym__int_token1,
    STATE(79), 1,
      aux_sym__int,
    STATE(81), 1,
      sym_int_n,
    STATE(65), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(82), 2,
      sym_variable,
      sym_qubit,
    ACTIONS(281), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(283), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [2852] = 4,
    ACTIONS(299), 1,
      aux_sym__int_token1,
    STATE(66), 1,
      aux_sym__int,
    ACTIONS(192), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(194), 10,
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
  [2883] = 2,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(304), 19,
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
  [2909] = 2,
    ACTIONS(304), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
    ACTIONS(302), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
  [2934] = 3,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
    ACTIONS(308), 15,
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
  [2961] = 3,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(316), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
    ACTIONS(314), 15,
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
  [2988] = 4,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_delay_frames_repeat1,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(320), 15,
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
  [3016] = 3,
    ACTIONS(324), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(314), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [3042] = 4,
    ACTIONS(326), 1,
      aux_sym__int_token1,
    STATE(73), 1,
      aux_sym__int,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(194), 15,
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
  [3070] = 3,
    STATE(73), 1,
      aux_sym__int,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(277), 16,
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
  [3096] = 3,
    ACTIONS(329), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(308), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [3122] = 2,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(314), 16,
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
  [3145] = 4,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_delay_frames_repeat1,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(320), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [3172] = 2,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(308), 16,
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
  [3195] = 3,
    STATE(80), 1,
      aux_sym__int,
    ACTIONS(277), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
    ACTIONS(275), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
  [3220] = 4,
    ACTIONS(331), 1,
      aux_sym__int_token1,
    STATE(80), 1,
      aux_sym__int,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(194), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [3247] = 2,
    ACTIONS(308), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
    ACTIONS(306), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
  [3269] = 2,
    ACTIONS(314), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
    ACTIONS(312), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
  [3291] = 4,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      aux_sym_delay_frames_repeat1,
    ACTIONS(334), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(339), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [3317] = 4,
    ACTIONS(341), 1,
      aux_sym__int_token1,
    STATE(84), 1,
      aux_sym__int,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(194), 12,
      anon_sym_COLON,
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
  [3342] = 2,
    ACTIONS(344), 8,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(346), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [3363] = 2,
    ACTIONS(348), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(216), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [3383] = 6,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      aux_sym__int_token1,
    STATE(84), 1,
      aux_sym__int,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(279), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(277), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3411] = 2,
    ACTIONS(354), 7,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(356), 8,
      anon_sym_SIN,
      anon_sym_COS,
      anon_sym_SQRT,
      anon_sym_EXP,
      anon_sym_CIS,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [3431] = 3,
    ACTIONS(358), 1,
      aux_sym__int_token1,
    STATE(89), 1,
      aux_sym__int,
    ACTIONS(192), 12,
      ts_builtin_sym_end,
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
  [3452] = 4,
    ACTIONS(365), 1,
      aux_sym__int_token1,
    STATE(92), 1,
      aux_sym__int,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(363), 10,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
  [3475] = 4,
    ACTIONS(352), 1,
      aux_sym__int_token1,
    STATE(84), 1,
      aux_sym__int,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(363), 10,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
  [3498] = 4,
    ACTIONS(352), 1,
      aux_sym__int_token1,
    STATE(84), 1,
      aux_sym__int,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(369), 10,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
      anon_sym_e,
      anon_sym_E,
  [3521] = 5,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(375), 1,
      aux_sym__int_token1,
    STATE(89), 1,
      aux_sym__int,
    ACTIONS(371), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(275), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3546] = 1,
    ACTIONS(302), 14,
      ts_builtin_sym_end,
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
      anon_sym_LBRACK,
      sym_identifier,
      aux_sym__int_token1,
  [3563] = 10,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    ACTIONS(230), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
    STATE(494), 2,
      sym_addr,
      sym_number,
  [3597] = 2,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(304), 11,
      anon_sym_COLON,
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
  [3615] = 3,
    ACTIONS(377), 1,
      aux_sym__int_token1,
    STATE(100), 1,
      aux_sym__int,
    ACTIONS(361), 11,
      ts_builtin_sym_end,
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
  [3635] = 3,
    ACTIONS(375), 1,
      aux_sym__int_token1,
    STATE(89), 1,
      aux_sym__int,
    ACTIONS(361), 11,
      ts_builtin_sym_end,
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
  [3655] = 10,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    ACTIONS(246), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
    STATE(494), 2,
      sym_addr,
      sym_number,
  [3689] = 3,
    ACTIONS(375), 1,
      aux_sym__int_token1,
    STATE(89), 1,
      aux_sym__int,
    ACTIONS(367), 11,
      ts_builtin_sym_end,
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
  [3709] = 9,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_PERCENT,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    STATE(187), 1,
      sym_params,
    STATE(208), 1,
      sym_int_n,
    STATE(243), 1,
      aux_sym__int,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(126), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3740] = 4,
    ACTIONS(352), 1,
      aux_sym__int_token1,
    STATE(84), 1,
      aux_sym__int,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(389), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3761] = 3,
    ACTIONS(279), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(393), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3780] = 2,
    ACTIONS(371), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(391), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3796] = 1,
    ACTIONS(395), 11,
      ts_builtin_sym_end,
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
  [3810] = 1,
    ACTIONS(397), 11,
      ts_builtin_sym_end,
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
  [3824] = 3,
    ACTIONS(375), 1,
      aux_sym__int_token1,
    STATE(89), 1,
      aux_sym__int,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3842] = 9,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(138), 1,
      sym_variables,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(139), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [3872] = 9,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym_params,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(142), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [3902] = 7,
    ACTIONS(407), 1,
      anon_sym_PERCENT,
    ACTIONS(410), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
    ACTIONS(281), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DQUOTE,
  [3928] = 8,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_params,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(164), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [3955] = 7,
    ACTIONS(383), 1,
      anon_sym_PERCENT,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    STATE(208), 1,
      sym_int_n,
    STATE(243), 1,
      aux_sym__int,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(124), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [3980] = 2,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(417), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [3995] = 3,
    ACTIONS(419), 1,
      anon_sym_i,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(310), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4012] = 7,
    ACTIONS(383), 1,
      anon_sym_PERCENT,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    STATE(208), 1,
      sym_int_n,
    STATE(243), 1,
      aux_sym__int,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(124), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [4037] = 2,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym_identifier,
  [4052] = 8,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      aux_sym__int_token1,
    STATE(195), 1,
      sym_params,
    STATE(208), 1,
      sym_int_n,
    STATE(243), 1,
      aux_sym__int,
    STATE(115), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [4079] = 8,
    ACTIONS(262), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      aux_sym__int_token1,
    STATE(87), 1,
      aux_sym__int,
    STATE(103), 1,
      sym__decimal,
    STATE(113), 1,
      sym__float,
    STATE(497), 1,
      sym_number,
    ACTIONS(429), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(114), 2,
      sym_int_n,
      sym_float_n,
  [4106] = 2,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(433), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [4121] = 3,
    ACTIONS(437), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(435), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4138] = 7,
    ACTIONS(383), 1,
      anon_sym_PERCENT,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    STATE(208), 1,
      sym_int_n,
    STATE(243), 1,
      aux_sym__int,
    ACTIONS(439), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(125), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [4163] = 8,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_params,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(145), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4190] = 8,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      aux_sym__int_token1,
    STATE(93), 1,
      aux_sym__int,
    STATE(104), 1,
      sym__decimal,
    STATE(147), 1,
      sym__float,
    STATE(497), 1,
      sym_number,
    ACTIONS(441), 2,
      anon_sym_i,
      anon_sym_pi,
    STATE(146), 2,
      sym_int_n,
      sym_float_n,
  [4217] = 7,
    ACTIONS(443), 1,
      anon_sym_PERCENT,
    ACTIONS(446), 1,
      aux_sym__int_token1,
    STATE(208), 1,
      sym_int_n,
    STATE(243), 1,
      aux_sym__int,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(124), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [4242] = 7,
    ACTIONS(383), 1,
      anon_sym_PERCENT,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    STATE(208), 1,
      sym_int_n,
    STATE(243), 1,
      aux_sym__int,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(124), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [4267] = 7,
    ACTIONS(383), 1,
      anon_sym_PERCENT,
    ACTIONS(385), 1,
      aux_sym__int_token1,
    STATE(208), 1,
      sym_int_n,
    STATE(243), 1,
      aux_sym__int,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(124), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [4292] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(283), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4316] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(292), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4340] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(321), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4364] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4388] = 2,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(310), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4402] = 2,
    ACTIONS(453), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(455), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4416] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(258), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4440] = 3,
    ACTIONS(457), 1,
      aux_sym__int_token1,
    STATE(134), 1,
      aux_sym__int,
    ACTIONS(192), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
  [4456] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(259), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4480] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(260), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4504] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(256), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4528] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(460), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(166), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4552] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(460), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4576] = 2,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(316), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4590] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(462), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4614] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4638] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(157), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4662] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(317), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4686] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(464), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4710] = 2,
    ACTIONS(466), 1,
      anon_sym_i,
    ACTIONS(329), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4724] = 1,
    ACTIONS(415), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [4736] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4760] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(308), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4784] = 2,
    ACTIONS(470), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(472), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4798] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(45), 1,
      sym_frame,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(148), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4822] = 2,
    ACTIONS(474), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(476), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4836] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(52), 1,
      sym_frame,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(148), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4860] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(50), 1,
      sym_frame,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(148), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4884] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(49), 1,
      sym_frame,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(148), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4908] = 2,
    ACTIONS(478), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(480), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4922] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(449), 1,
      ts_builtin_sym_end,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4946] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [4970] = 2,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(484), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4984] = 2,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(486), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [4998] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(48), 1,
      sym_frame,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(148), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5022] = 2,
    ACTIONS(490), 2,
      anon_sym_AS,
      sym_identifier,
    ACTIONS(488), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym__int_token1,
  [5036] = 3,
    ACTIONS(496), 1,
      anon_sym_CARET,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(494), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [5052] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5076] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(263), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5100] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    ACTIONS(498), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(110), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5124] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(35), 1,
      sym_frame,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(148), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5148] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(34), 1,
      sym_frame,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(148), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5172] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(33), 1,
      sym_frame,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(148), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5196] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(42), 1,
      sym_frame,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(148), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5220] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(38), 1,
      sym_frame,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(148), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5244] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(37), 1,
      sym_frame,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(148), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5268] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(288), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5292] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(311), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5316] = 1,
    ACTIONS(431), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_i,
  [5328] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(47), 1,
      sym_frame,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(148), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5352] = 7,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(270), 1,
      sym_frame,
    STATE(158), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5376] = 1,
    ACTIONS(474), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [5387] = 1,
    ACTIONS(478), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [5398] = 1,
    ACTIONS(453), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [5409] = 6,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(130), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5430] = 7,
    ACTIONS(500), 1,
      anon_sym_PERCENT,
    ACTIONS(502), 1,
      aux_sym__int_token1,
    STATE(22), 1,
      aux_sym_def_circuit_repeat1,
    STATE(71), 1,
      sym_qubit_designator,
    STATE(74), 1,
      aux_sym__int,
    STATE(78), 1,
      sym_int_n,
    STATE(76), 2,
      sym_variable,
      sym_qubit,
  [5453] = 7,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(504), 1,
      anon_sym_AS,
    ACTIONS(506), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(238), 1,
      sym_variables,
    STATE(559), 1,
      sym_qubit_variables,
    STATE(265), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [5476] = 2,
    ACTIONS(510), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(512), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [5489] = 2,
    ACTIONS(514), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(516), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [5502] = 3,
    ACTIONS(518), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(522), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(520), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5517] = 6,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(427), 1,
      aux_sym__int_token1,
    STATE(208), 1,
      sym_int_n,
    STATE(243), 1,
      aux_sym__int,
    STATE(115), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [5538] = 7,
    ACTIONS(242), 1,
      anon_sym_PERCENT,
    ACTIONS(524), 1,
      aux_sym__int_token1,
    STATE(23), 1,
      aux_sym_def_circuit_repeat1,
    STATE(77), 1,
      sym_qubit_designator,
    STATE(79), 1,
      aux_sym__int,
    STATE(81), 1,
      sym_int_n,
    STATE(82), 2,
      sym_variable,
      sym_qubit,
  [5561] = 6,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(141), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5582] = 1,
    ACTIONS(470), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [5593] = 1,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [5604] = 2,
    ACTIONS(526), 1,
      anon_sym_CARET,
    ACTIONS(492), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [5617] = 6,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(403), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(225), 1,
      aux_sym__int,
    STATE(164), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5638] = 1,
    ACTIONS(329), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
  [5649] = 6,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(427), 1,
      aux_sym__int_token1,
    STATE(208), 1,
      sym_int_n,
    STATE(243), 1,
      aux_sym__int,
    STATE(112), 2,
      sym_qubit_designator,
      aux_sym_def_circuit_repeat1,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [5670] = 3,
    ACTIONS(522), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(528), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(530), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5685] = 2,
    ACTIONS(532), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(534), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [5698] = 2,
    ACTIONS(536), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(528), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5710] = 1,
    ACTIONS(532), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [5720] = 1,
    ACTIONS(510), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [5730] = 1,
    ACTIONS(514), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [5740] = 2,
    ACTIONS(536), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(518), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5752] = 1,
    ACTIONS(306), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      aux_sym__int_token1,
  [5762] = 1,
    ACTIONS(312), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      aux_sym__int_token1,
  [5772] = 6,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(538), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(227), 1,
      aux_sym__int,
    STATE(383), 1,
      sym_qubit_designator,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5792] = 6,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(540), 1,
      aux_sym__int_token1,
    STATE(208), 1,
      sym_int_n,
    STATE(232), 1,
      aux_sym__int,
    STATE(240), 1,
      sym_qubit_designator,
    STATE(229), 2,
      sym_variable,
      sym_qubit,
  [5812] = 6,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    ACTIONS(538), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(227), 1,
      aux_sym__int,
    STATE(315), 1,
      sym_qubit_designator,
    STATE(204), 2,
      sym_variable,
      sym_qubit,
  [5832] = 2,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(308), 4,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      sym_identifier,
      aux_sym__int_token1,
  [5843] = 4,
    ACTIONS(542), 1,
      aux_sym__int_token1,
    STATE(209), 1,
      aux_sym__int,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(194), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [5858] = 3,
    ACTIONS(548), 1,
      sym_identifier,
    STATE(210), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
    ACTIONS(545), 3,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
  [5871] = 5,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_DASH,
    STATE(302), 1,
      aux_sym_matrix_row_repeat1,
    ACTIONS(550), 2,
      ts_builtin_sym_end,
      sym__newline,
  [5888] = 4,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(558), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(488), 2,
      sym_addr,
      sym_signed_number,
  [5903] = 2,
    ACTIONS(518), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(520), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5914] = 5,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      aux_sym__int_token1,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(227), 1,
      aux_sym__int,
    STATE(489), 2,
      sym_addr,
      sym_int_n,
  [5931] = 2,
    ACTIONS(395), 3,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(486), 3,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [5942] = 5,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
    ACTIONS(564), 1,
      anon_sym_COLON,
    ACTIONS(566), 1,
      sym__newline,
    STATE(217), 1,
      sym__newline_tab,
    STATE(216), 2,
      sym_frame_spec,
      aux_sym_def_frame_repeat1,
  [5959] = 2,
    STATE(516), 1,
      sym_frame_attr,
    ACTIONS(569), 5,
      anon_sym_SAMPLE_DASHRATE,
      anon_sym_INITIAL_DASHFREQUENCY,
      anon_sym_DIRECTION,
      anon_sym_HARDWARE_DASHOBJECT,
      anon_sym_CENTER_DASHFREQUENCY,
  [5970] = 5,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(573), 1,
      anon_sym_COLON,
    ACTIONS(575), 1,
      sym__newline,
    STATE(217), 1,
      sym__newline_tab,
    STATE(216), 2,
      sym_frame_spec,
      aux_sym_def_frame_repeat1,
  [5987] = 4,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(577), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(490), 2,
      sym_addr,
      sym_signed_number,
  [6002] = 5,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(581), 1,
      aux_sym__int_token1,
    STATE(301), 1,
      aux_sym__int,
    STATE(489), 2,
      sym_addr,
      sym_int_n,
  [6019] = 4,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(577), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(488), 2,
      sym_addr,
      sym_signed_number,
  [6034] = 4,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(558), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(499), 2,
      sym_addr,
      sym_signed_number,
  [6049] = 3,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(210), 2,
      sym_modifier,
      aux_sym_modifiers_repeat1,
    ACTIONS(17), 3,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
  [6062] = 2,
    ACTIONS(397), 3,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(484), 3,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [6073] = 2,
    STATE(134), 1,
      aux_sym__int,
    ACTIONS(275), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym__int_token1,
  [6084] = 4,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(577), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(499), 2,
      sym_addr,
      sym_signed_number,
  [6099] = 3,
    ACTIONS(585), 1,
      aux_sym__int_token1,
    STATE(134), 1,
      aux_sym__int,
    ACTIONS(275), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LBRACK,
      sym_identifier,
  [6112] = 4,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(558), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(490), 2,
      sym_addr,
      sym_signed_number,
  [6127] = 2,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(314), 4,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      sym_identifier,
      aux_sym__int_token1,
  [6138] = 2,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(490), 4,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [6149] = 2,
    ACTIONS(423), 3,
      anon_sym_LBRACK,
      anon_sym_DOT,
      aux_sym__int_token1,
    ACTIONS(435), 3,
      anon_sym_i,
      anon_sym_pi,
      sym_identifier,
  [6160] = 4,
    ACTIONS(587), 1,
      aux_sym__int_token1,
    STATE(209), 1,
      aux_sym__int,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(277), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [6175] = 5,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    ACTIONS(591), 1,
      sym__newline,
    STATE(29), 1,
      sym__newline_tab,
    STATE(264), 1,
      aux_sym_matrix_repeat1,
    STATE(541), 1,
      sym_matrix,
  [6191] = 5,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    STATE(376), 1,
      aux_sym_matrix_row_repeat1,
  [6207] = 4,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_DASH,
    ACTIONS(601), 1,
      anon_sym_COLON,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6221] = 4,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_DASH,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(603), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6235] = 3,
    ACTIONS(609), 1,
      anon_sym_OFFSET,
    ACTIONS(607), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(237), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [6247] = 4,
    ACTIONS(612), 1,
      anon_sym_COLON,
    ACTIONS(614), 1,
      sym_identifier,
    STATE(551), 1,
      sym_qubit_variables,
    STATE(265), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [6261] = 1,
    ACTIONS(348), 5,
      anon_sym_SAMPLE_DASHRATE,
      anon_sym_INITIAL_DASHFREQUENCY,
      anon_sym_DIRECTION,
      anon_sym_HARDWARE_DASHOBJECT,
      anon_sym_CENTER_DASHFREQUENCY,
  [6269] = 4,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(480), 1,
      sym_addr,
    ACTIONS(616), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6283] = 3,
    ACTIONS(620), 1,
      anon_sym_OFFSET,
    ACTIONS(618), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(237), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [6295] = 1,
    ACTIONS(423), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      sym_identifier,
      aux_sym__int_token1,
  [6303] = 3,
    STATE(84), 1,
      aux_sym__int,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(277), 2,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [6315] = 1,
    ACTIONS(622), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [6323] = 3,
    ACTIONS(620), 1,
      anon_sym_OFFSET,
    ACTIONS(624), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(255), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [6335] = 5,
    ACTIONS(591), 1,
      sym__newline,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym__newline_tab,
    STATE(264), 1,
      aux_sym_matrix_repeat1,
    STATE(518), 1,
      sym_matrix,
  [6351] = 1,
    ACTIONS(518), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6359] = 3,
    ACTIONS(630), 1,
      sym_identifier,
    ACTIONS(628), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(248), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [6371] = 5,
    ACTIONS(591), 1,
      sym__newline,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym__newline_tab,
    STATE(264), 1,
      aux_sym_matrix_repeat1,
    STATE(525), 1,
      sym_matrix,
  [6387] = 5,
    ACTIONS(591), 1,
      sym__newline,
    ACTIONS(635), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym__newline_tab,
    STATE(264), 1,
      aux_sym_matrix_repeat1,
    STATE(553), 1,
      sym_matrix,
  [6403] = 3,
    ACTIONS(639), 1,
      sym_identifier,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(248), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [6415] = 3,
    ACTIONS(620), 1,
      anon_sym_OFFSET,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(241), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [6427] = 5,
    ACTIONS(591), 1,
      sym__newline,
    ACTIONS(643), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym__newline_tab,
    STATE(264), 1,
      aux_sym_matrix_repeat1,
    STATE(509), 1,
      sym_matrix,
  [6443] = 5,
    ACTIONS(591), 1,
      sym__newline,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym__newline_tab,
    STATE(264), 1,
      aux_sym_matrix_repeat1,
    STATE(546), 1,
      sym_matrix,
  [6459] = 3,
    ACTIONS(620), 1,
      anon_sym_OFFSET,
    ACTIONS(647), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(237), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [6471] = 4,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(279), 1,
      sym_name,
    STATE(307), 1,
      sym_waveform_name,
    STATE(397), 1,
      sym_waveform,
  [6484] = 4,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
    ACTIONS(653), 1,
      sym__newline,
    STATE(312), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(329), 1,
      sym__newline_tab,
  [6497] = 4,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(279), 1,
      sym_name,
    STATE(307), 1,
      sym_waveform_name,
    STATE(411), 1,
      sym_waveform,
  [6510] = 4,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(279), 1,
      sym_name,
    STATE(307), 1,
      sym_waveform_name,
    STATE(407), 1,
      sym_waveform,
  [6523] = 4,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(279), 1,
      sym_name,
    STATE(307), 1,
      sym_waveform_name,
    STATE(404), 1,
      sym_waveform,
  [6536] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(655), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6547] = 3,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_DASH,
    ACTIONS(657), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6558] = 4,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(294), 1,
      sym_name,
    STATE(374), 1,
      sym_waveform_name,
    STATE(500), 1,
      sym_waveform,
  [6571] = 4,
    ACTIONS(591), 1,
      sym__newline,
    ACTIONS(661), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym__newline_tab,
    STATE(268), 1,
      aux_sym_matrix_repeat1,
  [6584] = 3,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(663), 1,
      anon_sym_AS,
    STATE(282), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [6595] = 4,
    ACTIONS(665), 1,
      sym__newline,
    STATE(2), 1,
      sym__newline_tab,
    STATE(287), 1,
      aux_sym_indented_instrs_repeat1,
    STATE(548), 1,
      sym_indented_instrs,
  [6608] = 3,
    ACTIONS(575), 1,
      sym__newline,
    STATE(217), 1,
      sym__newline_tab,
    STATE(218), 2,
      sym_frame_spec,
      aux_sym_def_frame_repeat1,
  [6619] = 4,
    ACTIONS(667), 1,
      ts_builtin_sym_end,
    ACTIONS(669), 1,
      sym__newline,
    STATE(29), 1,
      sym__newline_tab,
    STATE(268), 1,
      aux_sym_matrix_repeat1,
  [6632] = 1,
    ACTIONS(672), 4,
      anon_sym_COLON,
      anon_sym_PERCENT,
      sym_identifier,
      aux_sym__int_token1,
  [6639] = 4,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(279), 1,
      sym_name,
    STATE(307), 1,
      sym_waveform_name,
    STATE(396), 1,
      sym_waveform,
  [6652] = 3,
    ACTIONS(676), 1,
      anon_sym_LBRACK,
    ACTIONS(678), 1,
      anon_sym_SHARING,
    ACTIONS(674), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6663] = 3,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_DASH,
    ACTIONS(680), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6674] = 3,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_DASH,
    ACTIONS(682), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6685] = 3,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_DASH,
    ACTIONS(684), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6696] = 3,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_DASH,
    ACTIONS(686), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6707] = 4,
    ACTIONS(688), 1,
      ts_builtin_sym_end,
    ACTIONS(690), 1,
      sym__newline,
    STATE(2), 1,
      sym__newline_tab,
    STATE(276), 1,
      aux_sym_indented_instrs_repeat1,
  [6720] = 3,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_DASH,
    ACTIONS(693), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6731] = 4,
    ACTIONS(665), 1,
      sym__newline,
    STATE(2), 1,
      sym__newline_tab,
    STATE(287), 1,
      aux_sym_indented_instrs_repeat1,
    STATE(537), 1,
      sym_indented_instrs,
  [6744] = 2,
    ACTIONS(697), 1,
      anon_sym_SLASH,
    ACTIONS(695), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
  [6753] = 3,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_DASH,
    ACTIONS(699), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6764] = 1,
    ACTIONS(701), 4,
      anon_sym_CONTROLLED,
      anon_sym_DAGGER,
      anon_sym_FORKED,
      sym_identifier,
  [6771] = 3,
    ACTIONS(703), 1,
      anon_sym_AS,
    ACTIONS(705), 1,
      sym_identifier,
    STATE(282), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [6782] = 4,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(307), 1,
      sym_waveform_name,
    STATE(313), 1,
      sym_name,
    STATE(500), 1,
      sym_waveform,
  [6795] = 4,
    ACTIONS(665), 1,
      sym__newline,
    STATE(2), 1,
      sym__newline_tab,
    STATE(287), 1,
      aux_sym_indented_instrs_repeat1,
    STATE(538), 1,
      sym_indented_instrs,
  [6808] = 4,
    ACTIONS(665), 1,
      sym__newline,
    STATE(2), 1,
      sym__newline_tab,
    STATE(287), 1,
      aux_sym_indented_instrs_repeat1,
    STATE(539), 1,
      sym_indented_instrs,
  [6821] = 3,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_DASH,
    ACTIONS(710), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6832] = 4,
    ACTIONS(665), 1,
      sym__newline,
    ACTIONS(712), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym__newline_tab,
    STATE(276), 1,
      aux_sym_indented_instrs_repeat1,
  [6845] = 4,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(279), 1,
      sym_name,
    STATE(307), 1,
      sym_waveform_name,
    STATE(352), 1,
      sym_waveform,
  [6858] = 4,
    ACTIONS(665), 1,
      sym__newline,
    STATE(2), 1,
      sym__newline_tab,
    STATE(287), 1,
      aux_sym_indented_instrs_repeat1,
    STATE(514), 1,
      sym_indented_instrs,
  [6871] = 4,
    ACTIONS(665), 1,
      sym__newline,
    STATE(2), 1,
      sym__newline_tab,
    STATE(287), 1,
      aux_sym_indented_instrs_repeat1,
    STATE(521), 1,
      sym_indented_instrs,
  [6884] = 4,
    ACTIONS(665), 1,
      sym__newline,
    STATE(2), 1,
      sym__newline_tab,
    STATE(287), 1,
      aux_sym_indented_instrs_repeat1,
    STATE(523), 1,
      sym_indented_instrs,
  [6897] = 4,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(294), 1,
      sym_name,
    STATE(374), 1,
      sym_waveform_name,
    STATE(435), 1,
      sym_waveform,
  [6910] = 4,
    ACTIONS(581), 1,
      aux_sym__int_token1,
    STATE(208), 1,
      sym_int_n,
    STATE(301), 1,
      aux_sym__int,
    STATE(428), 1,
      sym_qubit,
  [6923] = 3,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(716), 1,
      anon_sym_SLASH,
    ACTIONS(695), 2,
      ts_builtin_sym_end,
      sym__newline,
  [6934] = 3,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(718), 1,
      anon_sym_OFFSET,
    STATE(316), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [6945] = 4,
    ACTIONS(538), 1,
      aux_sym__int_token1,
    STATE(203), 1,
      sym_int_n,
    STATE(227), 1,
      aux_sym__int,
    STATE(428), 1,
      sym_qubit,
  [6958] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(603), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [6969] = 3,
    ACTIONS(720), 1,
      sym_identifier,
    STATE(448), 1,
      sym_qubit_variables,
    STATE(251), 2,
      sym_qubit_variable,
      aux_sym_qubit_variables_repeat1,
  [6980] = 3,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
    ACTIONS(718), 1,
      anon_sym_OFFSET,
    STATE(318), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [6991] = 3,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    ACTIONS(718), 1,
      anon_sym_OFFSET,
    STATE(299), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [7002] = 3,
    ACTIONS(352), 1,
      aux_sym__int_token1,
    STATE(84), 1,
      aux_sym__int,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7013] = 3,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_matrix_row_repeat1,
    ACTIONS(722), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7024] = 1,
    ACTIONS(724), 4,
      anon_sym_COLON,
      anon_sym_PERCENT,
      sym_identifier,
      aux_sym__int_token1,
  [7031] = 3,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_matrix_row_repeat1,
    ACTIONS(603), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7042] = 4,
    ACTIONS(653), 1,
      sym__newline,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
    STATE(310), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(329), 1,
      sym__newline_tab,
  [7055] = 4,
    ACTIONS(653), 1,
      sym__newline,
    ACTIONS(731), 1,
      ts_builtin_sym_end,
    STATE(257), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(329), 1,
      sym__newline_tab,
  [7068] = 2,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    ACTIONS(733), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_identifier,
  [7077] = 4,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(279), 1,
      sym_name,
    STATE(307), 1,
      sym_waveform_name,
    STATE(412), 1,
      sym_waveform,
  [7090] = 1,
    ACTIONS(488), 4,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      sym_identifier,
  [7097] = 4,
    ACTIONS(653), 1,
      sym__newline,
    ACTIONS(731), 1,
      ts_builtin_sym_end,
    STATE(312), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(329), 1,
      sym__newline_tab,
  [7110] = 4,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(279), 1,
      sym_name,
    STATE(307), 1,
      sym_waveform_name,
    STATE(354), 1,
      sym_waveform,
  [7123] = 4,
    ACTIONS(737), 1,
      ts_builtin_sym_end,
    ACTIONS(739), 1,
      sym__newline,
    STATE(312), 1,
      aux_sym_def_pauli_gate_repeat1,
    STATE(329), 1,
      sym__newline_tab,
  [7136] = 2,
    ACTIONS(742), 1,
      anon_sym_SLASH,
    ACTIONS(695), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [7145] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(744), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7156] = 4,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    STATE(480), 1,
      sym_addr,
  [7169] = 3,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(718), 1,
      anon_sym_OFFSET,
    STATE(318), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [7180] = 4,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(307), 1,
      sym_waveform_name,
    STATE(313), 1,
      sym_name,
    STATE(435), 1,
      sym_waveform,
  [7193] = 3,
    ACTIONS(607), 1,
      ts_builtin_sym_end,
    ACTIONS(746), 1,
      anon_sym_OFFSET,
    STATE(318), 2,
      sym_offset_descriptor,
      aux_sym_declare_repeat1,
  [7204] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(228), 1,
      sym_addr,
  [7214] = 2,
    ACTIONS(753), 1,
      sym_identifier,
    ACTIONS(751), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7222] = 3,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
    ACTIONS(757), 1,
      anon_sym_COLON,
    STATE(388), 1,
      aux_sym_def_frame_repeat2,
  [7232] = 1,
    ACTIONS(759), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_identifier,
  [7238] = 3,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(560), 1,
      sym_params,
  [7248] = 3,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_waveform_repeat1,
  [7258] = 3,
    ACTIONS(585), 1,
      aux_sym__int_token1,
    ACTIONS(767), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [7268] = 2,
    STATE(119), 1,
      sym__signed_int,
    ACTIONS(769), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7276] = 2,
    ACTIONS(773), 1,
      anon_sym_COLON,
    ACTIONS(771), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7284] = 3,
    ACTIONS(585), 1,
      aux_sym__int_token1,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [7294] = 3,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(429), 1,
      sym_pauli_term,
    STATE(554), 1,
      sym_name,
  [7304] = 3,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      aux_sym_waveform_repeat1,
  [7314] = 2,
    ACTIONS(601), 1,
      anon_sym_COLON,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7322] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
  [7332] = 1,
    ACTIONS(781), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_identifier,
  [7338] = 3,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_waveform_repeat1,
  [7348] = 3,
    ACTIONS(585), 1,
      aux_sym__int_token1,
    ACTIONS(788), 1,
      sym_identifier,
    STATE(134), 1,
      aux_sym__int,
  [7358] = 3,
    ACTIONS(585), 1,
      aux_sym__int_token1,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [7368] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
  [7378] = 2,
    ACTIONS(796), 1,
      anon_sym_OFFSET,
    ACTIONS(794), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7386] = 3,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      aux_sym_waveform_repeat1,
  [7396] = 3,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_params_repeat1,
  [7406] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
  [7416] = 1,
    ACTIONS(807), 3,
      anon_sym_COLON,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [7422] = 3,
    ACTIONS(585), 1,
      aux_sym__int_token1,
    ACTIONS(809), 1,
      sym_identifier,
    STATE(134), 1,
      aux_sym__int,
  [7432] = 3,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_matrix_row_repeat1,
  [7442] = 2,
    STATE(175), 1,
      sym__signed_int,
    ACTIONS(814), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7450] = 3,
    ACTIONS(816), 1,
      anon_sym_PULSE,
    ACTIONS(818), 1,
      anon_sym_CAPTURE,
    ACTIONS(820), 1,
      anon_sym_RAW_DASHCAPTURE,
  [7460] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
  [7470] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
  [7480] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(414), 1,
      sym_addr,
  [7490] = 3,
    ACTIONS(585), 1,
      aux_sym__int_token1,
    ACTIONS(824), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [7500] = 3,
    ACTIONS(585), 1,
      aux_sym__int_token1,
    ACTIONS(826), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [7510] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(417), 1,
      sym_addr,
  [7520] = 3,
    ACTIONS(585), 1,
      aux_sym__int_token1,
    ACTIONS(828), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [7530] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(479), 1,
      sym_addr,
  [7540] = 3,
    ACTIONS(674), 1,
      ts_builtin_sym_end,
    ACTIONS(830), 1,
      anon_sym_LBRACK,
    ACTIONS(832), 1,
      anon_sym_SHARING,
  [7550] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(680), 1,
      ts_builtin_sym_end,
  [7560] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
  [7570] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(360), 1,
      sym_addr,
  [7580] = 3,
    ACTIONS(585), 1,
      aux_sym__int_token1,
    ACTIONS(834), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [7590] = 3,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(473), 1,
      sym_addr,
  [7600] = 3,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(476), 1,
      sym_addr,
  [7610] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(361), 1,
      sym_addr,
  [7620] = 2,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    STATE(437), 2,
      sym__string,
      sym__escaped_string,
  [7628] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(506), 1,
      sym_addr,
  [7638] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
  [7648] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
  [7658] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(693), 1,
      ts_builtin_sym_end,
  [7668] = 3,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_variables_repeat1,
  [7678] = 3,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(841), 1,
      anon_sym_COLON,
    STATE(369), 1,
      aux_sym_def_frame_repeat2,
  [7688] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(699), 1,
      ts_builtin_sym_end,
  [7698] = 2,
    ACTIONS(844), 1,
      anon_sym_SHARING,
    ACTIONS(618), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7706] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
  [7716] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(496), 1,
      sym_addr,
  [7726] = 2,
    ACTIONS(848), 1,
      anon_sym_LPAREN,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      sym__newline,
  [7734] = 3,
    ACTIONS(595), 1,
      anon_sym_PLUS,
    ACTIONS(597), 1,
      anon_sym_DASH,
    ACTIONS(710), 1,
      ts_builtin_sym_end,
  [7744] = 3,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      ts_builtin_sym_end,
    STATE(344), 1,
      aux_sym_matrix_row_repeat1,
  [7754] = 3,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_waveform_repeat1,
  [7764] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(221), 1,
      sym_addr,
  [7774] = 3,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(425), 1,
      sym_addr,
  [7784] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(400), 1,
      sym_addr,
  [7794] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(220), 1,
      sym_addr,
  [7804] = 3,
    ACTIONS(852), 1,
      anon_sym_LBRACK,
    ACTIONS(854), 1,
      sym_identifier,
    STATE(99), 1,
      sym_addr,
  [7814] = 3,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(856), 1,
      anon_sym_COLON,
    STATE(540), 1,
      sym_name,
  [7824] = 3,
    ACTIONS(858), 1,
      anon_sym_PULSE,
    ACTIONS(860), 1,
      anon_sym_CAPTURE,
    ACTIONS(862), 1,
      anon_sym_RAW_DASHCAPTURE,
  [7834] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(476), 1,
      sym_addr,
  [7844] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(219), 1,
      sym_addr,
  [7854] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(473), 1,
      sym_addr,
  [7864] = 3,
    ACTIONS(757), 1,
      anon_sym_COLON,
    ACTIONS(864), 1,
      ts_builtin_sym_end,
    STATE(369), 1,
      aux_sym_def_frame_repeat2,
  [7874] = 1,
    ACTIONS(354), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_identifier,
  [7880] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(214), 1,
      sym_addr,
  [7890] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(425), 1,
      sym_addr,
  [7900] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(212), 1,
      sym_addr,
  [7910] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(385), 1,
      sym_addr,
  [7920] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(387), 1,
      sym_addr,
  [7930] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(426), 1,
      sym_addr,
  [7940] = 3,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(479), 1,
      sym_addr,
  [7950] = 3,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(417), 1,
      sym_addr,
  [7960] = 3,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_variables_repeat1,
  [7970] = 3,
    ACTIONS(852), 1,
      anon_sym_LBRACK,
    ACTIONS(854), 1,
      sym_identifier,
    STATE(95), 1,
      sym_addr,
  [7980] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(226), 1,
      sym_addr,
  [7990] = 3,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      aux_sym_variables_repeat1,
  [8000] = 3,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    ACTIONS(874), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_params_repeat1,
  [8010] = 3,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(496), 1,
      sym_addr,
  [8020] = 3,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(483), 1,
      sym_addr,
  [8030] = 3,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(876), 1,
      anon_sym_MEASURE,
    STATE(122), 1,
      sym_name,
  [8040] = 1,
    ACTIONS(878), 3,
      anon_sym_COLON,
      anon_sym_PERCENT,
      aux_sym__int_token1,
  [8046] = 3,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(482), 1,
      sym_addr,
  [8056] = 3,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(313), 1,
      sym_name,
    STATE(323), 1,
      sym_waveform_name,
  [8066] = 3,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(880), 1,
      anon_sym_COLON,
    STATE(513), 1,
      sym_variables,
  [8076] = 2,
    ACTIONS(882), 1,
      anon_sym_LPAREN,
    ACTIONS(622), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8084] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(482), 1,
      sym_addr,
  [8094] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(483), 1,
      sym_addr,
  [8104] = 3,
    ACTIONS(874), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_params_repeat1,
  [8114] = 3,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(222), 1,
      sym_addr,
  [8124] = 3,
    ACTIONS(585), 1,
      aux_sym__int_token1,
    ACTIONS(886), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym__int,
  [8134] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(531), 1,
      sym_name,
  [8141] = 1,
    ACTIONS(888), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8146] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(244), 1,
      sym_name,
  [8153] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(108), 1,
      sym_name,
  [8160] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(547), 1,
      sym_name,
  [8167] = 2,
    ACTIONS(890), 1,
      aux_sym__int_token1,
    STATE(359), 1,
      aux_sym__int,
  [8174] = 1,
    ACTIONS(753), 2,
      anon_sym_AS,
      sym_identifier,
  [8179] = 2,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    STATE(401), 1,
      sym_variable,
  [8186] = 2,
    ACTIONS(892), 1,
      anon_sym_MATRIX,
    ACTIONS(894), 1,
      anon_sym_PERMUTATION,
  [8193] = 1,
    ACTIONS(896), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8198] = 2,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(373), 1,
      sym_name,
  [8205] = 2,
    ACTIONS(898), 1,
      aux_sym__int_token1,
    STATE(325), 1,
      aux_sym__int,
  [8212] = 1,
    ACTIONS(900), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8217] = 1,
    ACTIONS(737), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8222] = 1,
    ACTIONS(902), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8227] = 1,
    ACTIONS(904), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8232] = 1,
    ACTIONS(906), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8237] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(183), 1,
      sym_name,
  [8244] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(461), 1,
      sym_name,
  [8251] = 1,
    ACTIONS(908), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8256] = 1,
    ACTIONS(910), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8261] = 1,
    ACTIONS(912), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8266] = 2,
    ACTIONS(914), 1,
      aux_sym__int_token1,
    STATE(351), 1,
      aux_sym__int,
  [8273] = 1,
    ACTIONS(759), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8278] = 2,
    ACTIONS(916), 1,
      sym__string_inner,
    STATE(555), 1,
      sym__string_esc_inner,
  [8285] = 2,
    ACTIONS(918), 1,
      aux_sym__int_token1,
    STATE(98), 1,
      aux_sym__int,
  [8292] = 2,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(244), 1,
      sym_name,
  [8299] = 2,
    ACTIONS(920), 1,
      aux_sym__int_token1,
    STATE(343), 1,
      aux_sym__int,
  [8306] = 2,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(461), 1,
      sym_name,
  [8313] = 1,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8318] = 1,
    ACTIONS(781), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8323] = 2,
    ACTIONS(922), 1,
      aux_sym__int_token1,
    STATE(336), 1,
      aux_sym__int,
  [8330] = 1,
    ACTIONS(924), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8335] = 1,
    ACTIONS(926), 2,
      anon_sym_,
      anon_sym_TAB,
  [8340] = 1,
    ACTIONS(794), 2,
      ts_builtin_sym_end,
      anon_sym_OFFSET,
  [8345] = 2,
    ACTIONS(928), 1,
      sym_identifier,
    STATE(330), 1,
      sym_named_param,
  [8352] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(517), 1,
      sym_name,
  [8359] = 2,
    ACTIONS(930), 1,
      aux_sym__int_token1,
    STATE(415), 1,
      aux_sym__int,
  [8366] = 2,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(399), 1,
      sym_name,
  [8373] = 1,
    ACTIONS(783), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8378] = 1,
    ACTIONS(932), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8383] = 1,
    ACTIONS(934), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8388] = 2,
    ACTIONS(936), 1,
      aux_sym__int_token1,
    STATE(335), 1,
      aux_sym__int,
  [8395] = 2,
    ACTIONS(659), 1,
      sym_identifier,
    STATE(410), 1,
      sym_name,
  [8402] = 2,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(938), 1,
      anon_sym_SHARING,
  [8409] = 1,
    ACTIONS(940), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8414] = 2,
    ACTIONS(928), 1,
      sym_identifier,
    STATE(455), 1,
      sym_named_param,
  [8421] = 2,
    ACTIONS(942), 1,
      aux_sym__int_token1,
    STATE(350), 1,
      aux_sym__int,
  [8428] = 2,
    ACTIONS(944), 1,
      anon_sym_AT,
    STATE(436), 1,
      sym_label,
  [8435] = 2,
    ACTIONS(944), 1,
      anon_sym_AT,
    STATE(432), 1,
      sym_label,
  [8442] = 2,
    ACTIONS(944), 1,
      anon_sym_AT,
    STATE(431), 1,
      sym_label,
  [8449] = 2,
    ACTIONS(944), 1,
      anon_sym_AT,
    STATE(430), 1,
      sym_label,
  [8456] = 1,
    ACTIONS(946), 2,
      anon_sym_,
      anon_sym_TAB,
  [8461] = 1,
    ACTIONS(836), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8466] = 1,
    ACTIONS(948), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8471] = 1,
    ACTIONS(950), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8476] = 2,
    ACTIONS(928), 1,
      sym_identifier,
    STATE(377), 1,
      sym_named_param,
  [8483] = 1,
    ACTIONS(952), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8488] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(111), 1,
      sym_name,
  [8495] = 1,
    ACTIONS(954), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8500] = 1,
    ACTIONS(956), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8505] = 1,
    ACTIONS(958), 2,
      anon_sym_,
      anon_sym_TAB,
  [8510] = 2,
    ACTIONS(960), 1,
      aux_sym__int_token1,
    STATE(353), 1,
      aux_sym__int,
  [8517] = 1,
    ACTIONS(962), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8522] = 1,
    ACTIONS(964), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8527] = 1,
    ACTIONS(800), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8532] = 1,
    ACTIONS(966), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8537] = 1,
    ACTIONS(968), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8542] = 2,
    ACTIONS(970), 1,
      anon_sym_AT,
    STATE(436), 1,
      sym_label,
  [8549] = 2,
    ACTIONS(970), 1,
      anon_sym_AT,
    STATE(432), 1,
      sym_label,
  [8556] = 2,
    ACTIONS(970), 1,
      anon_sym_AT,
    STATE(431), 1,
      sym_label,
  [8563] = 2,
    ACTIONS(970), 1,
      anon_sym_AT,
    STATE(430), 1,
      sym_label,
  [8570] = 1,
    ACTIONS(972), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8575] = 1,
    ACTIONS(974), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8580] = 1,
    ACTIONS(976), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8585] = 2,
    ACTIONS(978), 1,
      aux_sym__int_token1,
    STATE(107), 1,
      aux_sym__int,
  [8592] = 2,
    ACTIONS(980), 1,
      aux_sym__int_token1,
    STATE(102), 1,
      aux_sym__int,
  [8599] = 1,
    ACTIONS(982), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8604] = 1,
    ACTIONS(984), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8609] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(117), 1,
      sym_name,
  [8616] = 1,
    ACTIONS(986), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8621] = 1,
    ACTIONS(988), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8626] = 1,
    ACTIONS(990), 2,
      anon_sym_,
      anon_sym_TAB,
  [8631] = 1,
    ACTIONS(992), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8636] = 1,
    ACTIONS(994), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8641] = 1,
    ACTIONS(688), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8646] = 2,
    ACTIONS(996), 1,
      aux_sym__int_token1,
    STATE(91), 1,
      aux_sym__int,
  [8653] = 1,
    ACTIONS(998), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8658] = 2,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(382), 1,
      sym_name,
  [8665] = 2,
    ACTIONS(591), 1,
      sym__newline,
    STATE(28), 1,
      sym__newline_tab,
  [8672] = 2,
    ACTIONS(649), 1,
      sym_identifier,
    STATE(403), 1,
      sym_name,
  [8679] = 2,
    ACTIONS(266), 1,
      anon_sym_PERCENT,
    STATE(469), 1,
      sym_variable,
  [8686] = 1,
    ACTIONS(667), 2,
      ts_builtin_sym_end,
      sym__newline,
  [8691] = 1,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
  [8695] = 1,
    ACTIONS(1000), 1,
      sym_identifier,
  [8699] = 1,
    ACTIONS(1002), 1,
      anon_sym_PAULI_DASHSUM,
  [8703] = 1,
    ACTIONS(1004), 1,
      anon_sym_COLON,
  [8707] = 1,
    ACTIONS(1006), 1,
      anon_sym_COLON,
  [8711] = 1,
    ACTIONS(1008), 1,
      ts_builtin_sym_end,
  [8715] = 1,
    ACTIONS(1010), 1,
      anon_sym_COLON,
  [8719] = 1,
    ACTIONS(1012), 1,
      anon_sym_COLON,
  [8723] = 1,
    ACTIONS(1014), 1,
      anon_sym_DQUOTE,
  [8727] = 1,
    ACTIONS(1016), 1,
      ts_builtin_sym_end,
  [8731] = 1,
    ACTIONS(1018), 1,
      sym_identifier,
  [8735] = 1,
    ACTIONS(1020), 1,
      sym_identifier,
  [8739] = 1,
    ACTIONS(1022), 1,
      ts_builtin_sym_end,
  [8743] = 1,
    ACTIONS(1024), 1,
      anon_sym_DQUOTE,
  [8747] = 1,
    ACTIONS(1026), 1,
      ts_builtin_sym_end,
  [8751] = 1,
    ACTIONS(1028), 1,
      anon_sym_COLON,
  [8755] = 1,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
  [8759] = 1,
    ACTIONS(1030), 1,
      ts_builtin_sym_end,
  [8763] = 1,
    ACTIONS(1032), 1,
      sym_identifier,
  [8767] = 1,
    ACTIONS(1034), 1,
      sym_identifier,
  [8771] = 1,
    ACTIONS(1036), 1,
      ts_builtin_sym_end,
  [8775] = 1,
    ACTIONS(1038), 1,
      sym_identifier,
  [8779] = 1,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
  [8783] = 1,
    ACTIONS(1042), 1,
      ts_builtin_sym_end,
  [8787] = 1,
    ACTIONS(348), 1,
      sym_identifier,
  [8791] = 1,
    ACTIONS(1044), 1,
      sym_identifier,
  [8795] = 1,
    ACTIONS(1046), 1,
      sym_identifier,
  [8799] = 1,
    ACTIONS(1048), 1,
      anon_sym_COLON,
  [8803] = 1,
    ACTIONS(1050), 1,
      ts_builtin_sym_end,
  [8807] = 1,
    ACTIONS(1052), 1,
      ts_builtin_sym_end,
  [8811] = 1,
    ACTIONS(1054), 1,
      ts_builtin_sym_end,
  [8815] = 1,
    ACTIONS(1056), 1,
      anon_sym_COLON,
  [8819] = 1,
    ACTIONS(1058), 1,
      ts_builtin_sym_end,
  [8823] = 1,
    ACTIONS(1060), 1,
      sym_identifier,
  [8827] = 1,
    ACTIONS(1062), 1,
      ts_builtin_sym_end,
  [8831] = 1,
    ACTIONS(1064), 1,
      sym_identifier,
  [8835] = 1,
    ACTIONS(1066), 1,
      sym_identifier,
  [8839] = 1,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
  [8843] = 1,
    ACTIONS(1068), 1,
      anon_sym_DQUOTE,
  [8847] = 1,
    ACTIONS(1070), 1,
      ts_builtin_sym_end,
  [8851] = 1,
    ACTIONS(1072), 1,
      sym_identifier,
  [8855] = 1,
    ACTIONS(1074), 1,
      anon_sym_PAULI_DASHSUM,
  [8859] = 1,
    ACTIONS(1076), 1,
      anon_sym_AS,
  [8863] = 1,
    ACTIONS(1078), 1,
      anon_sym_COLON,
  [8867] = 1,
    ACTIONS(643), 1,
      ts_builtin_sym_end,
  [8871] = 1,
    ACTIONS(1080), 1,
      anon_sym_LPAREN,
  [8875] = 1,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
  [8879] = 1,
    ACTIONS(1084), 1,
      aux_sym__string_esc_inner_token1,
  [8883] = 1,
    ACTIONS(1086), 1,
      anon_sym_LPAREN,
  [8887] = 1,
    ACTIONS(1088), 1,
      anon_sym_LPAREN,
  [8891] = 1,
    ACTIONS(1090), 1,
      anon_sym_AS,
  [8895] = 1,
    ACTIONS(1092), 1,
      anon_sym_COLON,
  [8899] = 1,
    ACTIONS(1094), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 53,
  [SMALL_STATE(23)] = 135,
  [SMALL_STATE(24)] = 216,
  [SMALL_STATE(25)] = 290,
  [SMALL_STATE(26)] = 363,
  [SMALL_STATE(27)] = 436,
  [SMALL_STATE(28)] = 506,
  [SMALL_STATE(29)] = 576,
  [SMALL_STATE(30)] = 646,
  [SMALL_STATE(31)] = 716,
  [SMALL_STATE(32)] = 783,
  [SMALL_STATE(33)] = 850,
  [SMALL_STATE(34)] = 917,
  [SMALL_STATE(35)] = 984,
  [SMALL_STATE(36)] = 1051,
  [SMALL_STATE(37)] = 1118,
  [SMALL_STATE(38)] = 1185,
  [SMALL_STATE(39)] = 1252,
  [SMALL_STATE(40)] = 1319,
  [SMALL_STATE(41)] = 1386,
  [SMALL_STATE(42)] = 1453,
  [SMALL_STATE(43)] = 1520,
  [SMALL_STATE(44)] = 1587,
  [SMALL_STATE(45)] = 1654,
  [SMALL_STATE(46)] = 1721,
  [SMALL_STATE(47)] = 1788,
  [SMALL_STATE(48)] = 1855,
  [SMALL_STATE(49)] = 1922,
  [SMALL_STATE(50)] = 1989,
  [SMALL_STATE(51)] = 2056,
  [SMALL_STATE(52)] = 2123,
  [SMALL_STATE(53)] = 2190,
  [SMALL_STATE(54)] = 2254,
  [SMALL_STATE(55)] = 2318,
  [SMALL_STATE(56)] = 2379,
  [SMALL_STATE(57)] = 2440,
  [SMALL_STATE(58)] = 2501,
  [SMALL_STATE(59)] = 2562,
  [SMALL_STATE(60)] = 2620,
  [SMALL_STATE(61)] = 2678,
  [SMALL_STATE(62)] = 2710,
  [SMALL_STATE(63)] = 2742,
  [SMALL_STATE(64)] = 2782,
  [SMALL_STATE(65)] = 2813,
  [SMALL_STATE(66)] = 2852,
  [SMALL_STATE(67)] = 2883,
  [SMALL_STATE(68)] = 2909,
  [SMALL_STATE(69)] = 2934,
  [SMALL_STATE(70)] = 2961,
  [SMALL_STATE(71)] = 2988,
  [SMALL_STATE(72)] = 3016,
  [SMALL_STATE(73)] = 3042,
  [SMALL_STATE(74)] = 3070,
  [SMALL_STATE(75)] = 3096,
  [SMALL_STATE(76)] = 3122,
  [SMALL_STATE(77)] = 3145,
  [SMALL_STATE(78)] = 3172,
  [SMALL_STATE(79)] = 3195,
  [SMALL_STATE(80)] = 3220,
  [SMALL_STATE(81)] = 3247,
  [SMALL_STATE(82)] = 3269,
  [SMALL_STATE(83)] = 3291,
  [SMALL_STATE(84)] = 3317,
  [SMALL_STATE(85)] = 3342,
  [SMALL_STATE(86)] = 3363,
  [SMALL_STATE(87)] = 3383,
  [SMALL_STATE(88)] = 3411,
  [SMALL_STATE(89)] = 3431,
  [SMALL_STATE(90)] = 3452,
  [SMALL_STATE(91)] = 3475,
  [SMALL_STATE(92)] = 3498,
  [SMALL_STATE(93)] = 3521,
  [SMALL_STATE(94)] = 3546,
  [SMALL_STATE(95)] = 3563,
  [SMALL_STATE(96)] = 3597,
  [SMALL_STATE(97)] = 3615,
  [SMALL_STATE(98)] = 3635,
  [SMALL_STATE(99)] = 3655,
  [SMALL_STATE(100)] = 3689,
  [SMALL_STATE(101)] = 3709,
  [SMALL_STATE(102)] = 3740,
  [SMALL_STATE(103)] = 3761,
  [SMALL_STATE(104)] = 3780,
  [SMALL_STATE(105)] = 3796,
  [SMALL_STATE(106)] = 3810,
  [SMALL_STATE(107)] = 3824,
  [SMALL_STATE(108)] = 3842,
  [SMALL_STATE(109)] = 3872,
  [SMALL_STATE(110)] = 3902,
  [SMALL_STATE(111)] = 3928,
  [SMALL_STATE(112)] = 3955,
  [SMALL_STATE(113)] = 3980,
  [SMALL_STATE(114)] = 3995,
  [SMALL_STATE(115)] = 4012,
  [SMALL_STATE(116)] = 4037,
  [SMALL_STATE(117)] = 4052,
  [SMALL_STATE(118)] = 4079,
  [SMALL_STATE(119)] = 4106,
  [SMALL_STATE(120)] = 4121,
  [SMALL_STATE(121)] = 4138,
  [SMALL_STATE(122)] = 4163,
  [SMALL_STATE(123)] = 4190,
  [SMALL_STATE(124)] = 4217,
  [SMALL_STATE(125)] = 4242,
  [SMALL_STATE(126)] = 4267,
  [SMALL_STATE(127)] = 4292,
  [SMALL_STATE(128)] = 4316,
  [SMALL_STATE(129)] = 4340,
  [SMALL_STATE(130)] = 4364,
  [SMALL_STATE(131)] = 4388,
  [SMALL_STATE(132)] = 4402,
  [SMALL_STATE(133)] = 4416,
  [SMALL_STATE(134)] = 4440,
  [SMALL_STATE(135)] = 4456,
  [SMALL_STATE(136)] = 4480,
  [SMALL_STATE(137)] = 4504,
  [SMALL_STATE(138)] = 4528,
  [SMALL_STATE(139)] = 4552,
  [SMALL_STATE(140)] = 4576,
  [SMALL_STATE(141)] = 4590,
  [SMALL_STATE(142)] = 4614,
  [SMALL_STATE(143)] = 4638,
  [SMALL_STATE(144)] = 4662,
  [SMALL_STATE(145)] = 4686,
  [SMALL_STATE(146)] = 4710,
  [SMALL_STATE(147)] = 4724,
  [SMALL_STATE(148)] = 4736,
  [SMALL_STATE(149)] = 4760,
  [SMALL_STATE(150)] = 4784,
  [SMALL_STATE(151)] = 4798,
  [SMALL_STATE(152)] = 4822,
  [SMALL_STATE(153)] = 4836,
  [SMALL_STATE(154)] = 4860,
  [SMALL_STATE(155)] = 4884,
  [SMALL_STATE(156)] = 4908,
  [SMALL_STATE(157)] = 4922,
  [SMALL_STATE(158)] = 4946,
  [SMALL_STATE(159)] = 4970,
  [SMALL_STATE(160)] = 4984,
  [SMALL_STATE(161)] = 4998,
  [SMALL_STATE(162)] = 5022,
  [SMALL_STATE(163)] = 5036,
  [SMALL_STATE(164)] = 5052,
  [SMALL_STATE(165)] = 5076,
  [SMALL_STATE(166)] = 5100,
  [SMALL_STATE(167)] = 5124,
  [SMALL_STATE(168)] = 5148,
  [SMALL_STATE(169)] = 5172,
  [SMALL_STATE(170)] = 5196,
  [SMALL_STATE(171)] = 5220,
  [SMALL_STATE(172)] = 5244,
  [SMALL_STATE(173)] = 5268,
  [SMALL_STATE(174)] = 5292,
  [SMALL_STATE(175)] = 5316,
  [SMALL_STATE(176)] = 5328,
  [SMALL_STATE(177)] = 5352,
  [SMALL_STATE(178)] = 5376,
  [SMALL_STATE(179)] = 5387,
  [SMALL_STATE(180)] = 5398,
  [SMALL_STATE(181)] = 5409,
  [SMALL_STATE(182)] = 5430,
  [SMALL_STATE(183)] = 5453,
  [SMALL_STATE(184)] = 5476,
  [SMALL_STATE(185)] = 5489,
  [SMALL_STATE(186)] = 5502,
  [SMALL_STATE(187)] = 5517,
  [SMALL_STATE(188)] = 5538,
  [SMALL_STATE(189)] = 5561,
  [SMALL_STATE(190)] = 5582,
  [SMALL_STATE(191)] = 5593,
  [SMALL_STATE(192)] = 5604,
  [SMALL_STATE(193)] = 5617,
  [SMALL_STATE(194)] = 5638,
  [SMALL_STATE(195)] = 5649,
  [SMALL_STATE(196)] = 5670,
  [SMALL_STATE(197)] = 5685,
  [SMALL_STATE(198)] = 5698,
  [SMALL_STATE(199)] = 5710,
  [SMALL_STATE(200)] = 5720,
  [SMALL_STATE(201)] = 5730,
  [SMALL_STATE(202)] = 5740,
  [SMALL_STATE(203)] = 5752,
  [SMALL_STATE(204)] = 5762,
  [SMALL_STATE(205)] = 5772,
  [SMALL_STATE(206)] = 5792,
  [SMALL_STATE(207)] = 5812,
  [SMALL_STATE(208)] = 5832,
  [SMALL_STATE(209)] = 5843,
  [SMALL_STATE(210)] = 5858,
  [SMALL_STATE(211)] = 5871,
  [SMALL_STATE(212)] = 5888,
  [SMALL_STATE(213)] = 5903,
  [SMALL_STATE(214)] = 5914,
  [SMALL_STATE(215)] = 5931,
  [SMALL_STATE(216)] = 5942,
  [SMALL_STATE(217)] = 5959,
  [SMALL_STATE(218)] = 5970,
  [SMALL_STATE(219)] = 5987,
  [SMALL_STATE(220)] = 6002,
  [SMALL_STATE(221)] = 6019,
  [SMALL_STATE(222)] = 6034,
  [SMALL_STATE(223)] = 6049,
  [SMALL_STATE(224)] = 6062,
  [SMALL_STATE(225)] = 6073,
  [SMALL_STATE(226)] = 6084,
  [SMALL_STATE(227)] = 6099,
  [SMALL_STATE(228)] = 6112,
  [SMALL_STATE(229)] = 6127,
  [SMALL_STATE(230)] = 6138,
  [SMALL_STATE(231)] = 6149,
  [SMALL_STATE(232)] = 6160,
  [SMALL_STATE(233)] = 6175,
  [SMALL_STATE(234)] = 6191,
  [SMALL_STATE(235)] = 6207,
  [SMALL_STATE(236)] = 6221,
  [SMALL_STATE(237)] = 6235,
  [SMALL_STATE(238)] = 6247,
  [SMALL_STATE(239)] = 6261,
  [SMALL_STATE(240)] = 6269,
  [SMALL_STATE(241)] = 6283,
  [SMALL_STATE(242)] = 6295,
  [SMALL_STATE(243)] = 6303,
  [SMALL_STATE(244)] = 6315,
  [SMALL_STATE(245)] = 6323,
  [SMALL_STATE(246)] = 6335,
  [SMALL_STATE(247)] = 6351,
  [SMALL_STATE(248)] = 6359,
  [SMALL_STATE(249)] = 6371,
  [SMALL_STATE(250)] = 6387,
  [SMALL_STATE(251)] = 6403,
  [SMALL_STATE(252)] = 6415,
  [SMALL_STATE(253)] = 6427,
  [SMALL_STATE(254)] = 6443,
  [SMALL_STATE(255)] = 6459,
  [SMALL_STATE(256)] = 6471,
  [SMALL_STATE(257)] = 6484,
  [SMALL_STATE(258)] = 6497,
  [SMALL_STATE(259)] = 6510,
  [SMALL_STATE(260)] = 6523,
  [SMALL_STATE(261)] = 6536,
  [SMALL_STATE(262)] = 6547,
  [SMALL_STATE(263)] = 6558,
  [SMALL_STATE(264)] = 6571,
  [SMALL_STATE(265)] = 6584,
  [SMALL_STATE(266)] = 6595,
  [SMALL_STATE(267)] = 6608,
  [SMALL_STATE(268)] = 6619,
  [SMALL_STATE(269)] = 6632,
  [SMALL_STATE(270)] = 6639,
  [SMALL_STATE(271)] = 6652,
  [SMALL_STATE(272)] = 6663,
  [SMALL_STATE(273)] = 6674,
  [SMALL_STATE(274)] = 6685,
  [SMALL_STATE(275)] = 6696,
  [SMALL_STATE(276)] = 6707,
  [SMALL_STATE(277)] = 6720,
  [SMALL_STATE(278)] = 6731,
  [SMALL_STATE(279)] = 6744,
  [SMALL_STATE(280)] = 6753,
  [SMALL_STATE(281)] = 6764,
  [SMALL_STATE(282)] = 6771,
  [SMALL_STATE(283)] = 6782,
  [SMALL_STATE(284)] = 6795,
  [SMALL_STATE(285)] = 6808,
  [SMALL_STATE(286)] = 6821,
  [SMALL_STATE(287)] = 6832,
  [SMALL_STATE(288)] = 6845,
  [SMALL_STATE(289)] = 6858,
  [SMALL_STATE(290)] = 6871,
  [SMALL_STATE(291)] = 6884,
  [SMALL_STATE(292)] = 6897,
  [SMALL_STATE(293)] = 6910,
  [SMALL_STATE(294)] = 6923,
  [SMALL_STATE(295)] = 6934,
  [SMALL_STATE(296)] = 6945,
  [SMALL_STATE(297)] = 6958,
  [SMALL_STATE(298)] = 6969,
  [SMALL_STATE(299)] = 6980,
  [SMALL_STATE(300)] = 6991,
  [SMALL_STATE(301)] = 7002,
  [SMALL_STATE(302)] = 7013,
  [SMALL_STATE(303)] = 7024,
  [SMALL_STATE(304)] = 7031,
  [SMALL_STATE(305)] = 7042,
  [SMALL_STATE(306)] = 7055,
  [SMALL_STATE(307)] = 7068,
  [SMALL_STATE(308)] = 7077,
  [SMALL_STATE(309)] = 7090,
  [SMALL_STATE(310)] = 7097,
  [SMALL_STATE(311)] = 7110,
  [SMALL_STATE(312)] = 7123,
  [SMALL_STATE(313)] = 7136,
  [SMALL_STATE(314)] = 7145,
  [SMALL_STATE(315)] = 7156,
  [SMALL_STATE(316)] = 7169,
  [SMALL_STATE(317)] = 7180,
  [SMALL_STATE(318)] = 7193,
  [SMALL_STATE(319)] = 7204,
  [SMALL_STATE(320)] = 7214,
  [SMALL_STATE(321)] = 7222,
  [SMALL_STATE(322)] = 7232,
  [SMALL_STATE(323)] = 7238,
  [SMALL_STATE(324)] = 7248,
  [SMALL_STATE(325)] = 7258,
  [SMALL_STATE(326)] = 7268,
  [SMALL_STATE(327)] = 7276,
  [SMALL_STATE(328)] = 7284,
  [SMALL_STATE(329)] = 7294,
  [SMALL_STATE(330)] = 7304,
  [SMALL_STATE(331)] = 7314,
  [SMALL_STATE(332)] = 7322,
  [SMALL_STATE(333)] = 7332,
  [SMALL_STATE(334)] = 7338,
  [SMALL_STATE(335)] = 7348,
  [SMALL_STATE(336)] = 7358,
  [SMALL_STATE(337)] = 7368,
  [SMALL_STATE(338)] = 7378,
  [SMALL_STATE(339)] = 7386,
  [SMALL_STATE(340)] = 7396,
  [SMALL_STATE(341)] = 7406,
  [SMALL_STATE(342)] = 7416,
  [SMALL_STATE(343)] = 7422,
  [SMALL_STATE(344)] = 7432,
  [SMALL_STATE(345)] = 7442,
  [SMALL_STATE(346)] = 7450,
  [SMALL_STATE(347)] = 7460,
  [SMALL_STATE(348)] = 7470,
  [SMALL_STATE(349)] = 7480,
  [SMALL_STATE(350)] = 7490,
  [SMALL_STATE(351)] = 7500,
  [SMALL_STATE(352)] = 7510,
  [SMALL_STATE(353)] = 7520,
  [SMALL_STATE(354)] = 7530,
  [SMALL_STATE(355)] = 7540,
  [SMALL_STATE(356)] = 7550,
  [SMALL_STATE(357)] = 7560,
  [SMALL_STATE(358)] = 7570,
  [SMALL_STATE(359)] = 7580,
  [SMALL_STATE(360)] = 7590,
  [SMALL_STATE(361)] = 7600,
  [SMALL_STATE(362)] = 7610,
  [SMALL_STATE(363)] = 7620,
  [SMALL_STATE(364)] = 7628,
  [SMALL_STATE(365)] = 7638,
  [SMALL_STATE(366)] = 7648,
  [SMALL_STATE(367)] = 7658,
  [SMALL_STATE(368)] = 7668,
  [SMALL_STATE(369)] = 7678,
  [SMALL_STATE(370)] = 7688,
  [SMALL_STATE(371)] = 7698,
  [SMALL_STATE(372)] = 7706,
  [SMALL_STATE(373)] = 7716,
  [SMALL_STATE(374)] = 7726,
  [SMALL_STATE(375)] = 7734,
  [SMALL_STATE(376)] = 7744,
  [SMALL_STATE(377)] = 7754,
  [SMALL_STATE(378)] = 7764,
  [SMALL_STATE(379)] = 7774,
  [SMALL_STATE(380)] = 7784,
  [SMALL_STATE(381)] = 7794,
  [SMALL_STATE(382)] = 7804,
  [SMALL_STATE(383)] = 7814,
  [SMALL_STATE(384)] = 7824,
  [SMALL_STATE(385)] = 7834,
  [SMALL_STATE(386)] = 7844,
  [SMALL_STATE(387)] = 7854,
  [SMALL_STATE(388)] = 7864,
  [SMALL_STATE(389)] = 7874,
  [SMALL_STATE(390)] = 7880,
  [SMALL_STATE(391)] = 7890,
  [SMALL_STATE(392)] = 7900,
  [SMALL_STATE(393)] = 7910,
  [SMALL_STATE(394)] = 7920,
  [SMALL_STATE(395)] = 7930,
  [SMALL_STATE(396)] = 7940,
  [SMALL_STATE(397)] = 7950,
  [SMALL_STATE(398)] = 7960,
  [SMALL_STATE(399)] = 7970,
  [SMALL_STATE(400)] = 7980,
  [SMALL_STATE(401)] = 7990,
  [SMALL_STATE(402)] = 8000,
  [SMALL_STATE(403)] = 8010,
  [SMALL_STATE(404)] = 8020,
  [SMALL_STATE(405)] = 8030,
  [SMALL_STATE(406)] = 8040,
  [SMALL_STATE(407)] = 8046,
  [SMALL_STATE(408)] = 8056,
  [SMALL_STATE(409)] = 8066,
  [SMALL_STATE(410)] = 8076,
  [SMALL_STATE(411)] = 8084,
  [SMALL_STATE(412)] = 8094,
  [SMALL_STATE(413)] = 8104,
  [SMALL_STATE(414)] = 8114,
  [SMALL_STATE(415)] = 8124,
  [SMALL_STATE(416)] = 8134,
  [SMALL_STATE(417)] = 8141,
  [SMALL_STATE(418)] = 8146,
  [SMALL_STATE(419)] = 8153,
  [SMALL_STATE(420)] = 8160,
  [SMALL_STATE(421)] = 8167,
  [SMALL_STATE(422)] = 8174,
  [SMALL_STATE(423)] = 8179,
  [SMALL_STATE(424)] = 8186,
  [SMALL_STATE(425)] = 8193,
  [SMALL_STATE(426)] = 8198,
  [SMALL_STATE(427)] = 8205,
  [SMALL_STATE(428)] = 8212,
  [SMALL_STATE(429)] = 8217,
  [SMALL_STATE(430)] = 8222,
  [SMALL_STATE(431)] = 8227,
  [SMALL_STATE(432)] = 8232,
  [SMALL_STATE(433)] = 8237,
  [SMALL_STATE(434)] = 8244,
  [SMALL_STATE(435)] = 8251,
  [SMALL_STATE(436)] = 8256,
  [SMALL_STATE(437)] = 8261,
  [SMALL_STATE(438)] = 8266,
  [SMALL_STATE(439)] = 8273,
  [SMALL_STATE(440)] = 8278,
  [SMALL_STATE(441)] = 8285,
  [SMALL_STATE(442)] = 8292,
  [SMALL_STATE(443)] = 8299,
  [SMALL_STATE(444)] = 8306,
  [SMALL_STATE(445)] = 8313,
  [SMALL_STATE(446)] = 8318,
  [SMALL_STATE(447)] = 8323,
  [SMALL_STATE(448)] = 8330,
  [SMALL_STATE(449)] = 8335,
  [SMALL_STATE(450)] = 8340,
  [SMALL_STATE(451)] = 8345,
  [SMALL_STATE(452)] = 8352,
  [SMALL_STATE(453)] = 8359,
  [SMALL_STATE(454)] = 8366,
  [SMALL_STATE(455)] = 8373,
  [SMALL_STATE(456)] = 8378,
  [SMALL_STATE(457)] = 8383,
  [SMALL_STATE(458)] = 8388,
  [SMALL_STATE(459)] = 8395,
  [SMALL_STATE(460)] = 8402,
  [SMALL_STATE(461)] = 8409,
  [SMALL_STATE(462)] = 8414,
  [SMALL_STATE(463)] = 8421,
  [SMALL_STATE(464)] = 8428,
  [SMALL_STATE(465)] = 8435,
  [SMALL_STATE(466)] = 8442,
  [SMALL_STATE(467)] = 8449,
  [SMALL_STATE(468)] = 8456,
  [SMALL_STATE(469)] = 8461,
  [SMALL_STATE(470)] = 8466,
  [SMALL_STATE(471)] = 8471,
  [SMALL_STATE(472)] = 8476,
  [SMALL_STATE(473)] = 8483,
  [SMALL_STATE(474)] = 8488,
  [SMALL_STATE(475)] = 8495,
  [SMALL_STATE(476)] = 8500,
  [SMALL_STATE(477)] = 8505,
  [SMALL_STATE(478)] = 8510,
  [SMALL_STATE(479)] = 8517,
  [SMALL_STATE(480)] = 8522,
  [SMALL_STATE(481)] = 8527,
  [SMALL_STATE(482)] = 8532,
  [SMALL_STATE(483)] = 8537,
  [SMALL_STATE(484)] = 8542,
  [SMALL_STATE(485)] = 8549,
  [SMALL_STATE(486)] = 8556,
  [SMALL_STATE(487)] = 8563,
  [SMALL_STATE(488)] = 8570,
  [SMALL_STATE(489)] = 8575,
  [SMALL_STATE(490)] = 8580,
  [SMALL_STATE(491)] = 8585,
  [SMALL_STATE(492)] = 8592,
  [SMALL_STATE(493)] = 8599,
  [SMALL_STATE(494)] = 8604,
  [SMALL_STATE(495)] = 8609,
  [SMALL_STATE(496)] = 8616,
  [SMALL_STATE(497)] = 8621,
  [SMALL_STATE(498)] = 8626,
  [SMALL_STATE(499)] = 8631,
  [SMALL_STATE(500)] = 8636,
  [SMALL_STATE(501)] = 8641,
  [SMALL_STATE(502)] = 8646,
  [SMALL_STATE(503)] = 8653,
  [SMALL_STATE(504)] = 8658,
  [SMALL_STATE(505)] = 8665,
  [SMALL_STATE(506)] = 8672,
  [SMALL_STATE(507)] = 8679,
  [SMALL_STATE(508)] = 8686,
  [SMALL_STATE(509)] = 8691,
  [SMALL_STATE(510)] = 8695,
  [SMALL_STATE(511)] = 8699,
  [SMALL_STATE(512)] = 8703,
  [SMALL_STATE(513)] = 8707,
  [SMALL_STATE(514)] = 8711,
  [SMALL_STATE(515)] = 8715,
  [SMALL_STATE(516)] = 8719,
  [SMALL_STATE(517)] = 8723,
  [SMALL_STATE(518)] = 8727,
  [SMALL_STATE(519)] = 8731,
  [SMALL_STATE(520)] = 8735,
  [SMALL_STATE(521)] = 8739,
  [SMALL_STATE(522)] = 8743,
  [SMALL_STATE(523)] = 8747,
  [SMALL_STATE(524)] = 8751,
  [SMALL_STATE(525)] = 8755,
  [SMALL_STATE(526)] = 8759,
  [SMALL_STATE(527)] = 8763,
  [SMALL_STATE(528)] = 8767,
  [SMALL_STATE(529)] = 8771,
  [SMALL_STATE(530)] = 8775,
  [SMALL_STATE(531)] = 8779,
  [SMALL_STATE(532)] = 8783,
  [SMALL_STATE(533)] = 8787,
  [SMALL_STATE(534)] = 8791,
  [SMALL_STATE(535)] = 8795,
  [SMALL_STATE(536)] = 8799,
  [SMALL_STATE(537)] = 8803,
  [SMALL_STATE(538)] = 8807,
  [SMALL_STATE(539)] = 8811,
  [SMALL_STATE(540)] = 8815,
  [SMALL_STATE(541)] = 8819,
  [SMALL_STATE(542)] = 8823,
  [SMALL_STATE(543)] = 8827,
  [SMALL_STATE(544)] = 8831,
  [SMALL_STATE(545)] = 8835,
  [SMALL_STATE(546)] = 8839,
  [SMALL_STATE(547)] = 8843,
  [SMALL_STATE(548)] = 8847,
  [SMALL_STATE(549)] = 8851,
  [SMALL_STATE(550)] = 8855,
  [SMALL_STATE(551)] = 8859,
  [SMALL_STATE(552)] = 8863,
  [SMALL_STATE(553)] = 8867,
  [SMALL_STATE(554)] = 8871,
  [SMALL_STATE(555)] = 8875,
  [SMALL_STATE(556)] = 8879,
  [SMALL_STATE(557)] = 8883,
  [SMALL_STATE(558)] = 8887,
  [SMALL_STATE(559)] = 8891,
  [SMALL_STATE(560)] = 8895,
  [SMALL_STATE(561)] = 8899,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pragma_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(12),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(15),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(10),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(17),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(17),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(16),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pragma_repeat1, 2), SHIFT_REPEAT(13),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__int, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__int, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(9),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_name, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma_name, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(14),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__newline_tab, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay_qubits, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(61),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_n, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_n, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(534),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(74),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(519),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(79),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(66),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_designator, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_designator, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(73),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(80),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delay_frames_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delay_frames_repeat1, 2), SHIFT_REPEAT(416),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_delay_frames_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(84),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delay_frames_repeat1, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_delay_frames_repeat1, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newline_tab, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 4),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame, 4),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(89),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate_no_qubits, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__signed_int, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__signed_int, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(535),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(225),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_n, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_n, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 1),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(530),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_circuit_repeat1, 2), SHIFT_REPEAT(243),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fence, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gate, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 2),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(134),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 3),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_power, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_power, 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_power, 3),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_power, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 1),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__int, 2), SHIFT_REPEAT(209),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(281),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row, 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_frame_repeat1, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_frame_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_frame_repeat1, 2), SHIFT_REPEAT(477),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_frame_repeat2, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_frame_repeat2, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 6),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_spec, 4),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame_spec, 4),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_row_repeat1, 2),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_matrix_row_repeat1, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declare_repeat1, 2),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declare_repeat1, 2), SHIFT_REPEAT(443),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measure, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 6),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform_name, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 8),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_waveform, 4),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qubit_variables_repeat1, 2),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qubit_variables_repeat1, 2), SHIFT_REPEAT(320),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 5),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_variables, 1),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 5),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 4),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_waveform, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 9),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_pauli_gate, 8),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay_frames, 4),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix, 1),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_variables, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2), SHIFT_REPEAT(449),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declare, 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_scale, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_swap_phase, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_phase, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_phase, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indented_instrs_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indented_instrs_repeat1, 2), SHIFT_REPEAT(498),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_frequency, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform_name, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_frequency, 3),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qubit_variables_repeat1, 2),
  [705] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qubit_variables_repeat1, 2), SHIFT_REPEAT(422),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay_qubits, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_instrs, 1),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform_name, 1),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 4),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matrix_row_repeat1, 2), SHIFT_REPEAT(43),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_pauli_gate, 6),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_pauli_gate, 7),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_pauli_gate_repeat1, 2),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_pauli_gate_repeat1, 2), SHIFT_REPEAT(468),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_param, 3),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declare_repeat1, 2), SHIFT_REPEAT(458),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_variable, 1),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_variable, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_frame, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 4),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 5),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_waveform_repeat1, 2),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_waveform_repeat1, 2), SHIFT_REPEAT(462),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_descriptor, 3),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_descriptor, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(30),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_row_repeat1, 2), SHIFT_REPEAT(32),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(507),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_frame_repeat2, 2), SHIFT_REPEAT(267),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_frame, 3),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform_name, 3),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_capture, 4),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_unary, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reset, 2),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_unless, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_when, 2),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pulse, 3),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_label, 2),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pauli_term, 5),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 1),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 1),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_binary, 1),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay, 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_convert, 3),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 1),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exchange, 3),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measure, 3),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_capture, 5),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_binary_op, 3),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_binary_op, 3),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 4),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_store, 4),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 4),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed_number, 2),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classical_comparison, 4),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pulse, 4),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 1),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_circuit, 5),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_attr, 1),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_waveform, 5),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_measure_calibration, 5),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_esc_inner, 2),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_calibration, 5),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1030] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quil, 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate, 1),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_circuit, 6),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_measure_calibration, 6),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_calibration, 6),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_matrix, 7),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_gate_as_permutation, 7),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_circuit, 4),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
