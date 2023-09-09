#include <stdio.h>
/**
 * main - prints base 10 numbers strating from 0
 * Return: if success return 0
 */
int main(void)
{
	char i;
	char r = '\n';

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar(r);
	return (0);
}
