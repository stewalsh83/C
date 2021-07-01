#include <stdio.h>
#include <stdlib.h>
// will find the largest number of 3 (command line input)
int allDifferent(int a, int b, int c)
{
	if( a == b || a == c || b == c)
	{
		printf("error: two numbers entered are the same\n");
		return 0;
	}
	return 1;
}

int compareThree(int a, int b, int c) 
{  
    if(a > b) { 
        if(a > c) 
            printf("%d is the largest number.\n", a); 
        else
            printf("%d is the largest number.\n", c); 
    } 
    else { 
        if(b > c) 
            printf("%d is the largest number.\n", b); 
        else
            printf("%d is the largest number.\n", c); 
    } 
    return 0; 
} 

int main(int argc, const char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);

	if(allDifferent(a, b, c))
	{
	    compareThree(a, b, c);
	}
}
