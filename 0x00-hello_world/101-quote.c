#include <stdio.h>
/**
 * main - prints quote
 * Return: if fail return 1
 * fwrite - print stdo
 */
int main(void)
	{
	char h[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(h, sizeof(h) - 1, 1, stdout);

	return (1);
	}
