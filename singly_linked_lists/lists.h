#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	char *str;
	unsigned int len;
	struct listint_s *next;

} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
