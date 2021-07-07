#include <stdio.h>
#include <stdlib.h>
// reversing 5 element command line input array
int main(int argc, char *argv[])
{
	int array[5], i, j, temp;
	array[0] = atoi(argv[1]);
	array[1] = atoi(argv[2]);
	array[2] = atoi(argv[3]);
	array[3] = atoi(argv[4]);
	array[4] = atoi(argv[5]);

	// Inserting elements into the array
	for (i = 0; i <= 5; i++)

	j = i - 1;	// Assigning j to Last array element
	i = 0;		// Assigning i to first array element

	// Swap
	while (i < j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i++;
		j--;
	}

	// printing reversed array
	for (i = 0; i < 5; i++)
		printf("%d \n", array[i]);

	printf("\n");
	return (0);
}