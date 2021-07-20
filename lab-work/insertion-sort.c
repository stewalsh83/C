#include <stdio.h>
#include <stdlib.h>
// insertion sort from command line
int main(int argc, char *argv[])
{
    int i, num, pos, val;
	int size = 0;

	for(num = 1; num < argc; num++){
		size++;
	}

	int array[100]; //int array[size];
	array[size];
	for(i = 0; i <= size; i++)
	    array[i] = atoi(argv[i + 1]);

	i = 1;
	while(i < size)
	{   
        val = array[i];
        pos = i;
        while(0 < pos && val < array[pos - 1])
        {
            array[pos] = array[pos - 1];
            pos -= 1;
        }
        array[pos] = val;
        i++;
	}
    printf("Insertion Sort\n");
	printf("Sorted array: \n");

	for(i = 0; i < size; i++)
	    printf("%d ", array[i]);

	printf("\n\n");
	return 0;
}