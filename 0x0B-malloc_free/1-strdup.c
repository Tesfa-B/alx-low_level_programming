#include "main.h"

char *_strdup(char *str)
{
	int *new;

	if (str != NULL)
	{
		new = malloc(sizeof(int));
		new = (int*) str;
	}
	else
		return NULL;
	free(new);
	return (0);
}
