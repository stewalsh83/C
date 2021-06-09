#include <stdio.h>

int main (void) {
    
    printf("===^^===\n");
    printf("Welcome to the Decimal to Hexadicimal Convertor!\n");
    printf("Enter a number:\n");

    int entered_number;
    scanf("%d", &entered_number);

    printf("Decimal representation:   %9d\n", entered_number);
    printf("Converted to hexadecimal: %9X\n", entered_number);
    printf("===^^===\n");

    return 0;
}

// format specifier
// %d (decimal)
// %X (hexadecimal)
// %9d (9 number of spaces between string and %d)
// %9X (small x = small letters)