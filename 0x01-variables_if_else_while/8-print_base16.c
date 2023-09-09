#include <stdio.h>
/**
 * main - prints base 16 in lowercase
 * Return: if success return 0
 */
int main(void)
{
	char i;
	char r = '\n';

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar(r);
	return (0);
}
