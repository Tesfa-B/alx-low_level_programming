#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - prints the elements of the passed struct
 * @h: struct
 * Return: number of elements in the struct
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
