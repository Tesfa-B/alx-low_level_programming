#include <stdio.h>
/**
 *main - prints lowercase alphabet except q and e
 *Return: if success return 0;
 */
int main(void)
{
	char q;
	char r = '\n';

	for (q = 'a'; q <= 'z'; q++)
		if (q != 'q' && q != 'e')
			putchar(q);

	putchar(r);
	return (0);
}

