#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts node in given index
 * @idx: index number
 * @n: value of node
 * @head: the first node
 * Return: returns the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));

	temp = *head;
	for (i = 1; i < idx; i++)
	{
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->n = n;

	return (newnode);
}
