#include "lists.h"
/**
 * get_nodeint_at_index - get nodes by given index
 * @index: given number of index for node
 * @head: the first node
 * Return: returns the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int i;

	if (head == NULL)
		return (0);

	for (i = 1; i < index; i++)
	{
		temp = head;
		next = temp->next;
	}
	return (next);
}
