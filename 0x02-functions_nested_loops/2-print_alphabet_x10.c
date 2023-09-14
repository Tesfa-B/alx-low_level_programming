#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lower case 10x
 */
void print_alphabet_x10(void)
{
	int x;
	int w;

	for (x = 0; x < 10; x++)
	{
		for (w = 'a'; w <= 'z'; w++)
		{
			_putchar(w);
		}
		_putchar('\n');
	}
}
