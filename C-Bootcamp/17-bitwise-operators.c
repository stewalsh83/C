#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // type: uint8_t operands

/**
 * A = 12 ---> 0000 1100
 * B =  5 ---> 0000 0101
 * 
 * like vertical truth tables
 * A & B  ---> 0000 0100 = 4
 * A | B  ---> 0000 1101 = 13
 * A ^ B  ---> 0000 1001 = 9
 * 
 * shift A left, right by 1
 * A << 1 ---> 0001 1000 = 24
 * A >> 1 ---> 0000 0110 = 6
 */

int main(int argc, char * argv[])
{
    uint8_t a = 12;
    uint8_t b = 5;

    printf("A = %u\n", a);
    printf("B = %u\n", b);
    printf("\n");

    printf("A & B = %u\n", a & b);
    printf("A | B = %u\n", a | b);
    printf("A ^ B = %u\n", a ^ b);

    printf("A << 1 = %u\n", a << 1U);
    printf("A >> 1 = %u\n", a >> 1U);

    printf("\n");
    return 0;
}

// embedded c programming
// low level manipulation on raw bits
// memory addresses
// status registers
// suited for writing device drivers

/*
    | Operator | Description        |
    |    &     | Bitwise AND        |
    |    |     | Bitwise OR         |
    |    ^     | Bitwise XOR        |
    |    ~     | Bitwise Complement |
    |    <<    | Shift Left         |
    |    >>    | Shift Right        |
*/