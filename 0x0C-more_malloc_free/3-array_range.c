#include "main.h"
/**
 * *array_range - allocates the values in memory
 * @min: the first value
 * @max:the last value
 * Return: if min > max return NULL else arr 
 */
int *array_range(int min, int max)
{
	int *arr = malloc(sizeof(int));

	arr[0] = min;  
	if (min > max)
		return (NULL);
	if (arr == 0)
		return (NULL);
	return (arr);
	free(arr);
}
