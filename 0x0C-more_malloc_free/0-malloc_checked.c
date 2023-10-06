#include "main.h"
/**
 * *malloc_checked - daynamically allocate memory
 * @b: the passed value
 * Return:  98 if NULL
 */
void *malloc_checked(unsigned int b)
{
	void *assign;
	       
	assign = malloc(b);

	if (assign == NULL)
		exit(98);
	
	return (assign);
}
