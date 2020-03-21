#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: takes in a string
 * Return: lenght of s
 */


int _strlen(const char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
return (i);
}

/**
  * add_node - function that adds a new node
  * @head: pointer to pointer
  * @str: takes in a string
  * Return: pointer to the head
  */


list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (head == NULL)
return (NULL);


new_node = (list_t *) malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
new_node->len = _strlen(str);
new_node->next = *head;
*head = new_node;

return (*head);

}
