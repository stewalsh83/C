/*
 circle-area.c
 author Donal Fitzpatrick
 */

/* includes*/
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main(int argc, char *argv[])
{
    int radius = 0;
    int height = 0;
    float area = 0.0;
    float vol = 0.0;

    radius = atoi(argv[1]);
    height = atoi(argv[2]);

    vol = PI * radius * radius * height;

    area = 2 * PI * radius * (height + radius);

    printf("    Cylinder:\n");
    printf("%10d | Radius\n", radius);
    printf("%10d | Height\n", height);
    printf("%10.2f | Volume\n", vol);
    printf("%10.2f | Surface Area\n", area);
    return (0);
}