/* Copyright 2014-2015 Samsung Electronics Co., Ltd.
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

#ifndef PARSER_H
#define PARSER_H

#include "jrt.h"

void parser_set_show_opcodes (bool);
bool parser_parse_script (const char *, size_t, const opcode_t **);
bool parser_parse_eval (const char *, size_t, const opcode_t **);
bool parser_parse_new_function (const char **, size_t, const opcode_t **);

#endif /* PARSER_H */