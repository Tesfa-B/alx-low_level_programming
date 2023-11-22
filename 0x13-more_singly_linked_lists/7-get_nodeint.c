#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	int x;

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		return (temp);
	}
	return (0);
}
