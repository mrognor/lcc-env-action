// vim:set sw=4 ts=8 et fileencoding=utf8:
// SPDX-License-Identifier: BSD-2-Clause
// SPDX-FileCopyrightText: 2025 Сергей Леонтьев (leo@sai.msu.ru)

#include <iostream>

int main(void) {
    std::cout << "Привет мир++\nМы из ";
    #if __ORANGEC__
        std::cout << "__ORANGEC_MAJOR__ __ORANGEC_MINOR__: "
                  << __ORANGEC_MAJOR__ << ' ' << __ORANGEC_MINOR__ << '\n';
    #endif
    #if __clang_major__
        std::cout << "__clang_major__ __clang_minor__: "
                  << __clang_major__ << ' ' << __clang_minor__ << '\n';
    #endif
    #if __GNUC__
        std::cout << "__GNUC__ __GNUC_MINOR__: "
                  << __GNUC__ << ' ' << __GNUC_MINOR__ << '\n';
    #endif
    #if _MSC_VER
        std::cout << "_MSC_VER: " << _MSC_VER << '\n';
    #endif
    #if __INTEL_LLVM_COMPILER
        std::cout << "__INTEL_LLVM_COMPILER: " << __INTEL_LLVM_COMPILER << '\n';
    #endif
    #if __LCC__
        std::cout << "__LCC__ __LCC_MINOR__: "
                  << __LCC__ << ' ' << __LCC_MINOR__ << '\n';
    #endif
    std::cout << "__cplusplus: " << __cplusplus << '\n';
    #define STR(S)  #S
    #define DUMP(X) (std::cout << #X << "=" << STR(X) << '\n')
    DUMP(TEST_DEFINITIONS);
    DUMP(TEST_DEFINITIONS_VAL);
}
