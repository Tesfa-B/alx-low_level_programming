#include "lists.h"
/**
 * listint_len - cunts number of elments in a passed struct
 * @h: struct
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h->next != 0)
	{
		h = h->next;
		count++;
	}
	return (count + 1);
}
