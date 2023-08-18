#include "lists.h"

/**
 * sum_dlistint - sums data of d-list
 * @head: points to first node of list
 * Return: result of summation
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum_it = 0;

	ptr = head;
	if (ptr == NULL)
		return (0);

	while (ptr->next != NULL)
	{
		sum_it += ptr->n;
		ptr = ptr->next;
	}
	sum_it += ptr->n;

	return (sum_it);
}
