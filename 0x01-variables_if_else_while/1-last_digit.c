#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -  checks the random  numbers last digit if its greater than 5 or less than 5, 0  
 * Return: If success return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d  greater than 5\n", n, last_digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		 printf("Last digit of %d is %d and less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}

