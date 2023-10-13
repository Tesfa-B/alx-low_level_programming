#include "variadic_functions.h"
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list stri;
	int i;

	for(i = n; i >= 0; i = va_arg(stri int, separator char);
	{
		printf("%d", i);
	}
}
