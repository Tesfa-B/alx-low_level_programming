#include "main.h"
/**
 * main - prints all given argument followed by new line
 * @argc: number of argument
 * @argv: array of string
 * Return: if success return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
	return (0);
}
