#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: integer value for the new node
 *
 * Return: address of the new node,
 * or NULL if it failed or index is out of range
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (h == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = *h;

	if (idx == 0)
		new = add_dnodeint(h, n);

	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;

	tmp->next = new;

	if (tmp->next == NULL)
		new = add_dnodeint_end(h, n);
	return (new);
}
