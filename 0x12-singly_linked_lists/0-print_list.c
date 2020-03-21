#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *print_list - print all elements of a list_t list
 *@h: linked list to print
 *Return: number of nodes
 */


size_t print_list(const list_t *h)
{
int i;

for (i = 0; h != NULL; i++)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
}
return (i);
}
