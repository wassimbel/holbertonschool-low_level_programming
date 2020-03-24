#include "lists.h"
/**
 * sum_listint- return the sum of all the data (n) of a.
 * @head: pointer to list
 * Return: 0 if list is empty otherwise return the sum of all the data (n).
 **/


int sum_listint(listint_t *head)
{
listint_t *node;


int sum = 0;

node = head;

while (node != NULL)
{
sum += node->n;
node = node->next;
}
return (sum);
}
