#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - pops the first node send returns data
 * @head: the first node
 * Return: the data of the first node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	value = temp->n;

	free(temp);
	return (value);
}
