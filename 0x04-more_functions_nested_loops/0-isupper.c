#include "main.h"
/**
 * _isupper - checks the value if its uppercase
 * @c: the vallue to be checked.
 * Return: if its uppercase return 1 else 0
 */
int _isupper(int c)
{
	while (c <= 'A' || c <= 'Z')
	{
		return (1);
	}

	return (0);

}
