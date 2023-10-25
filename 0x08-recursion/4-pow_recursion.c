#include "main.h"
/**
 * _pow_recursion - claculatest x raised y
 * @x: value of x
 * @y: vlaue of y
 * Return: if y less than 0 return -1 else return x
 */
int _pow_recursion(int x, int y)
{
	int j;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y <= 1)
		return (x);
	return (j = x * _pow_recursion(x, y - 1));
}
