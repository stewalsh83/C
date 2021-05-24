#include <stdlib.h>
#include <stdio.h>

int main()
{

    double num1;
    double num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Your answwer is %f", num1 + num2);

    return 0;
}

// number input from user
// &num1 Pointer to access the address of num1
