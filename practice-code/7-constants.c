#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    printf("%d\n", num);
    
    num = 8; // modified value
    printf("%d\n", num);


    const int FAV_NUM = 8;
    printf("%d\n", FAV_NUM);
    
    // FAV_NUM = 5; error:
    printf("%d\n", FAV_NUM);

    return 0;
}

// const int VAR_NAME =
// int const VAR_NAME =
// constants can't be modified
// variable all caps helps to display that they are constants (best practice)

// also constants (Unchangable peice of data)
// printf("Hello")
// printf("%d", 70) 