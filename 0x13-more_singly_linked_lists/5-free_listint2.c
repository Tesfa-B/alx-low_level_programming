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

	while (head != NULL)
	{
		temp = *head;
		temp = temp->next;
		free(temp);
		*head = NULL;
	}
}
