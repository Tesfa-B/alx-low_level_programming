#include "main.h"
/**
 * *malloc_checked - daynamically allocate memory
 * @b: the passed value
 * Return:  98 if NULL
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *assign = malloc(sizeof(unsigned int));
	*assign = b;

	if (assign == NULL && b == 0)
		return ((void *) 98);
	return (assign);
	free(assign);
}
