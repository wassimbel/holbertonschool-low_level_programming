#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t print_list(const list_t *h)
{
int i;

for (i = 0; h != NULL; i++)
{
if (h->str == NULL)
printf("[0] (nil)");
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (i);
}
