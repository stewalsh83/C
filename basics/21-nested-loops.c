#include <stdlib.h>
#include <stdio.h>

int main()
{   
    // 3 elements, 2 inner elements
    int nums[3][2] = {
                    {1, 2}, // index 0
                    {3, 4}, // index 1
                    {5, 6}  // index 2
                    };
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 2D arrays (each element in the array its own array)
// int nums[3][2] = {{1, 2}, {3, 4}, {5, 6}};
// {{[0][0], [0][1]}, {[1][0], [1][1]}, {[2][0], [2][1]}};
// printf("%d", nums[1][1]);

