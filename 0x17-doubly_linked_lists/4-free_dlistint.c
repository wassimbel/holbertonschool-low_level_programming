#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to head of linked list
 */


void free_dlistint(dlistint_t *head)
{
dlistint_t *temp = head, *store;

	while (temp != NULL)
	{
	store = temp->next;
	free(temp);
	temp = store;
	}

}
