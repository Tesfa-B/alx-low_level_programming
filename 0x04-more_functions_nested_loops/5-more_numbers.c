#include "main.h"

void more_numbers(void)
{
	int i,j,k;
	for (i = 0; i < 14; i++)
	{
		for(j = 0; j < 10; j++)
		{
			_putchar(j +'0');
		}
			for (k = 10; k < 15; k++)
			{
			_putchar(k);
			}
	}
	_putchar('\n');
}		
