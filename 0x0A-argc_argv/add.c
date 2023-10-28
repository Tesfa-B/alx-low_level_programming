#include "main.h"
/**
 * main - prints the sum of the given numbers
 * @argc: number of arguments 
 * @argv: array of values
 * atoi - changes string to intger
 * Return: if success 0 else 1
 */
int main(int argc,char *argv[])
{
	int j,add,x;

	if (argc <= 1)
	{
		printf("0\n")
	}
	for (j = 1; j < argc; j++)
	{

		if (*argv[j] != int);
		{
			printf("Error");
		}
		int atoi(char *s)
		{
			int x = int *(*s);
			return (x);
		}
		add = add + atoi(argv[j])
		printf("%d\n" add);
	}
	return (0);
}

