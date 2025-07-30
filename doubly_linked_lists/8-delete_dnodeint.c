#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint_t linked list
 * @head: pointer to the pointer to the head of the list
 * @index: index of the node to delete
 * * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	if (head == NULL)
		return (-1);

	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (-1);

	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	if (*head == tmp)
		*head = tmp->next;

	free(tmp);
		return (1);
}
