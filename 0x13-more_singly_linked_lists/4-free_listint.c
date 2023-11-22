#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees the node from memory
 * @head: head node
 * Return: return if there is nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	head = head->next;
	free(temp);
}
