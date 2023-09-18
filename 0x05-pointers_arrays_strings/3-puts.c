#include "main.h"
/**
 * _puts - prints strings to stdo with new line in the end
 * @str: value to be printed
 */
void _puts(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
	p++;
	}
	_putchar('\n');
}

