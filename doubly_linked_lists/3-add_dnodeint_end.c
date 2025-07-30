#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the pointer to the head of the list
 * @n: integer to be added to the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (head != NULL)
	{
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (new);
		}

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->prev = temp;
		return (new);
	}
	return (NULL);
}
