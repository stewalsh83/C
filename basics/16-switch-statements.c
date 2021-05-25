#include <stdlib.h>
#include <stdio.h>

int main(){

    char grade = 's'; // invalid grade

    switch(grade){
    case 'A' : // in the case that grade is = to A then execute code.
        printf("You did grate! ");
        break;                    // break out of switch statement
    case 'B' :
        printf("You did alright! ");
        break;
    case 'C' :
        printf("You did poorly. ");
        break;
    case 'D' :
        printf("You did bad. ");
        break;
    case 'F' :
        printf("You Failed!");
        break;
    default : // like else
        printf("Invalid Grade");
    }

    return 0;
}

// like if else statements
// checking one single value against other values
