/* This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ² │ & │ é │ " │ ' │ ( │ - │ è │ _ │ ç │ à │ ) │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ $ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ ! │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_SUP2 GRV  // ²
#define FR_AMPR N1    // &
#define FR_EACU N2    // é
#define FR_DQUO N3    // "
#define FR_QUOT N4    // '
#define FR_LPRN N5    // (
#define FR_MINS N6    // -
#define FR_EGRV N7    // è
#define FR_UNDS N8    // _
#define FR_CCED N9    // ç
#define FR_AGRV N0    // à
#define FR_RPRN MINUS // )
#define FR_EQL  EQUAL  // =
// Row 2
#define FR_A    Q    // A
#define FR_Z    W    // Z
#define FR_E    E    // E
#define FR_R    R    // R
#define FR_T    T    // T
#define FR_Y    Y    // Y
#define FR_U    U    // U
#define FR_I    I    // I
#define FR_O    O    // O
#define FR_P    P    // P
#define FR_CIRC LBKT // ^ (dead)
#define FR_DLR  RBKT  // $
// Row 3
#define FR_Q    A    // Q
#define FR_S    S    // S
#define FR_D    D    // D
#define FR_F    F    // F
#define FR_G    G    // G
#define FR_H    H    // H
#define FR_J    J    // J
#define FR_K    K    // K
#define FR_L    L    // L
#define FR_M    SEMI // M
#define FR_UGRV SQT  // ù
#define FR_ASTR NUHS // *
// Row 4
#define FR_LABK NUBS // <
#define FR_W    Z    // W
#define FR_X    X    // X
#define FR_C    C    // C
#define FR_V    V    // V
#define FR_B    B    // B
#define FR_N    N    // N
#define FR_COMM M    // ,
#define FR_SCLN COMMA// ;
#define FR_COLN DOT  // :
#define FR_EXLM FSLH // !

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ¨ │ £ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ % │ µ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │ ? │ . │ / │ § │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_1    S(FR_AMPR) // 1
#define FR_2    S(FR_EACU) // 2
#define FR_3    S(FR_DQUO) // 3
#define FR_4    S(FR_QUOT) // 4
#define FR_5    S(FR_LPRN) // 5
#define FR_6    S(FR_MINS) // 6
#define FR_7    S(FR_EGRV) // 7
#define FR_8    S(FR_UNDS) // 8
#define FR_9    S(FR_CCED) // 9
#define FR_0    S(FR_AGRV) // 0
#define FR_DEG  S(FR_RPRN) // °
#define FR_PLUS S(FR_EQL)  // +   
// Row 2
#define FR_DIAE S(FR_CIRC) // ¨ (dead)
#define FR_PND  S(FR_DLR)  // £
// Row 3
#define FR_PERC S(FR_UGRV) // %
#define FR_MICR S(FR_ASTR) // µ
// Row 4
#define FR_RABK S(FR_LABK) // >
#define FR_QUES S(FR_COMM) // ?
#define FR_DOT  S(FR_SCLN) // .
#define FR_SLSH S(FR_COLN) // /
#define FR_SECT S(FR_EXLM) // §

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ~ │ # │ { │ [ │ | │ ` │ \ │   │ @ │ ] │ } │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │   │ ¤ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_TILD RA(FR_EACU) // ~ (dead)
#define FR_HASH RA(FR_DQUO) // #
#define FR_LCBR RA(FR_QUOT) // {
#define FR_LBRC RA(FR_LPRN) // [
#define FR_PIPE RA(FR_MINS) // |
#define FR_GRV  RA(FR_EGRV) // ` (dead)
#define FR_BSLS RA(FR_UNDS) // (backslash)
#define FR_AT   RA(FR_AGRV) // @
#define FR_RBRC RA(FR_RPRN) // ]
#define FR_RCBR RA(FR_EQL)  // }
// Row 2
#define FR_EURO RA(E)   // €
#define FR_CURR RA(FR_DLR) // ¤
