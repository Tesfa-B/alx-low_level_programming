#include "main.h"
/**
 * *create_array - crates array by dynamically allocating
 * @size: value of the size
 * @c: value of the array
 * arr: allocating memory size
 * Return: returns the char pointer to the chunk if memory
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = malloc(sizeof(char) * size);

	if (size == 0 || NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
			return (arr);
	}
	free(arr);
}
