/* Copyright 2015 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LIT_CHAR_HELPERS_H
#define LIT_CHAR_HELPERS_H

#include "lit-globals.h"

/*
 * Format control characters (ECMA-262 v5, Table 1)
 */
#define LIT_CHAR_ZWNJ ((ecma_char_t) 0x200C) /* zero width non-joiner */
#define LIT_CHAR_ZWJ  ((ecma_char_t) 0x200D) /* zero width joiner */
#define LIT_CHAR_BOM  ((ecma_char_t) 0xFEFF) /* byte order mark */

extern bool lit_char_is_format_control (ecma_char_t);

/*
 * Whitespace characters (ECMA-262 v5, Table 2)
 */
#define LIT_CHAR_TAB  ((ecma_char_t) 0x0009) /* tab */
#define LIT_CHAR_VTAB ((ecma_char_t) 0x000B) /* vertical tab */
#define LIT_CHAR_FF   ((ecma_char_t) 0x000C) /* form feed */
#define LIT_CHAR_SP   ((ecma_char_t) 0x0020) /* space */
#define LIT_CHAR_NBSP ((ecma_char_t) 0x00A0) /* no-break space */

extern bool lit_char_is_space_separator (ecma_char_t);
extern bool lit_char_is_white_space (ecma_char_t);

/*
 * Line terminator characters (ECMA-262 v5, Table 3)
 */
#define LIT_CHAR_LF ((ecma_char_t) 0x000A) /* line feed */
#define LIT_CHAR_CR ((ecma_char_t) 0x000D) /* carriage return */
#define LIT_CHAR_LS ((ecma_char_t) 0x2028) /* line separator */
#define LIT_CHAR_PS ((ecma_char_t) 0x2029) /* paragraph separator */

extern bool lit_char_is_line_terminator (ecma_char_t);

/*
 * Identifier name characters (ECMA-262 v5, 7.6)
 */
#define LIT_CHAR_DOLLAR_SIGN ((ecma_char_t) '$')  /* dollar sign */
#define LIT_CHAR_UNDERSCORE  ((ecma_char_t) '_')  /* low line (underscore) */
#define LIT_CHAR_BACKSLASH   ((ecma_char_t) '\\') /* reverse solidus (backslash) */

extern bool lit_char_is_unicode_letter (ecma_char_t);
extern bool lit_char_is_unicode_combining_mark (ecma_char_t);
extern bool lit_char_is_unicode_digit (ecma_char_t);
extern bool lit_char_is_unicode_connector_punctuation (ecma_char_t);

/*
 * Part of IsWordChar abstract operation (ECMA-262 v5, 15.10.2.6, step 3)
 */
extern bool lit_char_is_word_char (ecma_char_t);

extern uint32_t lit_char_hex_to_int (ecma_char_t);

#endif /* LIT_CHAR_HELPERS_H */
