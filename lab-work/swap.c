#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, temp;
    x = 1;
    y = 2;

    printf("Before Swap\n");
    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    temp = x;  //   t(0) = x(1)   --->   t(1)
    x = y;     //   x(1) = y(2)   --->   x(2)
    y = temp;  //   y(2) = t(1)   --->   y(1)

    printf("After Swap\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("\n");
    return 0;
}