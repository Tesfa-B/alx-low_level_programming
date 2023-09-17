#include "main.h"
/**
 * print_sign - checks if the number is positive or negative and print the sign
 * @n: the number to be checked
 * Return: if number Postive return 1, if zero return 0 if negative return -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
