#include <stdio.h>
#include <string.h>
/**
 * main - prints single digits separted by , and space
 * Return: if success return 0
 */
int main(void)
{
	int i;
	int r = '\n';
	const char *c = "";
	
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(c);
		if (i == 57)
		{
			putchar(i);
		}
	}
	putchar(r);
	return (0);
}
