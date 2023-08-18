#include "lists.h"

/**
 * sum_dlistint - sums data of d-list
 * @head: points to first node of list
 * Return: result of summation
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_it = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		sum_it += head->data;
		head = head->next;
	}
	return (sum_it);
}
