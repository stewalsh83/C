#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    // char a = 'a';
    // char b = 'z';

    // printf("A = %c\n", a);
    // printf("B = %c\n", b);
    // printf("\n");

    int a, b;

    printf("Enter operand A (int): ");
    scanf("%d", &a);
    printf("Enter operand B (int): ");
    scanf("%d", &b);

    printf("A == B --> %d\n", a == b);
    printf("A != B --> %d\n", a != b);
    printf("A > B  --> %d\n", a > b);
    printf("A < B  --> %d\n", a < b);
    printf("A >= B --> %d\n", a >= b);
    printf("A <= B --> %d\n", a <= b);

    printf("\n");
    return 0;
}

// 1 = true
// 0 = false

/*
*   All Relational Operators
*       ==
*       !=
*       >
*       <
*       >=
*       <=
*/