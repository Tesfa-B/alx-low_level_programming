#include "main.h"
/**
 * _strlen_recursion - calculates length of the value
 * @s: the value to be calculated
 * Return: lengthe of the given value
 */
int _strlen_recursion(char *s)
{
	int j = 0;

	if (s[j] == '\0')
	{
		return (j);
	}
	j++;
	_strlen_recursion(++s);
	return (j);
}
