#include "main.h"
/**
 * main - prints the multiple of the given number
 * @argc: number of arguments
 * @argv: array of arguments
 * atoi - changes string in to strings
 * Return: if success 0 else 1 or
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
	printf("%d\n", mul);
	}
	return (0);
}
