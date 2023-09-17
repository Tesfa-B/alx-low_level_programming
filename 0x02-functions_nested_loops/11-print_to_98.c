#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints natural numbres starting form the given number to 98
 * @n: the number that printing  starts from
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
	n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
	n--;
	}
	printf("\n");
}
