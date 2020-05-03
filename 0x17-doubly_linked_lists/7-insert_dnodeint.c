#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  * @h: double pointer to head
  * @idx: the index of the node
  * @n: integer data
  * Return: the address of the new node, or NULL if it failed
  */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

dlistint_t *temp = *h, *new_node, *store_next;
unsigned int i = 0;

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
	return (NULL);


new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

if (idx == 0)
{
	if (temp == NULL)
		*h = new_node;

	else
	{
		(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;

	}
	return (new_node);
}

while (temp != NULL && i < (idx - 1))
{
	temp = temp->next;
	i++;
}
	if (i == (idx - 1))
	{
		new_node = add_dnodeint_end(h, n);
	}

	else if (idx > i)
	{
		return (NULL);
	}

	else
	{
		store_next = temp->next;
		new_node->next = store_next;
		new_node->prev = temp;
		temp->next = new_node;
		store_next->prev = new_node;
		new_node->n = n;
	}


return (new_node);
}
