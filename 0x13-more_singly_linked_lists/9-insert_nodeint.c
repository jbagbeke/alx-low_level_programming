#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts new node at position
 *@head: Pointer to first node
 *@idx: Where to add new node
 *@n: Data to be used for new node
 *Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num;
	listint_t *new;
	listint_t *hey = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}

	for (num = 0; hey && num < idx; num++)
	{
	if (num == idx - 1)
	{
	new->next = hey->next;
	hey->next = new;
	return (new);
	}
	else
	hey = hey->next;
	}

	return (NULL);
}
