#include "main.h"

char *create_array(unsigned int size, char c)
{
	int *arr;

	if (size == 0)
	{
		return NULL;
	}
	
	arr = malloc(sizeof (*arr) * 1);
	arr[0] = c;
	
	return (0); 
}

