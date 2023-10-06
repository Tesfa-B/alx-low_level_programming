#include "main.h"

void *malloc_checked(unsigned int b)
{
	unsigned int *assign = malloc(sizeof(unsigned int));
	*assign = b;

	if (b == 0)
		return (void *)98;
	return (assign);

}

