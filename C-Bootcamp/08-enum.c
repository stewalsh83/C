#include <stdio.h>
#include <stdlib.h>

// const, use capital letters
enum menu
{                       // int default values %d
    TEA,                // 0
    COFFEE,             // 1
    JUICE = 100,        // 2
    BEER, // value 101  // 3
};

int main()
{
    enum menu person1 = COFFEE;
    enum menu person2 = BEER;

    printf("person1 ordered: %d\n", person1);
    printf("person2 ordered: %d\n", person2);

    printf("\n\n === C === \n\n");
    return 0;
}