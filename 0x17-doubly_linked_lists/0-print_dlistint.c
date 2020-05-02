#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to dlistint_t
 * Return: number of nodes
 *
 */


size_t print_dlistint(const dlistint_t *h)
{

const dlistint_t *list = h;
size_t len = 0;

	if (list == NULL)
		return (0);
	while (list != NULL)
	{
	printf("%d\n", list->n);
	list = list->next;
	len++;
	}
	return (len);
}
