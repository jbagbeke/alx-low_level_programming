#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - add node at the end
 *@head: Pointer to the head node
 *@n: Data to fill the data part of new node
 *Return: New node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *hey;
	listint_t *hoo;

	hoo = *head;

	hey = malloc(sizeof(listint_t));
	if (!hey)
	{
		return (NULL);
	}

	hey->n = n;
	hey->next = NULL;

	if (!*head)
	{
		*head = hey;
		return (hey);
	}


	while (hoo->next != NULL)
	{
		hoo = hoo->next;
	}

	hoo->next = hey;

	return (hey);
}
