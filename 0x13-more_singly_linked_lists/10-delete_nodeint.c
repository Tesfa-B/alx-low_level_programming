#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node from given index
 * @index: the index
 * @head: the first node;
 * Return: if success 1 else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *newnode;
	unsigned int i = 1;

	if (head == NULL)
		return (-1);
	temp = *head;
	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	newnode = temp->next;
	temp->next = newnode->next;
	free(newnode);

	return (1);
}
