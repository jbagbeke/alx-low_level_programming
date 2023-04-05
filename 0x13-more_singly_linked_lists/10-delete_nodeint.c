#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a point
 * @head: pointer to the first node
 * @index: position of the node to delete
 * Return: 1 (Success), -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hey = *head;
	listint_t *current = NULL;
	unsigned int num = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(hey);
	return (1);
	}

	while (num < index - 1)
	{
	if (!hey || !(hey->next))
	return (-1);
	hey = hey->next;
	num++;
	}

	current = hey->next;
	hey->next = current->next;
	free(current);

	return (1);
}
