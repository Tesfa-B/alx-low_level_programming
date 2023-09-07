#include <stdio.h>
/**
 * main - prints a quote
 * Return: if fail return 1
 */
int main(void)
	{
	char q[] = "and that piece of art is useful\" Dora korpar, 2015-10-19";
	FILE *file = fopen("myfile.txt", "W");
	fwrite(q, 1, sizeof(q), file);
	char buffer[sizeof(q)];
	fread(buffer[sizeof(buffer), file);
	return (1);
	}
