#include <stdio.h>
#include <stdlib.h>
// prints center numbers of a list of integers
int main(int argc, char *argv[])
{
	int i, j, num, temp, pos;
	int size = 0;

	for (num = 1; num < argc; num++)
	{
		size++;
	}

	int array[100];
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

	int mid = array[size/2];
	if(size % 2 == 0)
	{ 
		printf("%d\n", mid - 1);
		printf("%d\n", mid);
	}
	else 
	{
		printf("%d\n", mid);
	}

	return 0;
}