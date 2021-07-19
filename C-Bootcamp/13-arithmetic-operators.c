#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int a, b, c;

    printf("Enter A operand (int): ");
    scanf("%d", &a);

    printf("Enter B operand (int): ");
    scanf("%d", &b);
    printf("\n");

    c = a + b;
    printf("c = a + b ---> %3.d\n", c);

    c = a - b;
    printf("c = a - b ---> %3.d\n", c);

    c = a * b;
    printf("c = a * b ---> %3.d\n", c);

    c = a / b;
    printf("c = a / b ---> %3.d\n", c);

    c = a % b;
    printf("c = a %% b --->   %d\n", c);

    return 0;
}