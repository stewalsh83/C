#include <stdlib.h>
#include <stdio.h>

int notOr()
{
    if(!(3 == 2 || 2 > 5)) // one condition needs to be true
    {
        printf("\nTrue");
    } else 
    {
        printf("\nFalse");
    }
}

int highest(int num1, int num2, int num3)
{
    int result;
    
    if(num1 >= num2 && num1 >= num3) // both conditions need to be true
    {
        result = num1;
    } 
    else if(num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else 
    {
        result = num3;
    }
    return result;
}

int main()
{
    printf("%d", highest(3, 7, 5));
    notOr();
    return 0;
}

// logical And  &&
// logical Or   ||
// (!(condition)) Negation (Not(condition))