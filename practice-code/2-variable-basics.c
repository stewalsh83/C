#include <stdlib.h>

int main()
{   
    char characterName[] = "Tom";
    int characterAge = 67;

    printf("There once was a man named %s, \n", characterName);
    printf("he was %d years old.\n", characterAge);
    
    characterAge = 30; // modified variable
    printf("He liked the name %s\n", characterName);
    printf("but did not like being %d.\n", characterAge);

    return 0;
}

// variables
// char var1 = "A" (single character)
// char var2[] = "Abc" (multiple characters)
// int var3 = 10 (whole number)

// format specifier (placeholders)
// %s = string
// %d = int
// %f = double