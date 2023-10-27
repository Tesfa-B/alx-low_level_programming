#include "main.h"
#include <stdlib.h>

int main(int argc ,char *argv[])
{
	int i;
	int j;

	for (i = 0; i < argc; i++)
		for (j = 0; j == '\0') 
		{
	       		_putchar(*argv[i]);
		}
	_putchar('\n');
	return (0);

}
