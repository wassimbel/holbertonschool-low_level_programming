#include "lists.h"

/**
 *get_nodeint_at_index - return the nth node of a linked list
 *@head: pointer to listint
 *@index: index of the node
 *Return: nth node of a list, null if node doesn't exist
 */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int i;
listint_t *node;

node = head;


if (head == NULL)
return (NULL);

for (i = 0; i < index; i++)
{
if (index > i)
{
return (NULL)
}
node = node->next;
}
return (node);
}

