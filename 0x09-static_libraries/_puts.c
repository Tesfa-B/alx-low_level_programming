#include "main.h"

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + 0);
		s++;
	}
	_putchar ('\n');
}
