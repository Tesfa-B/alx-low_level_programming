#include "main.h"
int re_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - retursns the square root
 * @n: the numbeer to be cheked
 * Return: the result of square root function;
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (re_sqrt_recursion(n, 0));
}
/**
 * re_sqrt_recursion - recurses to find the natural squar root
 * @n: number to be checked
 * @i: iterator
 * Return: the result of square root
 */
int re_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (re_sqrt_recursion(n, i + 1));
}
