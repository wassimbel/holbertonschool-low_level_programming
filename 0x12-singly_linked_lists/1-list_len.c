#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *list_len - retruns lenght of elements
 *@h: linked list to print
 *Return: return numbers of elements
 */


size_t list_len(const list_t *h)
{
int i;

for (i = 0; h != NULL; i++)
{
if (h->str == NULL)
return (0);

h = h->next;
}
return (i);
}
