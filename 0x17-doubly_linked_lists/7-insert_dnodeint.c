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

dlistint_t *temp = *h, *new_node;
unsigned int i = 0;

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

if (idx == 0)
	return (add_dnodeint(h, n));
while (temp != NULL && i < idx)
{
temp = temp->next;
i++;
}

if (temp == NULL && i == idx)
	return (add_dnodeint_end(h, n));

else if (temp != NULL)
{

	new_node->n = n;
	temp->prev->next = new_node;
	new_node->prev = temp->prev;
	new_node->next = temp;
	temp->prev = new_node;
	return (new_node);
}
return (NULL);
}
