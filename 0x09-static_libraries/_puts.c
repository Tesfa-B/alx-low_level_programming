#include "main.h"

void _puts(char *s)
{
	if (*s != '\0')

	_putchar(*s);
	s++;
	_putchar('\n');
}
