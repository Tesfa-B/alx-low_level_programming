#include "main.h"
/**
 * *array_range - allocates the values in memory
 * @min: the first value
 * @max:the last value
 * Return: if min > max return NULL else arr
 */
int *array_range(int min, int max)
{
	int size;
	int i;
	int *arr;

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (min > max)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
		arr[i] = min++;
	return (arr);
	free(arr);
}
