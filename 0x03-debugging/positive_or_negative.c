#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - randomly checks number whether it is postive or negative ,zero
 * Return: If success return 0
 */
void  positive_or_negative(int x)

{

	if (x > 0)
	{
		printf("%d is positive\n", x);
	}
	else if (x == 0)
	{
		printf("%d is zero\n", x);
	}
	else
	{
		 printf("%d is negative\n", x);
	}

}

