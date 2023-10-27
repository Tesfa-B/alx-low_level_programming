#include "main.h"



int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s == '\0')
	{
		return (0);
	}
	_strlen_recursion(s +  1);
	j++;
	return (j);
}
