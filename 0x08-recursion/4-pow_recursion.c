#include "main.h"
/**
 * _pow_recursion - recursivel claculate the value x raised the power of y
 * @x:the value to to checked
 * @y:the value to be checked
 * Return: if y = 0 return 1, if y < 0 reurn -1 else the value of the function
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x *  _pow_recursion(x, y - 1));
}
