#include "main.h"

int *array_range(int min, int max)
{
	int *arr = malloc(sizeof(int));
	int i;

	for (i = 0; i <= max; i++)
		arr[i] = min; 
	if (min > max)
		return (NULL);
	if (arr == 0)
		return (NULL);
	return (arr);
}
