#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - deletes all node
 * @head: head node
 * Return: zero
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *nextnode;

	temp = *head;
	while (temp != NULL)
	{
		nextnode = temp->next;
		free(temp);
		temp = nextnode;
	}
	*head = NULL;
}
