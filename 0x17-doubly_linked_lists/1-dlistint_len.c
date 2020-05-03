#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: pointer to first element of the list
 * Return: number of elements in a linked
 *
 **/



size_t dlistint_len(const dlistint_t *h)
{

const dlistint_t *list = h;
size_t len = 0;

	if (list == NULL)
		return (0);
	while (list != NULL)
	{
		list = list->next;
		len++;
	}
	return (len);
}
