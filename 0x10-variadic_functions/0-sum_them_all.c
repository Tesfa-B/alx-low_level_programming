#include "variadic_functions.h"
/**
 * sum_them_all - calculates the sum of the given number
 * @n: the total number of the values to be calculated
 * Return: 0 if the n is 0 else the the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	int j = 0;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		j = j +  va_arg(nums, int);
	}
	va_end(nums);
	return (j);
}
