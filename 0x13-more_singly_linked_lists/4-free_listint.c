#include "lists.h"


/**
 * free_listint - free list_t
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{

if (head != NULL)
{
free_listint(head->next);
free(head);
}
}
