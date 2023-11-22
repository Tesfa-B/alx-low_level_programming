#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds node in to the last
 * @head: head node
 * @n: value of n
 * Return: returns the address of the last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastnode;
	listint_t *temp;

	lastnode = malloc(sizeof(listint_t));
	if (lastnode == NULL)
		return (NULL);

	lastnode->n = n;

	if (*head == NULL)
		*head = lastnode;
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = lastnode;
	lastnode->next = NULL;

	return (lastnode);
}
