#include <stdio.h>
#include <stdlib.h>
// will identify triangle numbers (command line input)
int main(int argc, char *argv[]) 
{
    int args = atoi(argv[1]);
    int i;
    int total = 0;

    if ( args == 0 )
    {
        printf("%d is a triangular number.\n", args);
        return 0;
    }

    if ( args > 0 )
    {
        for ( i = 1; i <= args; i++ )
        {
            total = total + i;
            if ( total == args )
            {
                printf("%d is a triangular number.\n", args);
                return 0;
            }
        }
    }
    if ( total != args )
    {
        printf("%d is not a triangular number.\n", args);
        return 0;
    }
}