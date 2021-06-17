#include <stdio.h>
#include <stdlib.h>

// Centimetres to Inches Conversion (2.54cm = 1 inch)
// print multiple values 5 per line
// lower bound of 30cm to upper bound of 49cm

int main(int argc, char * argv[])
{
    double cm = 30;
    double inch;
    
    int i;
    for(i=1; i<=20; i++)
    {
        inch = cm / 2.54;
        printf("%.2f \t\t", inch);
        cm++;
    }

    return 0;
}