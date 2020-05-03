#include "lists.h"

/**
  * add_dnodeint_end - adds new node at the end of a list0
  *@head: head of linked list
  *@n: data of type int
  * Return: the address of the new element, or NULL if it failed
  **/


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *new_node, *temp = *head;
new_node = malloc(sizeof(dlistint_t));

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

if (new_node == NULL)
	return (NULL);

if (*head == NULL)
{
	*head = new_node;
	return (new_node);
}


while (temp->next != NULL)
{
	temp = temp->next;
}

temp->next = new_node;
new_node->prev = temp;
return (new_node);
}
