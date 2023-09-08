#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - checks the last digit of the number and compare it to 5,0,6
 * last_digit - divides the number by 10
 * Return:If success return 0
 * 6 and 0 or equals to zero
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		 printf("Last digit of %d is %d is and less than 6 and not 0\n",
				 n, last_digit);
	}
	return (0);
}

