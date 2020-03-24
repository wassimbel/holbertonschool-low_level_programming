#include "lists.h"


/**
  * pop_listint -delete the head node
  * @head: pointer to a pointer of the listint_t
  * Return: the head nodes data (n)
 */

int pop_listint(listint_t **head)
{
listint_t *new_list;
int i;

if (*head == NULL)
return (0);

new_list = *head
*head = new_list->next;
i = new_list->i;
free(new_list);
return(i);
}
