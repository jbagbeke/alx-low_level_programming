#include "lists.h"

/**
 * add_dnodeint - adds node at beginning of d-list * @head: Pointer to a pointer to first node of d-list
 * @n: Integer to store in data part of node
 * Return: Pointer to first node of d-list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node1, *ptr;

	node1 = malloc(sizeof(dlistint_t));

	ptr = node1;
	ptr->next = *head;
	ptr->n = n;

	if (*head != NULL)
		(*head)->prev = ptr;

	*head = ptr;

	return (ptr);

}
