#include <stdio.h>
/**
 * main - prints single digits separted by , and space
 * Return: if success return 0
 */
int main(void)
{
	int i;
	int r = '\n';
	int s = ' ';
	int c = ',';

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(c);
		putchar(s);
	}
	putchar(r);
	return (0);
}
