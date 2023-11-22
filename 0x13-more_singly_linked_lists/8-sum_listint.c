#include "lists.h"

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp->next != NULL)
	{
		sum += temp->n
	}
	return (sum);
}
	
