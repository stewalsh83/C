#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int a, b;

    a = 0;
    b = a++;
//  0   1 (happens after assignment expression)
    printf("After post-increment:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    a = 0;
    b = ++a;
//  1   1 (happens before assignment expression)
    printf("After pre-increment:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    printf("\n");
    return 0;
}

// int and float
// ++ Increment operand by 1
// -- Decrement operand by 1

// a = 0;
// b = a++ * 2 + 1; --->  1  1
// a = 0;
// b = ++a * 2 + 1; --->  3  1
