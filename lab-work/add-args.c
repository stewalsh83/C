#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    printf("%d\n", argc); // number of args
    printf("%s + %s\n", argv[1], argv[2]);

    int num1;
    int num2;
	int sum;
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    sum = num1 + num2;
    printf("Sum = %d\n", sum);

    return 0;
}