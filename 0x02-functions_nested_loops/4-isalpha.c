#include "main.h"
/**
 * _isalpha - checks if the character is uppercase or lowercase
 * @c: the character to be checked
 * Return: if character is uppercase or lowercase return 1 els 0
 */
int _isalpha(int c)
{
	if ((c >= 'A') && (c <= 'z'))
		return (1);
	else
		return (0);
}
