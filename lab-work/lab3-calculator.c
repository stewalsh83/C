#include <stdio.h>
#include <stdlib.h> // for atof, atoi, etc..
#include <string.h> // for strcmp, 

int main(int argc, char *argv[])
{
    double num1, num2, multiply, divide;
    char *op = argv[1];

    num1 = atof(argv[2]);
    num2 = atof(argv[3]);

    divide = num1 / num2;
    multiply = num1 * num2;

    //  == compares memory addresses so strcmp is used instead
    if(!strcmp("/", op))
    {
        printf("%f", divide);
    }              // NOTE: * will not work as an argument
    else if(!strcmp("multiply", op))
    {
        printf("%f", multiply);
    }
    else
    {
        printf("\nInvalid!\n");
    }

    return 0;
}
