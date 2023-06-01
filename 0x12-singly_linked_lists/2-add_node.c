#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: The string to be added to the list
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newnd;
unsigned int len = 0;

while (str[len])
len++;

newnd = malloc(sizeof(list_t));
if (!newnd)
return (NULL);

newnd->str = strdup(str);
newnd->len = len;
newnd->next = (*head);
(*head) = newnd;

return (*head);
}
