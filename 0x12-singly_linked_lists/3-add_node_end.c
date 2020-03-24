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
  * add_node_end - function that adds a new node
  * @head: pointer to pointer
  * @str: integer
  * Return: pointer to the added element
  */


list_t *add_node_end(list_t **head, const char *str)
{
list_t *current_node, *new_node;

current_node = (list_t *) malloc(sizeof(list_t));

if (current_node == NULL)
return (NULL);

current_node->str = strdup(str);
current_node->len = _strlen(str);
current_node->next = NULL;

if (*head == NULL)
{
*head = current_node;
return (current_node);
}

new_node = *head;
while (new_node->next != NULL)
{
new_node = new_node->next;
}

new_node->next = current_node;
return (current_node);
}

