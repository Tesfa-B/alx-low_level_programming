#include <stdio.h>
#include <string.h>
/**
 * main - prints single digits separted by , and space
 * Return: if success return 0
 */
int main(void)
{
	int i;
	int c = ',';
	int s = ' ';

	for (i = 48; i <= 57; i++)
	{
		if (i == 57)
		{
			putchar(i);
		}
		else
		{
			putchar(i);
			putchar(c);
			putchar(s);
		}
	}

	return (0);
}
