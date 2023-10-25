#include "main.h"
/**
 * _puts_recursion - prints till it reach NULL
 * @s: the value to be printed
 */
void _puts_recursion(char *s)
{
	/* first state the base case */
	while (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
