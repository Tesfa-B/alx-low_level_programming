#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - randomly checks number whether it is postive or negative ,zero
 * Return: If success return 0
 */
int positive_or_negative()

{
	int n; 

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		 printf("%d is negative\n", n);
	}
	return (0);
}
