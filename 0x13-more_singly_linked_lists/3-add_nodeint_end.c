#include "lists.h"
#include <stdlib.h>

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *lastnode;
	listint_t *temp;

	lastnode = malloc(sizeof(listint_t));
	if (lastnode == NULL)
		return (NULL);
	
	lastnode->n = n;

	temp = *head;

	while (temp->next != NULL)
    	{
		temp = temp->next;	
	}
	lastnode->next = NULL;
	temp->next = lastnode;

	return (0);
}
