#include "main.h"
/**
 * _strlen_recursion - checks the length of by adding + 1
 *@*s: the value to be checked
 *@s: the next address in the array
 *Return: if 0 return 0 else length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
