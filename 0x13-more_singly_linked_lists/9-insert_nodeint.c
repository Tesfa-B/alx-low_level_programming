#include "lists.h"
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int i;

	newnode =(listint_t*) malloc(sizeof(listint_t));
	
	temp = *head;
	for (i = 0; i < idx; i++)
	{
		temp->next = newnode;
		temp = temp->next;
		newnode->n = n;	
		newnode->next = temp;
	}
	return (temp);
}

