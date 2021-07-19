#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // To find variables of type bool and to use true and false macros

int main(int argc, char * argv[])
{
    printf("Truth Table\n");
    printf("------------------------------------\n");
    printf("| x | y | x AND y | x OR y | NOT x |\n");
    printf("------------------------------------\n");

    bool x, y;

    x = 0;
    y = 0;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);

    x = 1;
    y = 0;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);

    x = 0;
    y = 1;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);

    x = 1;
    y = 1;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);

    printf("\n");
    return 0;
}

// && AND
// || OR
// !  NOT

// Truth Table
// ------------------------------------
// | x | y | x AND y | x OR y | NOT x |
// ------------------------------------
// | 0 | 0 |    0    |    0   |   1   |
// | 1 | 0 |    0    |    1   |   0   |
// | 0 | 1 |    0    |    1   |   1   |
// | 1 | 1 |    1    |    1   |   0   |