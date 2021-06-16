#include <stdlib.h>
#include <stdio.h>

// four function calculator
// enter two numeric command line arguments
// operators + - / *

int main(int argc, char * argv[])
{

    double num1 = atoi(argv[1]);
    double num2 = atoi(argv[2]);

    char op;
    printf("Operators + - / *\n");
    printf("Enter Operator: ");
    scanf("%c", &op);

    if(op == '+'){
        printf("\nPlus: %5.0f + %.0f = %.0f", num1, num2, num1 + num2);
    } else if(op == '-'){
        printf("\nMinus: %4.0f - %.0f = %.0f", num1, num2, num1 - num2);
    } else if(op == '/'){
        printf("\nDivide: %3.0f / %.0f = %.2f", num1, num2, num1 / num2);
    } else if(op == '*'){
        printf("\nMultiply: %1.0f * %.0f = %.0f", num1, num2, num1 * num2);
    } else{
        printf("\nInvalid Operator!\n");
    }

    return 0;
}