#include "main.h"
/**
 * factorial - calculates the n!
 * @n: the value to be checked
 * Return: -1 if < 0, 1 if = 0 else n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
