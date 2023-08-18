#include "lists.h"

/**
 * add_dnodeint - adds node at beginning of d-list * @head: Pointer to a pointer to first node of d-list
 * @n: Integer to store in data part of node
 * Return: Pointer to first node of d-list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node1;

	node1 = malloc(sizeof(dlistint_t));
	node1->next = *head;
	node1->n = n;

	if (*head != NULL)
		(*head)->prev = node1;

	*head = node1;
	return (node1);
}
