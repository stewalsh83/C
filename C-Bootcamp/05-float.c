#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* 1.23456789 */
    double decimalDigits = 1.23456789;

    /* 7.871 * 10^9 */
    double worldPopulation = 7.871E9; 

    /* 6.626 * 10^-34 */
    double planckConstant = 6.626E-34;

    printf("%12.1f | 1 decimal digit\n", decimalDigits);
    printf("%12.3f | 3 decimal digit\n", decimalDigits);
    printf("%12.1f | worldPopulation, decimal, 1 digit of precision\n", worldPopulation);
    printf("%12.1e | worldPopulation, scientific, 1 digit of precision\n", worldPopulation);
    printf("%12.3e | worldPopulation, scientific, 3 digit of precision\n", worldPopulation);
    printf("%12.1E | planckConstant, scientific, 1 digit of precision\n", planckConstant);
    printf("%12.3E | planckConstant, scientific, 3 digit of precision\n", planckConstant);

    printf("\n\n === C ===\n\n");
    return 0;
}

// float pi = 3.14; (32 bit format)
// double pi = 3.14; (64 bit format)        | Decimal floating point
// double pi = 314E-2; (3.14 = 314 * 10^-2) | Scientific notation

// format specifier
// 3.14    %f
// 314E-2  %e
// %[width][.precision]specifier