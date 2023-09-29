#include "main.h"

void print_rev(char *s)
{
	int len = 0;
	char temp;
	int i;
	char p = *s:


	while (p[len] != '\0')
	{
	len++;
	}
		for (i = 0; i < len / 2; i++)
		{
			temp = p[i];
			p[i] = p[len - i - 1];
			p[len - i - 1] = temp;
			_putchar(p);
		}
	_putchar('\n');
}
