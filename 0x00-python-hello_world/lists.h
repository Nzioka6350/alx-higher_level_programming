#ifndef LISTS_H
#define LISTS_H

/*liblaries used*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - singly linked list node
 * @n: Integer data stored in the node
 * @next: Pointer to the next node in the list
 *
 * Description: Definition for a singly linked list node
 * used in various ALX projects.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
