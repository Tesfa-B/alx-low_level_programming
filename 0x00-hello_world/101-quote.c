#include <stdio.h>
/**
 * main - prints a quote
 * Return: if fail return 1
 */	
int write(int filedes, const char *buf, unsigned int nbyte);
int main( )
	{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19 \n", 55);
	return (1);
	}
