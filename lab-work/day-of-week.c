#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    const char *Week[] = 
    {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday",
    };

    int day = atoi(argv[1]);
    if(day < 1 || day > 7)
        printf("Invalid input!\n");
    
    printf("%5d = %s\n", day, Week[day-1]);
    
    return 0;
}