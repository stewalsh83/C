#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE * fpointer = fopen("25-employees.txt", "w"); // write
    
    // FILE * fpointer = fopen("25-employees.txt", "a"); // append

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting"); // write info to a file
    
    // fprintf(fpointer, "\nKelly, Customer Service"); // append

    fclose(fpointer);
    return 0;
}