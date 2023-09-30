#include "main.h"
/**
 * _print_rev_recursion - prints the given valie in reverse
 * @s: to defrenece value of *s by adding 1
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
