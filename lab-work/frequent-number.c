#include <stdio.h>
#include <stdlib.h>
// prints the most frequent number in an array and counts how many times it occurs
int main(int argc, char *argv[])
{
	int i, j, k, num, arr_num;
	int size = 0;

	for (num = 1; num < argc; num++)
	{
		size++;
	}

	int array[100];
	array[size];
	for (i = 0; i <= size; i++)
    {
		array[i] = atoi(argv[i + 1]);
    }

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
				{
                arr_num = array[j];
                }
			j++;
		}
		i++;
	}
    // prints most common number that occurs
    //printf("%d ", arr_num);

    // counts how many times the most common number occurs in array
    int count = 0;
    for(i = 0; i < size; i++)
    {
        if(arr_num == array[i])
        {
           count++;
        }
    }
    printf("%d\n", count);

	return 0;
}
