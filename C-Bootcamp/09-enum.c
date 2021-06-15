#include <stdio.h>
#include <stdlib.h>

enum months
{              // default index
    JAN = 1,   // 0
    FEB,       // 1
    MAR,       // 2
    APR,       // 3
    MAY,       // 4
    JUN,       // 5
    JUL,       // 6
    AUG,       // 7
    SEP,       // 8
    OCT,       // 9
    NOV,       // 10
    DEC,       // 11
};

int main()
{
    enum months myFavouriteMonth = JUL;
    enum months myWorstMonth = NOV;

    printf("My favourite month is the %dth\n", myFavouriteMonth);
    printf("My worst month is the %dth\n", myWorstMonth);

    printf("\n\n === C === \n\n");
    return 0;
}