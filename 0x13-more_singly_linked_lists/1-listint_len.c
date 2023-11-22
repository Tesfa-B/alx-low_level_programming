#include "lists.h"
/**
 * listint_len - cunts number of elments in a passed struct
 * @h: struct
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
