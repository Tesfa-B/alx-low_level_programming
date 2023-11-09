#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print all given strings
 * @separator: separates strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *j;
	unsigned int x;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		j = va_arg(ap, char *);

		if (j == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", j);

		if (separator != NULL && x != n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(ap);
}
