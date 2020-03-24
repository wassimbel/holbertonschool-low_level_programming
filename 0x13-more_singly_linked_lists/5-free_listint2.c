#include "lists.h"


/**
 * free_listint2 - free list_t
 * @head: pointer to pointer the head of the list
 */

void free_listint2(listint_t **head)
{
listint_t *new;

if (head != NULL && *head != NULL)
{
new = *head;
*head = new->next;
free(new);
}

}
