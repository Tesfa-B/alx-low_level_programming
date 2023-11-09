#include <stdarg.h>
#include <stdio.h>

void print_all(const char *const format, ...)
{
	va_list ak;
	int x;
	int y;
	char c;
	int i;
	float f;
	char * s;

	va_start(ak, format);
	
		
	if (format == c)
	{
		for (x = 0; i > 0; x++)
		{
			c = va_arg(ak, char);
			printf("%c", c);
		}
	}
	if (format == i)
	{
		for( y = 0;i > 0; y++)
		{
			i = va_arg(ak, int);
			printf("%d". i);
		}
	}
	while (format == f)
	{
		i = 0;
		f = va_arg(ak, float)
		printf("%f",f);
		i++;
	}
	
	while (format == s)
	{
		i = 0;
		s = va_arg(ak, char *);
		printf("%s", s);
		i++;
	}
	putchar('\n');
	va_end(ak);
}
