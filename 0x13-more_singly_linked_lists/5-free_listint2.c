#include "lists.h"


/**
  * free_listint2 - free listint_t
  * @head: pointer to pointer to head of the list
 */


void free_listint2(listint_t **head)
{

listint_t *new_list;

while (head != NULL && *head != NULL)
{
new_list = *head;
*head = new_list->next;
free(new_list);
}
}
