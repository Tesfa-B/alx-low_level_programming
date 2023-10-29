#include "main.h"
#include "ctype.h"
/**
 * main - prints the sum of the given numbers
 * @argc: number of arguments
 * @argv: array of values
 * atoi - changes string to intger
 * Return: if success 0 else 1
 */
int main(int argc, char *argv[])
{
	int j, add = 0, i;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			for (i = 0; argv[j][i] != '\0'; i++)
			{
				if (!isdigit(argv[j][i]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add = add + atoi(argv[j]);
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
