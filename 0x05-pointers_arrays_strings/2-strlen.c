#include "main.h"
/**
 * _strlen - calculates the length of the argument
 * @s: the value to be checked
 * Return: returns the length
 */
int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}
