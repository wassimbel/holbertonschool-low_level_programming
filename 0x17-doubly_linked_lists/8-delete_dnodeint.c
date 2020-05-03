#include "lists.h"



int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head, *store_next, *store_prev;
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
}

while (temp != NULL)
{
	if (index > i)
	{
		return (-1);
	}
	else if (i == index - 1)
	{
		store_next = temp->next->next;
		store_prev = temp->next->next->prev;
		temp->next = store_next;
		store_prev->prev = temp;
		free(temp);
	}
temp = temp->next;
i++;
}
return (1);
}
