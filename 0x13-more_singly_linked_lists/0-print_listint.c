#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_listint - prints all the elements of listint_t
  * @h: struct
  * Return: return number of nodes
 */


size_t print_listint(const listint_t *h)

{


size_t i;

for (i = 0; h != NULL; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}

