#include "lists.h"

/**
  * add_nodeint - function that adds a new node
  * @head: pointer to pointer
  * @n: integer
  * Return: pointer to the head
  */



listint_t *add_nodeint(listint_t **head, const int n)


{

listint_t *new_node;

if (head == NULL)
return (NULL);

new_node = (listint_t *) malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

else

new_node->n = n;
new_node->next = *head;
*head = new_node;
return (*head);

}
