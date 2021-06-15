#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c = 'A';

    printf("char c: %d\n", c);
    printf("char c: %c\n", c);

    c = 66; // numeric ascii value
    printf("char c: %c\n", c);

    // Acquire user input
    printf("Input a character: ");
    c = getchar();
    printf("You entered: %c\n", c);

    // getchar buffer where other characters are stored
    c = getchar();
    printf("You entered: %c\n", c);

    return 0;
}

// char data type
// char c = 'A';               |  single quoats
// printf("char c: %d\n", c);  |  char c: 65 (ASCII value 65)