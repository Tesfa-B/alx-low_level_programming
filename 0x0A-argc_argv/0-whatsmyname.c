#include "main.h"
#include "stdio.h"
/**
 * main - prints argument
 * @argc: counts number of argument
 * @argv: value of the argument
 * Return: if success return 0;
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
