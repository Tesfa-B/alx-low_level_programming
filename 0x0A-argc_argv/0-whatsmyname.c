#include "main.h"

int main (int argc, char *argv[])
{
	int i;

	if  (argc == '\0')
		return (1);
	else 	
	{
		for (i = 0; i < argc; i++)
		{
			_putchar(*argv[i]);
			_putchar('\n')
		}
	}
	return (0);
}
