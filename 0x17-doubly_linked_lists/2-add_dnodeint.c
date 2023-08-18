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
	
	if (!node1)
		return (NULL);

	node1->prev = NULL;
	node1->n = n;
	node1->next = (*head);
	(*head)->prev = node1;
	(*head) = node1;

	return (*head);

}
