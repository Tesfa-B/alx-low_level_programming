#include "variadic_functions"

void  print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	int i;

	va_start(string);

	if (string == NULL)
		printf("(nil)");
	

	va_end(string);
	putchar('\n');
}
