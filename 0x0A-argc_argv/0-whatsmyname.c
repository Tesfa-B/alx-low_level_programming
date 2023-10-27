#include "main.h"
/**
 * main - prints argument
 * @argc: counts number of argument
 * @argv: value of the argument
 * Return: if success return 0;
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n ", argv[i]);
	}
	return (0);
}
