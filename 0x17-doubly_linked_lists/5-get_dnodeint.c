#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head of the linked list
 * @index: index of the node in the list
 * Return: the nth node of the linked list or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = head;
unsigned int i = 0;

if (temp== NULL)
	return (NULL);


for (i = 0; i < index && temp != NULL; i++)
	temp = temp->next;

return (temp);
}
