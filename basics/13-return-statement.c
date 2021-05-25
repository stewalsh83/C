#include <stdlib.h>
#include <stdio.h>

// prototyping (calling cube func while its below main())
double cube(double num);

int main()
{
    printf("Answer: %f", cube(2.0));
    return 0;
}

double cube(double num)
{
    // double result = num * num * num;
    // return result;
    return num * num * num; // return exits function
}
