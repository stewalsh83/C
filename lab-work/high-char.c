#include <stdio.h>
#include <stdlib.h>
/* UNFINISHED */
int main(int argc, char *argv[])
{
    int n, i, j, temp;
	int size = 0;

	for(n = 1; n < argc; n++){
		size++;
	}

	// int array[10];
    char array[10];
	array[size];
	for (i = 0; i <= size; i++)
		// array[i] = atoi(argv[i + 1]);
        array[i] = *argv[i + 1];

	i = 0;
	while (i < size)
	{
		i++;
	}

	for (i = 0; i < 5; i++)
		printf("%s \n", array[i]);

	printf("\n");
	return 0;
}