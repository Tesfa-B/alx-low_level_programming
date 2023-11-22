#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds node the top of the list
 * @head: pointer to the top node
 * @n: the value of n int the node
 * Return: returns the address of the newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *firstnode;

	if (head == NULL)
		return (NULL);
	firstnode = malloc(sizeof(listint_t));
	if (firstnode == NULL)
		return (NULL);

	firstnode->n = n;

	firstnode->next = *head;
	*head = firstnode;

	return (firstnode);
}
