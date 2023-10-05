#include "main.h"
/**
 * _strdup - copies the value of parameter
 * @str: the value of the string
 * Return: if 0 return NULL else the pointer
 */
char *_strdup(char *str)
{
	int *new;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		new = malloc(sizeof(int));
		new =(int*) str;
		return (str);
	}
	free(new);
	return (0);
}
