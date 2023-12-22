#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int h  = _strlen(s);

	while (h != 0)
	{
		h--;
		_putchar(s[h]);
	}
	_putchar('\n');
}
/**
 * _strlen - calculates string length
 * @s: string
 * Return: retuns string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);

}
