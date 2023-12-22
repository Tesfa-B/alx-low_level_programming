#include "main.h"
/**
 * puts2 - prints every other charactrer
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;
	int j = _strlen(str);

	while (j > i)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
/**
 * _strlen - calculates string length
 * @str: string
 * Return: string length
 */
int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
