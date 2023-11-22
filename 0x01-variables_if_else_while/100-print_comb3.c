#include <stdio.h>
/**
 * main - prints combination of two digits seprated by , followed by space
 * Return: if success return 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{	
		for ( y = 1; y <= 9; y++)
		{
			if ( x < y)
			{
				putchar(x + '0');
				putchar(y + '0');
			}
			if (y <= 9)
			{
				putchar(44 + 0 );
				putchar(32 + 0);
			}
		}
	}
	putchar('\n');
	return (0);
}
