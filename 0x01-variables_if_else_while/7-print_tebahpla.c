#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 * Return:if success return 0;
 */
int main(void)
{
	char i;
	char r = '\n';

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar(r);
	return (0);
}
