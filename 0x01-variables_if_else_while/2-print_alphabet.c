#include <stdio.h>
/**
 * main - prints all alphabets in lower case
 * Return: if success return 0
 */
int main(void)
{
	char q;
	char n = '\n';

	for (q = 'a'; q  <= 'z' ; q++)
	putchar(q);
	putchar(n);

	return (0);
}
