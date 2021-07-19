#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 3;
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    a = b;
    printf("a = b  --> a = %d\n", a);

    a += b; // a = a + b
    printf("a += b --> a = %d\n", a);

    a -= b;
    printf("a -= b --> a = %d\n", a);

    a *= b;
    printf("a *= b --> a = %d\n", a);

    a /= b;
    printf("a /= b --> a = %d\n", a);

    a %= b;
    printf("a %%= b --> a = %d\n", a);

    printf("\n");
    return 0;
}

// variable = value
/**
 *   +=     a = a + b   a += b
 *   -=     a = a - b   a -= b
 *   *=     a = a * b   a *= b
 *   /=     a = a / b   a /= b
 *   %=     a = a % b   a %= b 
 * 
 *   &=     a = a & b   a &= b
 *   |=     a = a | b   a |= b
 *   ^=     a = a ^ b   a ^= b
 *  >>=    a = a >> b   a >>= b
 *  <<=    a = a << b   a <<= b 
 */