#include "lists.h"
#include <stddef.h>
#include <stdio.h>


size_t print_listint(const listint_t *h)
{
	if (h->n == 0)
	{
		return (1);
	}
	printf("%d\n%d\n", h->n, h->next->n);
	return (0);
}
