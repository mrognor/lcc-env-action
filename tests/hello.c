// vim:set sw=4 ts=8 et fileencoding=utf8::Кодировка:UTF-8[АБЁЪЯабёъя]
// SPDX-License-Identifier: BSD-2-Clause
// SPDX-FileCopyrightText: 2025 Сергей Леонтьев (leo@sai.msu.ru)

#include <stdio.h>
#include <string.h>

#define STR(A)  #A
#define DUMP(X) printf(#X "=%s\n", STR(X))
#define P(N)  ((void)(!strcmp(#N, STR(N)) ? 0 : printf("%s=%s ", #N, STR(N))))
#define P2(N1, N2)  ((void)(!strcmp(#N1, STR(N1)) ? 0 : printf( \
                                "%s.%s=%s.%s ", #N1, #N1, STR(N1), STR(N2))))

int main(void) {
    printf("Привет мир\nМы из ");
    P2(__clang_major__, __clang_minor__);
    P2(__GNUC__, __GNUC_MINOR__);
    P(__INTEL_COMPILER);
    P(__INTEL_LLVM_COMPILER);
    P2(__LCC__, __LCC_MINOR__);
    P(_MSC_VER);
    P2(__CUDACC_VER_MAJOR__, __CUDACC_VER_MINOR__);
    P2(__NVCOMPILER_MAJOR__, __NVCOMPILER_MINOR__);
    P(__ORANGEC__);
    P(__POCC__);
    P(__SUNPRO_C);
    P(__SUNPRO_CC);
    P(__TINYC__);
    printf("\n");
    P(__STRICT_ANSI__);
    P(__STDC_NO_VLA__);
    P(__STDC_VERSION__);
    P(__STDC__);
    P(__cplusplus);
    printf("\n---\n");
    DUMP(TEST_DEFINITIONS);
    DUMP(TEST_DEFINITIONS_VAL);
}
