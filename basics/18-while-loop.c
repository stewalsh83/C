#include <stdlib.h>
#include <stdio.h>


int main()
{
    int i = 0;
    while(i <= 5)             // condition
    {
        printf("%d\n", i);    // executable code
        i++;                  // increment
    }

    return 0;
}

// do while
// check condition first

// int main()
// {
//     int i = 6;
//     do {
//         printf("%d\n", i);
//         i++;
//     } while(i <= 5);

//     return 0;
// }

// index = index + 1;
// index += 1;
// index++;