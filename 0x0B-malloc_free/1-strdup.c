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
	new = malloc(sizeof(char));
	new = str;
	return (new);
	free(new);
}
