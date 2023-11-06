#include "main.h"
/**
 * _strdup - copies the value of parameter
 * @str: the value of the string
 * Return: if 0 return NULL else the pointer
 */
char *_strdup(char *str)
{
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		new = malloc(sizeof(int) * 3);
		new = str;
		return (new);
	}
	free(new);
	return (0);
}
