#include <stdio.h>
/**
 * main - prints alphabet in lower case and upper case
 * Return:if success return 0
 */
int main(void)
{
	char q;
	char r = '\n';

	for (q = 'a'; q <= 'z'; q++)
		putchar(q);
	for (q = 'A'; q <= 'Z'; q++)
		putchar(q);
		putchar(r);
	return (0);
}
