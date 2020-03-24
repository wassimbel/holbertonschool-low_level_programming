#include "lists.h"




listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int i;
listint_t *node;



node = head;

for (i = 0; i < index; i++)
{
if (head == NULL)
return (NULL);

node = node->next;
}
return (node);
}

