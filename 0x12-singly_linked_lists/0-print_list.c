#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{	
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	printf("[%d]%s\n[%d]%s\n", h->len, h->str, h->next->len, h->next->str);
	return (0);
}
