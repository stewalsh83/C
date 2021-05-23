#include <stdio.h>
#include <stdlib.h>
#include <math.h> // built-in functions

int main()
{

    printf("%f\n", 8.9); // 8.900000
    printf("%f\n", 5.0 + 4.5); // + - * /
    printf("%f\n", 5 + 4.5); // int + double = 9.500000
    
    printf("%d\n", 5 / 4);    // 1
    printf("%f\n", 5 / 4.0);  // 1.250000

    // built-in math functions
    printf("%f\n", pow(2, 3) ); // 2^3
    printf("%f\n", sqrt(36) );
    printf("%f\n", ceil(36.356) ); // ceiling, round number up
    printf("%f\n", floor(36.356) ); // round number down
    printf("%f\n", round(36.356) ); // round off to nearest

    return 0;
}