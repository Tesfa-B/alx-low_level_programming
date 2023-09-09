#include <stdio.h>
/**
 * main - prints all base 10 numbers starting from 0 with out char type
 * Return: if success print 0
 */
int main(void)
{
	int i;
	int r = '\n';

	for (i = 48; i <= 57; i++)
		putchar(i);

	putchar(r);
	return (0);
}
