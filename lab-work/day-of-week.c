#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    const char *week[] = 
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
    if(day > 0 && day < 8)
    {
        printf("%5d = %s\n", day, week[day-1]);
    }
    else
    {
        printf("Invalid input!\n");
    }
    return 0;
}