#include "main.h"

char *str_concat(char *s1, char *s2)
{
	int *concat;

	if (s1 || s2 == '\0')
	{
		return;
	}
	else
	{
		concat = malloc(sizeof (int));
       		concat = s1 + s2;
	}
	return (0);
}
