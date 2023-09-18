#include "main.h"
/**
 * swap_int - swaps files of two integer
 * @a: the value of a to be swaped
 * @b: the value of b to be swaped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
