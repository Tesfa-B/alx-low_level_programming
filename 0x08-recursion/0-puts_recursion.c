#include "main.h"
/**
 * _puts_recursion - prints recusively call its self again and again
 * @*s: the value to be checked
 * @s: the incremnted  value *s
 * Return: if *s equals 0 return to calling function
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
		_putchar(*s + 0);
		s++;
		_puts_recursion(s);

}
