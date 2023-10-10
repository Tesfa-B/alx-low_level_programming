#include "dog.c"
#include "stdio.h"
/**
 * free_dog - frees allocated memories
 * @d:the name of the struture
 */

void free_dog(dog_t *d)
{
	if (d)
	{

	free(d->name);
	free(d->owner);
	free(d);
	}
}

