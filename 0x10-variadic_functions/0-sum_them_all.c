#include <stdarg.h>
/**
 * sum_them_all - sum all given argument
 * @n: number of argument
 * Return: 0;
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ag;
	int sum = 0;
	unsigned int y;

	if (n == 0)
		return (0);
	va_start(ag, n);

	for (y = 0; y < n; y++)
	{
		sum += va_arg(ag, int);
	}
	va_end(ag);
	return (sum);
}
