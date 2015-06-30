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

#include "lit-char-helpers.h"

/**
 * Check if code unit is a unicode letter
 */
bool
lit_char_is_unicode_letter (ecma_char_t c) /**< code unit */
{
  if (((c >= 'A') && (c <= 'Z')) ||
      ((c >= 'a') && (c <= 'z')) ||
      c == 0x00AA ||
      c == 0x00B5 ||
      c == 0x00BA ||
      ((c >= 0x00C0) && (c <= 0x00D6)) ||
      ((c >= 0x00D8) && (c <= 0x00F6)) ||
      ((c >= 0x00F8) && (c <= 0x021F)) ||
      ((c >= 0x0222) && (c <= 0x0233)) ||
      ((c >= 0x0250) && (c <= 0x02AD)) ||
      ((c >= 0x02B0) && (c <= 0x02B8)) ||
      ((c >= 0x02BB) && (c <= 0x02C1)) ||
      ((c >= 0x02D0) && (c <= 0x02D1)) ||
      ((c >= 0x02E0) && (c <= 0x02E4)) ||
      c == 0x02EE ||
      c == 0x037A ||
      c == 0x0386 ||
      ((c >= 0x0388) && (c <= 0x038A)) ||
      c == 0x038C ||
      ((c >= 0x038E) && (c <= 0x03A1)) ||
      ((c >= 0x03A3) && (c <= 0x03CE)) ||
      ((c >= 0x03D0) && (c <= 0x03D7)) ||
      ((c >= 0x03DA) && (c <= 0x03F3)) ||
      ((c >= 0x0400) && (c <= 0x0481)) ||
      ((c >= 0x048C) && (c <= 0x04C4)) ||
      ((c >= 0x04C7) && (c <= 0x04C8)) ||
      ((c >= 0x04CB) && (c <= 0x04CC)) ||
      ((c >= 0x04D0) && (c <= 0x04F5)) ||
      ((c >= 0x04F8) && (c <= 0x04F9)) ||
      ((c >= 0x0531) && (c <= 0x0556)) ||
      c == 0x0559 ||
      ((c >= 0x0561) && (c <= 0x0587)) ||
      ((c >= 0x05D0) && (c <= 0x05EA)) ||
      ((c >= 0x05F0) && (c <= 0x05F2)) ||
      ((c >= 0x0621) && (c <= 0x063A)) ||
      ((c >= 0x0640) && (c <= 0x064A)) ||
      ((c >= 0x0671) && (c <= 0x06D3)) ||
      c == 0x06D5 ||
      ((c >= 0x06E5) && (c <= 0x06E6)) ||
      ((c >= 0x06FA) && (c <= 0x06FC)) ||
      c == 0x0710 ||
      ((c >= 0x0712) && (c <= 0x072C)) ||
      ((c >= 0x0780) && (c <= 0x07A5)) ||
      ((c >= 0x0905) && (c <= 0x0939)) ||
      c == 0x093D ||
      c == 0x0950 ||
      ((c >= 0x0958) && (c <= 0x0961)) ||
      ((c >= 0x0985) && (c <= 0x098C)) ||
      ((c >= 0x098F) && (c <= 0x0990)) ||
      ((c >= 0x0993) && (c <= 0x09A8)) ||
      ((c >= 0x09AA) && (c <= 0x09B0)) ||
      c == 0x09B2 ||
      ((c >= 0x09B6) && (c <= 0x09B9)) ||
      ((c >= 0x09DC) && (c <= 0x09DD)) ||
      ((c >= 0x09DF) && (c <= 0x09E1)) ||
      ((c >= 0x09F0) && (c <= 0x09F1)) ||
      ((c >= 0x0A05) && (c <= 0x0A0A)) ||
      ((c >= 0x0A0F) && (c <= 0x0A10)) ||
      ((c >= 0x0A13) && (c <= 0x0A28)) ||
      ((c >= 0x0A2A) && (c <= 0x0A30)) ||
      ((c >= 0x0A32) && (c <= 0x0A33)) ||
      ((c >= 0x0A35) && (c <= 0x0A36)) ||
      ((c >= 0x0A38) && (c <= 0x0A39)) ||
      ((c >= 0x0A59) && (c <= 0x0A5C)) ||
      c == 0x0A5E ||
      ((c >= 0x0A72) && (c <= 0x0A74)) ||
      ((c >= 0x0A85) && (c <= 0x0A8B)) ||
      c == 0x0A8D ||
      ((c >= 0x0A8F) && (c <= 0x0A91)) ||
      ((c >= 0x0A93) && (c <= 0x0AA8)) ||
      ((c >= 0x0AAA) && (c <= 0x0AB0)) ||
      ((c >= 0x0AB2) && (c <= 0x0AB3)) ||
      ((c >= 0x0AB5) && (c <= 0x0AB9)) ||
      c == 0x0ABD ||
      c == 0x0AD0 ||
      c == 0x0AE0 ||
      ((c >= 0x0B05) && (c <= 0x0B0C)) ||
      ((c >= 0x0B0F) && (c <= 0x0B10)) ||
      ((c >= 0x0B13) && (c <= 0x0B28)) ||
      ((c >= 0x0B2A) && (c <= 0x0B30)) ||
      ((c >= 0x0B32) && (c <= 0x0B33)) ||
      ((c >= 0x0B36) && (c <= 0x0B39)) ||
      c == 0x0B3D ||
      ((c >= 0x0B5C) && (c <= 0x0B5D)) ||
      ((c >= 0x0B5F) && (c <= 0x0B61)) ||
      ((c >= 0x0B85) && (c <= 0x0B8A)) ||
      ((c >= 0x0B8E) && (c <= 0x0B90)) ||
      ((c >= 0x0B92) && (c <= 0x0B95)) ||
      ((c >= 0x0B99) && (c <= 0x0B9A)) ||
      c == 0x0B9C ||
      ((c >= 0x0B9E) && (c <= 0x0B9F)) ||
      ((c >= 0x0BA3) && (c <= 0x0BA4)) ||
      ((c >= 0x0BA8) && (c <= 0x0BAA)) ||
      ((c >= 0x0BAE) && (c <= 0x0BB5)) ||
      ((c >= 0x0BB7) && (c <= 0x0BB9)) ||
      ((c >= 0x0C05) && (c <= 0x0C0C)) ||
      ((c >= 0x0C0E) && (c <= 0x0C10)) ||
      ((c >= 0x0C12) && (c <= 0x0C28)) ||
      ((c >= 0x0C2A) && (c <= 0x0C33)) ||
      ((c >= 0x0C35) && (c <= 0x0C39)) ||
      ((c >= 0x0C60) && (c <= 0x0C61)) ||
      ((c >= 0x0C85) && (c <= 0x0C8C)) ||
      ((c >= 0x0C8E) && (c <= 0x0C90)) ||
      ((c >= 0x0C92) && (c <= 0x0CA8)) ||
      ((c >= 0x0CAA) && (c <= 0x0CB3)) ||
      ((c >= 0x0CB5) && (c <= 0x0CB9)) ||
      c == 0x0CDE ||
      ((c >= 0x0CE0) && (c <= 0x0CE1)) ||
      ((c >= 0x0D05) && (c <= 0x0D0C)) ||
      ((c >= 0x0D0E) && (c <= 0x0D10)) ||
      ((c >= 0x0D12) && (c <= 0x0D28)) ||
      ((c >= 0x0D2A) && (c <= 0x0D39)) ||
      ((c >= 0x0D60) && (c <= 0x0D61)) ||
      ((c >= 0x0D85) && (c <= 0x0D96)) ||
      ((c >= 0x0D9A) && (c <= 0x0DB1)) ||
      ((c >= 0x0DB3) && (c <= 0x0DBB)) ||
      c == 0x0DBD ||
      ((c >= 0x0DC0) && (c <= 0x0DC6)) ||
      ((c >= 0x0E01) && (c <= 0x0E30)) ||
      ((c >= 0x0E32) && (c <= 0x0E33)) ||
      ((c >= 0x0E40) && (c <= 0x0E46)) ||
      ((c >= 0x0E81) && (c <= 0x0E82)) ||
      c == 0x0E84 ||
      ((c >= 0x0E87) && (c <= 0x0E88)) ||
      c == 0x0E8A ||
      c == 0x0E8D ||
      ((c >= 0x0E94) && (c <= 0x0E97)) ||
      ((c >= 0x0E99) && (c <= 0x0E9F)) ||
      ((c >= 0x0EA1) && (c <= 0x0EA3)) ||
      c == 0x0EA5 ||
      c == 0x0EA7 ||
      ((c >= 0x0EAA) && (c <= 0x0EAB)) ||
      ((c >= 0x0EAD) && (c <= 0x0EB0)) ||
      ((c >= 0x0EB2) && (c <= 0x0EB3)) ||
      ((c >= 0x0EBD) && (c <= 0x0EC4)) ||
      c == 0x0EC6 ||
      ((c >= 0x0EDC) && (c <= 0x0EDD)) ||
      c == 0x0F00 ||
      ((c >= 0x0F40) && (c <= 0x0F6A)) ||
      ((c >= 0x0F88) && (c <= 0x0F8B)) ||
      ((c >= 0x1000) && (c <= 0x1021)) ||
      ((c >= 0x1023) && (c <= 0x1027)) ||
      ((c >= 0x1029) && (c <= 0x102A)) ||
      ((c >= 0x1050) && (c <= 0x1055)) ||
      ((c >= 0x10A0) && (c <= 0x10C5)) ||
      ((c >= 0x10D0) && (c <= 0x10F6)) ||
      ((c >= 0x1100) && (c <= 0x1159)) ||
      ((c >= 0x115F) && (c <= 0x11A2)) ||
      ((c >= 0x11A8) && (c <= 0x11F9)) ||
      ((c >= 0x1200) && (c <= 0x1206)) ||
      ((c >= 0x1208) && (c <= 0x1246)) ||
      c == 0x1248 ||
      ((c >= 0x124A) && (c <= 0x124D)) ||
      ((c >= 0x1250) && (c <= 0x1256)) ||
      c == 0x1258 ||
      ((c >= 0x125A) && (c <= 0x125D)) ||
      ((c >= 0x1260) && (c <= 0x1286)) ||
      c == 0x1288 ||
      ((c >= 0x128A) && (c <= 0x128D)) ||
      ((c >= 0x1290) && (c <= 0x12AE)) ||
      c == 0x12B0 ||
      ((c >= 0x12B2) && (c <= 0x12B5)) ||
      ((c >= 0x12B8) && (c <= 0x12BE)) ||
      c == 0x12C0 ||
      ((c >= 0x12C2) && (c <= 0x12C5)) ||
      ((c >= 0x12C8) && (c <= 0x12CE)) ||
      ((c >= 0x12D0) && (c <= 0x12D6)) ||
      ((c >= 0x12D8) && (c <= 0x12EE)) ||
      ((c >= 0x12F0) && (c <= 0x130E)) ||
      c == 0x1310 ||
      ((c >= 0x1312) && (c <= 0x1315)) ||
      ((c >= 0x1318) && (c <= 0x131E)) ||
      ((c >= 0x1320) && (c <= 0x1346)) ||
      ((c >= 0x1348) && (c <= 0x135A)) ||
      ((c >= 0x13A0) && (c <= 0x13F4)) ||
      ((c >= 0x1401) && (c <= 0x1676)) ||
      ((c >= 0x1681) && (c <= 0x169A)) ||
      ((c >= 0x16A0) && (c <= 0x16EA)) ||
      ((c >= 0x1780) && (c <= 0x17B3)) ||
      ((c >= 0x1820) && (c <= 0x1877)) ||
      ((c >= 0x1880) && (c <= 0x18A8)) ||
      ((c >= 0x1E00) && (c <= 0x1E9B)) ||
      ((c >= 0x1EA0) && (c <= 0x1EF9)) ||
      ((c >= 0x1F00) && (c <= 0x1F15)) ||
      ((c >= 0x1F18) && (c <= 0x1F1D)) ||
      ((c >= 0x1F20) && (c <= 0x1F45)) ||
      ((c >= 0x1F48) && (c <= 0x1F4D)) ||
      ((c >= 0x1F50) && (c <= 0x1F57)) ||
      c == 0x1F59 ||
      c == 0x1F5B ||
      c == 0x1F5D ||
      ((c >= 0x1F5F) && (c <= 0x1F7D)) ||
      ((c >= 0x1F80) && (c <= 0x1FB4)) ||
      ((c >= 0x1FB6) && (c <= 0x1FBC)) ||
      c == 0x1FBE ||
      ((c >= 0x1FC2) && (c <= 0x1FC4)) ||
      ((c >= 0x1FC6) && (c <= 0x1FCC)) ||
      ((c >= 0x1FD0) && (c <= 0x1FD3)) ||
      ((c >= 0x1FD6) && (c <= 0x1FDB)) ||
      ((c >= 0x1FE0) && (c <= 0x1FEC)) ||
      ((c >= 0x1FF2) && (c <= 0x1FF4)) ||
      ((c >= 0x1FF6) && (c <= 0x1FFC)) ||
      c == 0x207F ||
      c == 0x2102 ||
      c == 0x2107 ||
      ((c >= 0x210A) && (c <= 0x2113)) ||
      c == 0x2115 ||
      ((c >= 0x2119) && (c <= 0x211D)) ||
      c == 0x2124 ||
      c == 0x2126 ||
      c == 0x2128 ||
      ((c >= 0x212A) && (c <= 0x212D)) ||
      ((c >= 0x212F) && (c <= 0x2131)) ||
      ((c >= 0x2133) && (c <= 0x2139)) ||
      ((c >= 0x2160) && (c <= 0x2183)) ||
      ((c >= 0x3005) && (c <= 0x3007)) ||
      ((c >= 0x3021) && (c <= 0x3029)) ||
      ((c >= 0x3031) && (c <= 0x3035)) ||
      ((c >= 0x3038) && (c <= 0x303A)) ||
      ((c >= 0x3041) && (c <= 0x3094)) ||
      ((c >= 0x309D) && (c <= 0x309E)) ||
      ((c >= 0x30A1) && (c <= 0x30FA)) ||
      ((c >= 0x30FC) && (c <= 0x30FE)) ||
      ((c >= 0x3105) && (c <= 0x312C)) ||
      ((c >= 0x3131) && (c <= 0x318E)) ||
      ((c >= 0x31A0) && (c <= 0x31B7)) ||
      c == 0x3400 ||
      c == 0x4DB5 ||
      c == 0x4E00 ||
      c == 0x9FA5 ||
      ((c >= 0xA000) && (c <= 0xA48C)) ||
      c == 0xAC00 ||
      c == 0xD7A3 ||
      ((c >= 0xF900) && (c <= 0xFA2D)) ||
      ((c >= 0xFB00) && (c <= 0xFB06)) ||
      ((c >= 0xFB13) && (c <= 0xFB17)) ||
      c == 0xFB1D ||
      ((c >= 0xFB1F) && (c <= 0xFB28)) ||
      ((c >= 0xFB2A) && (c <= 0xFB36)) ||
      ((c >= 0xFB38) && (c <= 0xFB3C)) ||
      c == 0xFB3E ||
      ((c >= 0xFB40) && (c <= 0xFB41)) ||
      ((c >= 0xFB43) && (c <= 0xFB44)) ||
      ((c >= 0xFB46) && (c <= 0xFBB1)) ||
      ((c >= 0xFBD3) && (c <= 0xFD3D)) ||
      ((c >= 0xFD50) && (c <= 0xFD8F)) ||
      ((c >= 0xFD92) && (c <= 0xFDC7)) ||
      ((c >= 0xFDF0) && (c <= 0xFDFB)) ||
      ((c >= 0xFE70) && (c <= 0xFE72)) ||
      c == 0xFE74 ||
      ((c >= 0xFE76) && (c <= 0xFEFC)) ||
      ((c >= 0xFF21) && (c <= 0xFF3A)) ||
      ((c >= 0xFF41) && (c <= 0xFF5A)) ||
      ((c >= 0xFF66) && (c <= 0xFFBE)) ||
      ((c >= 0xFFC2) && (c <= 0xFFC7)) ||
      ((c >= 0xFFCA) && (c <= 0xFFCF)) ||
      ((c >= 0xFFD2) && (c <= 0xFFD7)) ||
      ((c >= 0xFFDA) && (c <= 0xFFDC)))
  {
    return true;
  }
  else
  {
    return false;
  }
} /* lit_char_is_unicode_letter */

/**
 * Check if specified character is the newline character
 *
 * @return true - if the character is "<LF>" character according to ECMA-262 v5, Table 3,
 *         false - otherwise.
 */
bool
lit_char_is_new_line (ecma_char_t c) /**< code unit */
{
  return (c == 0x0A);
} /* lit_char_is_new_line */

/**
 * Check if specified character the carriage return character
 *
 * @return true - if the character is "<CR>" character according to ECMA-262 v5, Table 3,
 *         false - otherwise.
 */
bool
lit_char_is_carriage_return (ecma_char_t c) /**< code unit */
{
  return (c == 0x0D);
} /* lit_char_is_carriage_return */

/**
 * Check if specified character the line separator character
 *
 * @return true - if the character is "<LS>" character according to ECMA-262 v5, Table 3,
 *         false - otherwise.
 */
bool
lit_char_is_line_separator (ecma_char_t c) /**< code unit */
{
  return (c == 0x2028);
} /* lit_char_is_line_separator */

/**
 * Check if specified character the paragraph separator character
 *
 * @return true - if the character is "<PS>" character according to ECMA-262 v5, Table 3,
 *         false - otherwise.
 */
bool
lit_char_is_paragraph_separator (ecma_char_t c) /**< code unit */
{
  return (c == 0x2029);
} /* lit_char_is_paragraph_separator */

/**
 * Check if specified character is one of LineTerminator (ECMA-262 v5, Table 3) characters
 *
 * @return true - if the character is one of LineTerminator characters,
 *         false - otherwise.
 */
bool
lit_char_is_line_terminator (ecma_char_t c) /**< code unit */
{
  return (lit_char_is_carriage_return (c)
          || lit_char_is_new_line (c)
          || lit_char_is_line_separator (c)
          || lit_char_is_paragraph_separator (c));
} /* lit_char_is_line_terminator */

/**
 * Check if specified character is a word character (part of IsWordChar abstract operation)
 *
 * See also: ECMA-262 v5, 15.10.2.6 (IsWordChar)
 *
 * @return true - if the character is a word character
 *         false - otherwise.
 */
bool
lit_char_is_word_char (ecma_char_t c) /**< code unit */
{
  if ((c >= 'a' && c <= 'z')
      || (c >= 'A' && c <= 'Z')
      || (c >= '0' && c <= '9')
      || c == '_')
  {
    return true;
  }

  return false;
} /* lit_char_is_word_char */

/**
 * Convert a hex character to an unsigned integer
 *
 * @return digit value, corresponding to the hex char
 */
bool
lit_char_hex_to_int (ecma_char_t c) /**< code unit, corresponding to
                                     *    one of [0-9A-Fa-f] characters */
{
  switch (c)
  {
    case '0': return 0x0;
    case '1': return 0x1;
    case '2': return 0x2;
    case '3': return 0x3;
    case '4': return 0x4;
    case '5': return 0x5;
    case '6': return 0x6;
    case '7': return 0x7;
    case '8': return 0x8;
    case '9': return 0x9;
    case 'a':
    case 'A': return 0xA;
    case 'b':
    case 'B': return 0xB;
    case 'c':
    case 'C': return 0xC;
    case 'd':
    case 'D': return 0xD;
    case 'e':
    case 'E': return 0xE;
    case 'f':
    case 'F': return 0xF;
    default: JERRY_UNREACHABLE ();
  }
} /* lit_char_hex_to_int */
