#include "main.h"
/**
 * print_binary - converts decimal to binary
 * @n: value to be converted
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		if (n & (1 << i))
			_putchar('1');
		else
			_putchar('0');
	}
}
