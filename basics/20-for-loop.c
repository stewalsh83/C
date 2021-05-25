#include <stdlib.h>
#include <stdio.h>

int main()
{   
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    int i;
    for(i = 0; i < 6; i++)
    {
        printf("%d\n", luckyNumbers[i]);
    }

    return 0;
}

// int main()
// {
//     int i = 1;
//     while(i <= 5)
//     {
//         printf("%d\n", i);
//         i++;
//     }
    
//     int j;
//     for(j = 1; j <= 5; j++)
//     {
//         printf("%d\n", j);
//     }

//     return 0;
// }