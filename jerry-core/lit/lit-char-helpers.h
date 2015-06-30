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

extern bool lit_char_is_unicode_letter (ecma_char_t);
extern bool lit_char_is_new_line (ecma_char_t);
extern bool lit_char_is_carriage_return (ecma_char_t);
extern bool lit_char_is_line_terminator (ecma_char_t);
extern bool lit_char_is_word_char (ecma_char_t);
extern bool lit_char_hex_to_int (ecma_char_t);

#endif /* LIT_CHAR_HELPERS_H */
