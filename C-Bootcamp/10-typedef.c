#include <stdio.h>
#include <stdlib.h>

// new name to an existing data type
// new data type defined is a Enumeration called menu
typedef enum
{
    TEA,
    COFFEE,
    JUICE,
    BEER,
} Menu; // capital letter shows its a new type of data

int main()
{
    Menu person1 = COFFEE;
    Menu person2 = BEER;

    printf("person1 ordered: %d\n", person1);
    printf("person2 ordered: %d\n", person2);

    printf("\n\n === C === \n\n");
    return 0;
}

// new names for each data type
// typedef existing_name alisa_name;
// typedef unsigned char byte;
// byte b = 0xFF; // max value before it overflows