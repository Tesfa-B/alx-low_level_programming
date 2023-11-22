#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head);
{
	listint_t temp;

	if(*head == NULL)
		return (0);
	temp = *head;
	head = head->next;
	return (temp);
	free(temp);
}
