#include <stdio.h>
#include <stdlib.h>

int run(int argc, int argv[])
{
	int i;

	if (argc > 0)
	{
		return (1);
	}
	for(i = 0; argv[i] > 0; i++)
	{
		printf("%i\n", argv[i]);
	}
	return (0);
}
int main()
{	
	int i;

	i = run();
	return (x);
}
