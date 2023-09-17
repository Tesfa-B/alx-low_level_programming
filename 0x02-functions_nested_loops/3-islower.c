#include "main.h"
/**
 * _islower - checks if c is lower in range of including a-z
 * @c: the character to be checked
 * Return: if success return 1 else 0
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}

