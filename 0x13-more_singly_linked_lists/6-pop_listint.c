#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if(*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	value = temp->n;

	free(temp);
	return (value);
}
