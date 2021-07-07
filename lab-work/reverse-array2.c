#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i, j, temp;
	int size = 0;

	for(n = 1; n < argc; n++){
		size++;
	}

	int array[size];
	for (i = 0; i <= size; i++)
		array[i] = atoi(argv[i + 1]);

	j = size - 1;
	i = 0;

	while (i < j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i++;
		j--;
	}

	for (i = 0; i < size; i++)
		printf("%d \n", array[i]);

	printf("\n");
	return 0;
}