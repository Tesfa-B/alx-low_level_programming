#include <stdio.h>
/**
 * main - prints a quote
 * Return: if fail return 1
 * write - prints to stdo
 * @nbtye: param for write function
 */
#include <stdio.h> 
 
int main()
	{	
	  static const char hello[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"; 
	    fwrite(hello, sizeof(hello) - 1, 1, stdout);
	   return 1; 
	}

