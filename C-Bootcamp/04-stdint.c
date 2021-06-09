#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    unsigned students = 25U;
    unsigned long long worldPopulation = 7871551610U;

    printf("%12u | Students in the class\n", students);
    printf("%12llu | World population now\n", worldPopulation);

    uint8_t count = UINT8_MAX;
    printf("%12u | Count of something\n", count);

    count = count + 1;
    printf("%12u | Count of something +1 (OVERFLOW)\n", count);

    printf("%12d | INT32_MIN\n", INT32_MIN);
    printf("%12d | INT32_MAX\n", INT32_MAX);
    printf("%12d | UINT32_MAX\n", UINT32_MAX);

    printf("\n\n=== C ===\n\n");
    return EXIT_SUCCESS;
}

// macro in stdint uint8_t
// uint8_t count = 0b11111111; (binary literal)
// uint8_t count = 0xFF; (hex literal)
// 1 byte = 8 bits, hex digit = 4 bits