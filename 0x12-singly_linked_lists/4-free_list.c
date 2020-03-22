#include "lists.h"


/**
 * free_list - free list_t
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{

if (head != NULL)
{
free_list(head->next);
free(head->str);
free(head);
}

}
