#include <stdio.h>
#include <stdlib.h>

// Centimetres to Inches Conversion (2.54cm = 1 inch)
int main(int argc, char * argv[])
{
    double cm;
    printf("\nEnter an amount in centimetres: ");
    scanf("%lf", &cm);

    double inch = cm / 2.54;
    printf("\nThe amount in inches is: %.2f\n", inch);

    return 0;
}
