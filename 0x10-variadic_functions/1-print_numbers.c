#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints all numbers
 * @separator: is the placed after the number
 * @n: number of argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list aj;

	va_start(aj, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(aj, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');

	va_end(aj);
}
