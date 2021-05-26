#include <stdlib.h>
#include <stdio.h>

int main()
{   
    char line[255];
    FILE * fpointer = fopen("25-employees.txt", "r");

    fgets(line, 255, fpointer); // reads first line
    printf("%s", line);

    fgets(line, 255, fpointer); // reads second line
    printf("%s", line);

    fclose(fpointer);
    return 0;
}