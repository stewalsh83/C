#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i, j, temp, p;
	int size = 0;

	for(n = 1; n < argc; n++){
		size++;
	}

	int array[100]; //int array[size];
	array[size];
	for (i = 0; i <= size; i++)
		array[i] = atoi(argv[i + 1]);

	i = 0;
	while (i < size)
	{   
        p = i;
        j = i + 1;
        while(j < size)
        {
            if(array[j] < array[p])
                p = j;
            j++;
        }
		temp = array[p];
		array[p] = array[i];
		array[i] = temp;
		i++;
	}

	printf("\n\nSorted array: \n");

	for (i = 0; i < size; i++)
		printf("%d ", array[i]);

	printf("\n\n");
	return 0;
}