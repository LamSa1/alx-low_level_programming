#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: The string to be added to the list
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnd;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
len++;

newnd = malloc(sizeof(list_t));
if (!newnd)
return (NULL);

newnd->str = strdup(str);
newnd->len = len;
newnd->next = NULL;

if (*head == NULL)
{
*head = newnd;
return (newnd);
}

while (temp->next)
temp = temp->next;

temp->next = newnd;

return (newnd);
}
