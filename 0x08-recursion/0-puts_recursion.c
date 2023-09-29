#include "main.h"

int _strlen(char *s);

void _puts_recursion(char *s)
{
	int i = 0;
	char ln = _strlen(s);
       
	for (i = s[0]; i < ln - 1; s++)
	{
		_putchar(s[0] + 0);
	}
	_putchar('\n');
}
int _strlen(char *s)
{	
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		s++;
	}
	return (s);
}

