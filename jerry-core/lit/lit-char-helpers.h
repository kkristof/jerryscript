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
extern bool lit_char_is_zero_width_non_joiner (ecma_char_t);
extern bool lit_char_is_zero_width_joiner (ecma_char_t);
extern bool lit_char_is_byte_order_mark (ecma_char_t);
extern bool lit_char_is_format_control (ecma_char_t);

/*
 * Whitespace characters (ECMA-262 v5, Table 2)
 */
extern bool lit_char_is_tab (ecma_char_t);
extern bool lit_char_is_vertical_tab (ecma_char_t);
extern bool lit_char_is_form_feed (ecma_char_t);
extern bool lit_char_is_space (ecma_char_t);
extern bool lit_char_is_no_break_space (ecma_char_t);
extern bool lit_char_is_space_separator (ecma_char_t);
extern bool lit_char_is_white_space (ecma_char_t);

/*
 * Line terminator characters (ECMA-262 v5, Table 3)
 */
extern bool lit_char_is_new_line (ecma_char_t);
extern bool lit_char_is_carriage_return (ecma_char_t);
extern bool lit_char_is_line_separator (ecma_char_t);
extern bool lit_char_is_paragraph_separator (ecma_char_t);
extern bool lit_char_is_line_terminator (ecma_char_t);

/*
 * Identifier name characters (ECMA-262 v5, 7.6)
 */
extern bool lit_char_is_dollar_sign (ecma_char_t);
extern bool lit_char_is_low_line (ecma_char_t);
extern bool lit_char_is_backslash (ecma_char_t);
extern bool lit_char_is_unicode_letter (ecma_char_t);
extern bool lit_char_is_unicode_combining_mark (ecma_char_t);
extern bool lit_char_is_unicode_digit (ecma_char_t);
extern bool lit_char_is_unicode_connector_punctuation (ecma_char_t);

/*
 * Part of IsWordChar abstract operation (ECMA-262 v5, 15.10.2.6, step 3)
 */
extern bool lit_char_is_word_char (ecma_char_t);

extern bool lit_char_hex_to_int (ecma_char_t);

#endif /* LIT_CHAR_HELPERS_H */
