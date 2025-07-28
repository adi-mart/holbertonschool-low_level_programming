#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to be added to the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	while (*str != '\0')
	{
		new->len++;
		str++;
	}
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new;
	}

	return (new);
}
