#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the pointer to the head of the list
 * @n: integer to be added to the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	new->next = *head;
	*head = new;
	new->n = n;
	new->prev = NULL;

	return (new);
}
