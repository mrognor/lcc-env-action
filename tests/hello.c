// vim:set sw=4 ts=8 et fileencoding=utf8:
// SPDX-License-Identifier: BSD-2-Clause
// SPDX-FileCopyrightText: 2025 Сергей Леонтьев (leo@sai.msu.ru)

#include <stdio.h>

int main(void) {
    printf("Привет мир\nМы из ");
    #if __POCC__
        printf("__POCC__ %d\n", __POCC__);
    #endif
    #if __ORANGEC__
        printf("__ORANGEC_MAJOR__.__ORANGEC_MINOR__ %d.%d\n",
                __ORANGEC_MAJOR__, __ORANGEC_MINOR__);
    #endif
    #if __clang_major__
        printf("__clang_major__.__clang_minor__ %d.%d\n",
                __clang_major__, __clang_minor__);
    #endif
    #if __GNUC__
        printf("__GNUC__.__GNUC_MINOR__ %d.%d\n",
                __GNUC__, __GNUC_MINOR__);
    #endif
    #if _MSC_VER
        printf("_MSC_VER %d\n", _MSC_VER);
    #endif
    #if __INTEL_LLVM_COMPILER
        printf("__INTEL_LLVM_COMPILER %d\n", __INTEL_LLVM_COMPILER);
    #endif
    #if __LCC__
        printf("__LCC__.__LCC_MINOR__ %d.%d\n",
                __LCC__, __LCC_MINOR__);
    #endif
    #if __STDC_VERSION__
        printf("__STDC_VERSION__ = %ldL\n", __STDC_VERSION__);
    #elif __STDC__
        printf("Don't defined __STDC_VERSION__, __STDC__=%d\n", __STDC__);
    #else
        printf("Don't defined __STDC__ and __STDC_VERSION__\n");
    #endif
    #define STR(S)  #S
    #define DUMP(X) printf(#X "=%s\n", STR(X))
    DUMP(TEST_DEFINITIONS);
    DUMP(TEST_DEFINITIONS_VAL);
}
