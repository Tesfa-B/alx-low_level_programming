#include "main.h"

void rev_string(char *s)
{
       	int h  = _strlen(s) - 1;

        while ( *s != '\0')
        {
                _putchar(s[h]);
                s--;
        }
        _putchar('\n');
}
int _strlen(char *s)
{
        int i = 0;

        while (i != '\0')
        {
                i++;
                s++;
        }
        return (i);

}	
