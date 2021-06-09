#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int girls = 12;
    int boys = 9;
    int students = girls + boys;

    printf("In the classroom, there are\n");
    printf("\t%d girls\n", girls);
    printf("\t%d boys\n", boys);
    printf("giving a total of %d students. \n", students);

    return EXIT_SUCCESS;
}

// ctrl + shift + b (build task)
// shift + alt + f (code format shortcut)
// ctrl + alt plus arrow (multiple cursors)