#include <stdio.h>
#include <stdlib.h>
// selection sort from command line
int main(int argc, char *argv[])
{
	int i, j, num, temp, pos;
	int size = 0;

	for (num = 1; num < argc; num++)
	{
		size++;
	}

	int array[100]; //int array[size];
	array[size];
	for (i = 0; i <= size; i++)
		array[i] = atoi(argv[i + 1]);

	i = 0;
	while (i < size)
	{
		pos = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[pos])
				pos = j;
			j++;
		}
		temp = array[pos];
		array[pos] = array[i];
		array[i] = temp;
		i++;
	}

	printf("Selection Sort\n");
	printf("Sorted array: \n");

	for (i = 0; i < size; i++)
		printf("%d ", array[i]);

	printf("\n\n");
	return 0;
}