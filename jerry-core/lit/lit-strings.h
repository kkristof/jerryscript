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

#ifndef LIT_UNICODE_HELPERS_H
#define LIT_UNICODE_HELPERS_H

#include "jrt.h"
#include "lit-globals.h"

/**
 * Null character (used in few cases as utf-8 string end marker)
 */
#define LIT_BYTE_NULL (0)

/**
 * Represents an iterator over utf-8 buffer
 */
typedef struct
{
  lit_utf8_size_t buf_offset; /* current offset in the buffer */
  lit_utf8_size_t buf_size; /* buffer length */
  const lit_utf8_byte_t *buf_p; /* buffer */
  bool is_non_bmp_middle; /* flag indicating that current position of the iterator is the middle of 4-byte char */
} lit_utf8_iterator_t;

/* validation */
bool lit_is_utf8_string_valid (const lit_utf8_byte_t *, lit_utf8_size_t);

/* checks */
bool lit_is_code_unit_low_surrogate (ecma_char_t);
bool lit_is_code_unit_high_surrogate (ecma_char_t);

/* iteration */
lit_utf8_iterator_t lit_utf8_iterator_create (const lit_utf8_byte_t *, lit_utf8_size_t);

void lit_utf8_iterator_set_to_bos (lit_utf8_iterator_t *);
void lit_utf8_iterator_set_to_eos (lit_utf8_iterator_t *);

ecma_char_t lit_utf8_iterator_read_next (const lit_utf8_iterator_t *);
ecma_char_t lit_utf8_iterator_read_prev (const lit_utf8_iterator_t *);

void lit_utf8_iterator_incr (lit_utf8_iterator_t *);
void lit_utf8_iterator_decr (lit_utf8_iterator_t *);
void lit_utf8_iterator_advance (lit_utf8_iterator_t *, ecma_length_t);
void lit_utf8_iterator_set_offset (lit_utf8_iterator_t *, lit_utf8_size_t);

ecma_char_t lit_utf8_iterator_read_next_and_incr (lit_utf8_iterator_t *);
ecma_char_t lit_utf8_iterator_read_prev_and_decr (lit_utf8_iterator_t *);

lit_utf8_size_t lit_utf8_iterator_get_offset (const lit_utf8_iterator_t *);
lit_utf8_byte_t *lit_utf8_iterator_get_ptr (const lit_utf8_iterator_t *);

bool lit_utf8_iterator_is_eos (const lit_utf8_iterator_t *);
bool lit_utf8_iterator_is_bos (const lit_utf8_iterator_t *);

/* size */
lit_utf8_size_t lit_zt_utf8_string_size (const lit_utf8_byte_t *);

/* length */
ecma_length_t lit_utf8_string_length (const lit_utf8_byte_t *, lit_utf8_size_t);

/* hash */
lit_string_hash_t lit_utf8_string_calc_hash_last_bytes (const lit_utf8_byte_t *, lit_utf8_size_t);

/* code unit access */
ecma_char_t lit_utf8_string_code_unit_at (const lit_utf8_byte_t *, lit_utf8_size_t, ecma_length_t);
lit_utf8_size_t lit_get_unicode_char_size_by_utf8_first_byte (lit_utf8_byte_t);

/* conversion */
lit_utf8_size_t lit_code_unit_to_utf8 (ecma_char_t, lit_utf8_byte_t *);
lit_utf8_size_t lit_code_point_to_utf8 (lit_code_point_t, lit_utf8_byte_t *);
lit_code_point_t lit_convert_surrogate_pair_to_code_point (ecma_char_t, ecma_char_t);

/* comparison */
bool lit_compare_utf8_strings (const lit_utf8_byte_t *,
                               lit_utf8_size_t,
                               const lit_utf8_byte_t *,
                               lit_utf8_size_t);

bool lit_compare_utf8_strings_relational (const lit_utf8_byte_t *string1_p,
                                          lit_utf8_size_t,
                                          const lit_utf8_byte_t *string2_p,
                                          lit_utf8_size_t);

/* read code point from buffer */
lit_utf8_size_t lit_read_code_point_from_utf8 (const lit_utf8_byte_t *,
                                               lit_utf8_size_t,
                                               lit_code_point_t *);

/* print */
void lit_put_ecma_char (ecma_char_t);

#endif /* LIT_UNICODE_HELPERS_H */
