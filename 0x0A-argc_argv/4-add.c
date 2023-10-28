#include "main.h"
/**
 * main - prints the sum of the given numbers
 * @argc: number of arguments
 * @argv: array of values
 * atoi - changes string to intger
 * Return: if success 0 else i1
 */
int main(int argc, char *argv[])
{
	int j, add = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (j = 1; j < argc; j++)
	{

		if (*argv[j] >= 48 && *argv[j] <= 57)
		{
			add = add + atoi(argv[j]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
