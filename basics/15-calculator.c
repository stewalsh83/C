#include <stdlib.h>
#include <stdio.h>

/* four function calculator 
   operators + - / *
 */

int main()
{

    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter operator: ");
    scanf(" %c", &op); // " %c" space before %c

    printf("Enter a number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1 + num2);
    } else if(op == '-'){
        printf("%f", num1 - num2);
    } else if(op == '/'){
        printf("%f", num1 / num2);
    } else if(op == '*'){
        printf("%f", num1 * num2);
    } else{
        printf("Invalid Operator!\n");
    }

    return 0;
}