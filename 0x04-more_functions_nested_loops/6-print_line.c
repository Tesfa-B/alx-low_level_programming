#include "main.h"
/**
 * print_line - prints underscore n numbers of time
 * @n: the number _ to be printed.
 * Return: return 0 if success
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar('\n');
	return (0);
}
