#include "main.h"
int my_prime(int n, int i);
/**
 * is_prime - checks if the number is prime or not
 * @n: the value to be cheked
 * Return: returns 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <=  1)
	{
		return (0);
	}
	return (my_prime(n, n - 1));
}
/**
 * my_prime - calculate if the number is prime
 * @n: number to be checked
 * @i:iterator
 * Return: if n is prime 1 else 0
 */
int my_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (my_prime(n, i - 1));
}
