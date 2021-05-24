#include <stdlib.h>
#include <stdio.h>

int main()
{

    char color[20]; // memory alocation up to 20 char
    char pluralNoun[20];
    char personF[20];
    char personL[20];

    printf("Enter a color: ");
    scanf("%s", color); // & not needed for string

    printf("Enter plural-noun: ");
    scanf("%s", pluralNoun);

    printf("Enter a persons name: ");
    scanf("%s%s", personF, personL); // Must enter first and last name

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", personF, personL);

    return 0;
}

// Random words added to a short story