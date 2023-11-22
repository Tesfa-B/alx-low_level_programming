#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - deletes all node
 * @head: head node
 * Return: zero
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		*head = temp;
	}
	head = NULL;
}
