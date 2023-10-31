#include "main.h"

char *_strdup(char *str)
{
	char *j;
	j = (char *) malloc (sizeof(str));

	if (str == NULL)
		return (NULL);
	if (*str != NULL)
		while(*str != '\0')
		{
			j = str;
		}str++;	
		return (j);
	}
	return (0);
	free(j);
}
