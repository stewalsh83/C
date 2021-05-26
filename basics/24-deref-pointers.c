#include <stdlib.h>
#include <stdio.h>

// Dereferencing pointers
// getting the Value thats stored at physical memory address

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%p\n", pAge);   // memory address
    printf("%d\n", *pAge);  // dereferened value (%d for int 30)
    printf("%d", *&age);    // another way to dereference 

    return 0;
}

// printf("%d\n", &age); // memory address
// printf("%d\n", *&age); // deref: value
// printf("%d\n", &*&age); // memory address
// printf("%d\n", *&*&age); // deref: value