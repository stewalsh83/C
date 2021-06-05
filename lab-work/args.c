#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    int i;
    // num of arguments
    printf("%d\n",argc);
 
    // print all arguments
    for(i=0; i<argc; i++)
        printf("%s \t", argv[i]);

    return 0;
}