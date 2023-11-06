#include "main.h"

void print_rev(char *s)
{
	int i;

 	for (i = 0; *s != '\0'; i++)
	{
		s++;
		if (*s == '\0')
		{
			--s;
		}
	}
	_putchar('\n');
}
