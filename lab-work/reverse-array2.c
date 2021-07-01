#include <stdio.h>
#include <stdlib.h>

/* UNFINISHED */

int main(int argc, char *argv[])
{
    int i, j, temp, size;
    int *array = atoi(argv[i]);
    //int length = argc;
    //int *array = (int*)malloc(size*sizeof(int));
	//int array[100] = {i};
	//*array = atoi(argv[i]);

	// Inserting elements into the array
	for (i = 0; i <= size; i++)
        printf("%d", array[i]);

	j = i - 1;
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
	{
		printf("%d \n", array[i]);
	}

	printf("\n");
	return (0);
}