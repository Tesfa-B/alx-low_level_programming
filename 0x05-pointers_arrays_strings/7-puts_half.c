#include "main.h"
/**
 * puts_half - prints half of the stirng
 * @str: stirng
 */
void puts_half(char *str)
{
	int j = _strlen(str);
	int s;

	while (*str != '\0')
	{
		int k = j - 1;

		if (j % 2 == 1)
		{
			s = k / 2;
			_putchar(str[s]);
			str++;
		}
		s = j / 2;
		_putchar(str[s]);
		str++;
	}
	_putchar('\n');
}
/**
 * _strlen - calculates length of stirng
 * @str: string
 * Return: length of the string
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
