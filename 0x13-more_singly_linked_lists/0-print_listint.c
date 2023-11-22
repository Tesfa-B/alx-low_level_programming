#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints the s elemnts of the passed struct
 * @h: struct
 * Return: number of elements in the struct
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h->next == 0)
		return (1);

	while (h->next != 0)
	{
		printf("%d\n%d\n", h->n, h->next->n);
		h = h->next;
		count++;
	}
	return (count + 1);
}
