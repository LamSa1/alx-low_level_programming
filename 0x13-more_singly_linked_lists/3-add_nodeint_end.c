#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nd;
	listint_t *temp = *head;

	nd = malloc(sizeof(listint_t));
	if (!nd)
		return (NULL);

	nd->n = n;
	nd->next = NULL;

	if (*head == NULL)
	{
		*head = nd;
		return (nd);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nd;

	return (nd);
}
