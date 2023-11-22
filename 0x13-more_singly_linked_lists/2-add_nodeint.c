#include "lists.h"
#include <stdlib.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	
	new->n = n;
	if  (*head == NULL)
	{
		new->next = (listint_t *) head;
	}
	else
	{
		new->next = *head;
	}
	*head = new;

	return (0);
}
