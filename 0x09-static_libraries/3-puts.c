#include "main.h"

void _puts(char *s)
{
	while (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts(s + 1);
}
