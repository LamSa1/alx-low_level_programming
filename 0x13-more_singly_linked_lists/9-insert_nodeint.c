#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *nd;
	listint_t *temp = *head;

	nd = malloc(sizeof(listint_t));
	if (!nd || !head)
		return (NULL);

	nd->n = n;
	nd->next = NULL;

	if (idx == 0)
	{
		nd->next = *head;
		*head = nd;
		return (nd);
	}

	for (k = 0; temp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			nd->next = temp->next;
			temp->next = nd;
			return (nd);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
