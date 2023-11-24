#include "main.h"
#include "stddef.h"
/**
 * binary_to_uint - converts binary in to decimal
 * @b: the value
 * Return: the decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int num = 0;
	int len = strlenn(b);
	int decival = 1;
	int i;

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			num += decival;
		}
			decival *= 2;
	}
	return (num);
}
/**
 * strlenn - calculate the length given value
 * @b: the value to be calculated
 * Return: return len
 */
int strlenn(const char *b)
{
	int j = 0;

	while (*b != '\0')
	{
		j++;
		b++;
	}
	return (j);
}
