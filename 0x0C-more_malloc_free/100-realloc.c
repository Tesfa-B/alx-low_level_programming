#include "main.h"
/**
 * *_realloc - resizes the allocated memory before
 * @ptr: the address of the previous allocated memory
 * @old_size: the size of the previous allocated memory
 * @new_size: the new size to be allocated
 * Return: real if new_size > old_size,if size old and new == return ptr
 * if ptr == NULL return malloc if new_size 0 return Null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *real = realloc(ptr, new_size * sizeof(int));

	if (new_size > old_size)
	{
		return (real);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		real = malloc(new_size * sizeof(int));
	}
	if (new_size == 0)
	{
		free(real);
		return (NULL);
	}
	return (real);
	free(real);
}
