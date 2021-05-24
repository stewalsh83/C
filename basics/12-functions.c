#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("First\n");
    sayHi("User1", 20); // calling the function
    sayHi("User2", 30);
    sayHi("User3", 40);
    printf("Last\n");
    return 0;
}

// return type void (no info)
void sayHi(char name[], int age) // 2 parameter inputs
{
    printf("Hello %s, you are %d\n", name, age);
}