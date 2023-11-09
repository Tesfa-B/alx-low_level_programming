#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints all numbers
 * @separator: is the placed after the number
 * @n: number of argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char x = *separator;
	unsigned int i;
	va_list aj;
	int m;

	va_start(aj, n);
	if (n != 0)
		for (i = 0; i < n; i++)
		{
			m = va_arg(aj, int);
			printf("%d", m);
			if (x == '\0')
				return;
			if (i < n - 1)
			printf("%c ", x);
		}
		va_end(aj);
		putchar('\n');
}
