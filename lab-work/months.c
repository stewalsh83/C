#include <stdio.h>
#include <stdlib.h>

enum month 
{ 
    January = 1, 
    February, 
    March, 
    April, 
    May, 
    June, 
    July,
    August,
    September,
    October,
    November,
    December
};

const char *Months[] = {
    "January", 
    "February", 
    "March", 
    "April", 
    "May", 
    "June", 
    "July",
    "August", 
    "September", 
    "October", 
    "November", 
    "December",
};

const char *NameOfMonth(enum month m) 
{
    return Months[m-1];
}

int main(int argc, char *argv[])
{
    enum month monthInput = atoi(argv[1]);
    if(monthInput == 1)
        printf("%s has 31 days.\n", NameOfMonth(monthInput));
    else if(monthInput == 2){
        printf("%s has 28 days.\n", NameOfMonth(monthInput));
    }
    else if(monthInput == 3){
        printf("%s has 31 days.\n", NameOfMonth(monthInput));
    }
    else if(monthInput == 4){
        printf("%s has 30 days.\n", NameOfMonth(monthInput));
    }
    else if(monthInput == 5){
        printf("%s has 31 days.\n", NameOfMonth(monthInput));
    }
    else if(monthInput == 6){
        printf("%s has 30 days.\n", NameOfMonth(monthInput));
    }
    else if(monthInput == 7){
        printf("%s has 31 days.\n", NameOfMonth(monthInput));
    }
    else if(monthInput == 8){
        printf("%s has 31 days.\n", NameOfMonth(monthInput));
    }
    else if(monthInput == 9){
        printf("%s has 30 days.\n", NameOfMonth(monthInput));
    }
    else if(monthInput == 10){
        printf("%s has 31 days.\n", NameOfMonth(monthInput));
    }
    else if(monthInput == 11){
        printf("%s has 30 days.\n", NameOfMonth(monthInput));
    }
    else if(monthInput == 12){
        printf("%s has 31 days.\n", NameOfMonth(monthInput));
    }
    else{
        printf("Invalid Input!\n");
    }

    return 0;
}