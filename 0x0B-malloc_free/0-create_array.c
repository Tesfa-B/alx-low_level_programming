#include "main.h"

char *create_array(unsigned int size, char c)
{
	int *arr;
	int i;

	if (size == 0)
	{
		return NULL;
	}
	
	arr = malloc(sizeof(int) * size);
	for (i = 0; i <= size - 1; i++)
		arr[i] = c;

	free(arr);
	
	return (0); 
}

