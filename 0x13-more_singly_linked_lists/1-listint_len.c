#include "lists.h"


/**
 *listint_len - retruns lenght of elements
 *@h: linked list to print
 *Return: return numbers of elements
 */

size_t listint_len(const listint_t *h)
{
size_t i;

for (i = 0; h != NULL; i++)
{
h = h->next;
}
return (i);
}
