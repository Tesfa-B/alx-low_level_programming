#include "main.h"
int check_pali(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if the string is palindrome
 * @s: the value to be checked
 * Return: if its 1 else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (check_pal(s, 0 _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns length of a string
 * @s: the value to be checked
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pali - checks the characte for palindrome
 * @s: the value to be checked
 * @i: iterator
 * @len:length of string
 * Return: if palindrome 1 else 0
 */
int check_pali(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pali(s, i + 1, len - 1));
}
