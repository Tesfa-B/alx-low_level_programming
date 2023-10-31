#include "main.h"
/**
 * create_array - creates array by daynamically allocating
 * @size: size of the arary
 * @c: the value of the array
 * Return: if success the the value else 1;
 */
char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int b;

	j = (char *) malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);
	if (j != NULL)
	{
		for (b = 0; b <= size; b++)
		{
			j[b] = c;
		}
	return (j);
	}
	return (0);
	free(j);
}
