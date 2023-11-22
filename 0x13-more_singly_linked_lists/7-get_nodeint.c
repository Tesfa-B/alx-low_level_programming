#include "lists.h"
/**
 * get_nodeint_at_index - get nodes by given index
 * @index: given number of index for node
 * @head: the first node
 * Return: returns the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (0);

	for (i = 0; i < index; i++)
	{
		temp = head;
		temp = temp->next;
	}
	return (temp);
}
