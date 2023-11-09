#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print all given strings
 * @separator: separates strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *f;
	char s = *separator;
	unsigned int x;

	va_start(ap, n);

	if (s == '\0')
		return;
	for (x = 0; x < n; x++)
	{
		f = va_arg(ap, char *);
			if (*f == '\0')
			{
				printf("(nil)");
			}
			printf("%s", f);
			if (n - 1 > x)
			{
				printf("%c", s);
			}
	}
	putchar('\n');
	va_end(ap);
}
