#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s + 0);
	s--;
	_print_rev_recursion(s);	
}
