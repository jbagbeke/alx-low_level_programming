#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint - Function to add new node at beginning
 *@head: Pointer to the first node
 *n: Value to be stored in data section of new node
 *Return: New node address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
