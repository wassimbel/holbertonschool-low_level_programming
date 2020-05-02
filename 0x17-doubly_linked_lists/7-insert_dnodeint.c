#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

dlistint_t *temp = *h, *new_node, *store_next;
unsigned int i = 0;

new_node = malloc(sizeof(dlistint_t));

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

if(new_node == NULL)
	return (NULL);

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
}

else
{
	while (temp != NULL && i < idx - 1)
	temp = temp->next;
	i++;
store_next = temp->next;
temp->next = new_node;
new_node->next = store_next;
store_next->prev = new_node;
}
return (new_node);

}
