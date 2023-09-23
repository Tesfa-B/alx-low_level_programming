#include "main.h"
/**
 * print_diagonal - prints \ n numbers of time
 * @n: numbers of times to be printed
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
