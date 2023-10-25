#include "main.h"
/**
 * factorial - calculates the factorial of the value
 * @n: the value to be calculated
 * Return: if n less than 0 return -1 else retun factorial
 */
int factorial(int n)
{
	int x;

	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (x = n * factorial(n - 1));
}
