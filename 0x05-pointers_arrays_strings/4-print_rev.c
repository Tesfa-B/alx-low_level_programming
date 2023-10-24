#include "main.h"

void print_rev(char *s)
{
	int p = 0;
	while (s[p] != '\0')
	{
		s++;
		if (s[p] == '\0')
		{
		_putchar(*s);
		s--;
		}
	}
}
