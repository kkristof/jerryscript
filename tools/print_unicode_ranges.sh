#!/bin/bash

# Copyright 2015 Samsung Electronics Co., Ltd.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

#
# http://www.unicode.org/Public/3.0-Update/UnicodeData-3.0.0.txt
#
UNICODE_DATA_PATH="$1"

#
# One of unicode character category names (Lu, Ll, Nl, etc.)
#
UNICODE_CHAR_CATEGORY="$2"

UNICODE_CHAR_CATEGORY_UPPER_CASE=`echo $UNICODE_CHAR_CATEGORY | tr '[:lower:]' '[:upper:]'`

#
# 1. Print character codes and categories
# 2. Filter by category
# 3. Print character codes without categories
# 4. Sort
# 5. Add '0x' to each line
# 6. Combine hexadecimal numbers into ranges
# 7. Print ranges in format LIT_UNICODE_RANGE_$UNICODE_CHAR_CATEGORY_UPPER_CASE (range_begin, range_end)
#

cut -d ';' "$UNICODE_DATA_PATH" -f 1,3 \
      | grep ";$UNICODE_CHAR_CATEGORY" \
      | cut -d ';' -f 1 \
      | sort \
      | awk '{ print "0x"$1; }' \
      | awk --non-decimal-data \
        'BEGIN \
         { \
           is_in_range=0; \
         } \
         { \
           if (is_in_range == 0) \
           { \
             is_in_range=1; \
             range_begin=$1; \
             range_prev=$1; \
           } \
           else \
           { \
             if (range_prev + 1 == $1) \
             { \
               range_prev=$1; \
             } \
             else \
             { \
               print range_begin, range_prev; \
               range_begin=$1; \
               range_prev=$1; \
             } \
           } \
         } \
         END \
         { \
           print range_begin, range_prev; \
         }' \
      | awk "{ printf \"LIT_UNICODE_RANGE_$UNICODE_CHAR_CATEGORY_UPPER_CASE (%s, %s)\n\", \$1, \$2; }"
