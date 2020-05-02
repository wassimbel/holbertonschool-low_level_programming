#include "lists.h"

/**
  * sum_dlistint - the sum of all the data n of a linked list
  * @head: pointer to first node head
  * Return: sum
  */

int sum_dlistint(dlistint_t *head)
{

dlistint_t *temp = head;
int sum = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
return (sum);
}
