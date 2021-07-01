#include <stdio.h>
#include <stdlib.h>
// Enter number of rows as command line argument
int main(int argc, char *argv[])
{
    int i, j;
    int n = atoi(argv[1]);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= i; j++)
            printf(" ");

        for (j = 1; j <= 2 * (n - i) - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}