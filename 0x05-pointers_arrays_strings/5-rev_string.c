#include "main.h"

void rev_string(char *s)
{
       	int h = _strlen(s);
	int j;

        while (h != '\0')
        {
		h--;
	       	j = s[h];
		j--;
        }
	return;
}
int _strlen(char *s)
{
        int i = 0;

        while (*s != '\0')
        {
                i++;
                s++;
        }
        return (i);

}	
