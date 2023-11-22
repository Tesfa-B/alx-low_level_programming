#include "lists.h"
/**
 * sum_listint - adds the value of the nodes
 * @head: the first node
 * Return: return the sum of the nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}
