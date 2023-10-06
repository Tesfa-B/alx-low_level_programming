#include "main.h"

char *string_nconct(char *s1,char *s2, unsigned int n)
{
	char *conca = malloc(sizeof(char) * n);
	
	conca[0] = (int*) s1;
	conca[1] = (int*) s2;
	
	if (conca == NULL)
		return (NULL);

	return(char *) (conca);
}
