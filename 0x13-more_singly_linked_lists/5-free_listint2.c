#include "lists.h"
#include <stdlib.h>

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	head = NULL;
	temp = temp->next;
	free(temp);
}