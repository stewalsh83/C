#include <stdio.h>
#include <stdlib.h>

int main()
{

    int favNum = 90;
    char myChar = 'a';
    printf("Hello\"World\n");

    printf("My favorite %s is %f\n", "number", 500.12345);
    printf("My favorite %s is %d\n", "number", favNum);
    printf("My favorite number %c%c %d\n", 'i', 's', 50);
    printf("I have %c dog\n", myChar);

    return 0;
}

// printf(); printfunction
// format specifier
// %s = string
// %c = single character
// %d = int
// %f = double (floating point numbers)