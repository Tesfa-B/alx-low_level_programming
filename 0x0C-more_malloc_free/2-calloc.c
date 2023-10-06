#include "main.h"
/**
 * *_calloc - allocate memory and sets the value of memory to 0
 * @nmemb: the value of the block
 * @size: the size of the block
 * Return: if fail NULL else pointer to the address
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *alloc = malloc(sizeof(int) * size);

	alloc[0] = nmemb;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (alloc == NULL)
		return (NULL);
	return (alloc);
	free(0);
}


