#include "main.h"
/**
 * _isdigit - checks if the value is digit
 * @c: the value to be checked
 * Return: if it is digit return else 0
 */
int _isdigit(int c)
{
	while (c >= 48 && c <= 57)
		return (1);

	return (0);
}
