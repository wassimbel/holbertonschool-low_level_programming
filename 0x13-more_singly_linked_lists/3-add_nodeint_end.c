#include "lists.h"


/**
  * add_nodeint_end - add a new node at the end of listint_t list
  * @head: pointer to a pointer
  * @n:integer
  * Return:pointer to the new added element
 */



listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *current_node;
listint_t *new_node;

current_node = (listint_t *) malloc(sizeof(listint_t));

if (current_node == NULL)
return (NULL);

current_node->n = n;
current_node->next = NULL;

if (*head == NULL)
{
*head = current_node;
return (current_node);
}

new_node = *head;
while (new_node->next != NULL)
{
new_node = new_node->next;
}

new_node->next = current_node;
return (current_node);
}
