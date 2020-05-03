#include "lists.h"

/**
  * delete_dnodeint_at_index - delete node at index
  * @head: pointer to head of linked list
  * @index: index of the node
  * Return: 1 if it succeeded, -1 if it failed
  */



int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int i = 0;

if (temp == NULL)
	return (-1);
if (index == 0)
{
	if (temp->next == NULL)
		*head = NULL;
	else
	{
		*head = temp->next;
		temp->next->prev = NULL;
	}
	free(temp);
	return (1);
}

while (temp != NULL && i < index)
{
	temp = temp->next;
	i++;
}
	if (index > i)
		return (-1);

	if (temp != NULL && temp->next != NULL)
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	else if (temp != NULL && temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
	}
	return (-1);
}

