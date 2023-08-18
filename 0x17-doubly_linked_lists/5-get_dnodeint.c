#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: Points to first node of d-list
 * @index: Index of node to return
 * Return: Pointer to node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index == 0 || head == NULL)
		return (head);

	while (index >= 1)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);

		index--;
	}

	return (head);
}
