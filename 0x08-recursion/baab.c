#include "main.h"
int len(char *s);
int check(char *s, int j, int len);

int is_palindrome(char *s)
{
	if(*s == 0)
		return (1);
	return (check(s, 0, len(s)));
}
int len(char *s)
{
	return (1 + len(s + 1));
}
int check(char *s, int j, int len)
{
	if (*(s + j) != *(s + len - 1))
	{
		return 0;
	}
	if (j >= len)
	{
		return 1;
	}
	return (check (s, j + 1,len - 1));
}
