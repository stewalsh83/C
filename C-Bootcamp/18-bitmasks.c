#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("| Operator |   Bitmask    |        Description        |\n");
    printf("|    &     | Bit Clearing | Mask is 0 -> result is 0  |\n");
    printf("|    &     | Bit Testing  | Mask is 1 -> input pass   |\n");
    printf("|    |     | Bit Setting  | Mask is 1 -> result is 1  |\n");
    printf("|    ^     | Bit Toggling | Mask is 1 -> input toggle |\n");

    printf("\n");
    return 0;
}

// Bit Manipulation

/**
 * Setting Nth bit
 * 
 * result = data | mask
 * e.g set bit [6]
 *         76543210
 * data    10101010
 * |
 * mask    01000000
 * =
 * result  11101010
 * 
 * Code:
 * result = data | 0b01000000; -> not practical
 * result = data | (1 << 6);
 */

/**
 * Clearing Nth bit
 * 
 * result = data & mask
 * e.g set bit [5]
 *         76543210
 * data    10101010
 * &
 * mask    11011111
 * =
 * result  10001010
 * 
 * Code:
 * result = data & 0b11011111; -> not practical
 * result = data & ~(1 << 5);
 */

/**
 * Selecting Subset of bit
 * 
 * result = data & mask
 * e.g set bit [3:5]
 *         76543210
 * data    11101001
 * 
 * >> 3    00011101
 * &       00000111
 * =
 * result  00000101
 * 
 * Code:
 * result = (data >> 3) 0b111; -> not practical
 */