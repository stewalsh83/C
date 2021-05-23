#include <stdio.h>
#include <stdlib.h>

int main()
{

    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin); // telling fgets to get the info from standard input
    printf("Your name is %s", name);

    return 0;
}
// scanf only scans user input up until the first space.
// fgets() is away around it
// fgets adds a new line 

// char name[20];               // 20 is max size of the user input
// printf("Enter your name: ");
// scanf("%s", name);           // no & needed
// printf("Your name is %s\n", name);


// char grade;
// printf("Enter your grade: ");
// scanf("%c", &grade);
// printf("Your grade is %c\n", grade);


// double num;
// printf("Enter decimal point number: ");
// scanf("%lf", &num);          // scanf must use %lf not %f for double
// printf("Your number is %f.\n\n", num);


// int age;
// printf("Enter your age: ");
// scanf("%d", &age);           // scanf (user input) & = pointer
// printf("You are %d years old.\n", age);
