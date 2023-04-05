#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Function to sum the data in linked list
 * @head: first node in the linked list
 *Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *hey = head;

	while (hey != NULL)
{
	sum += hey->n;
	hey = hey->next;
}

	return (sum);
}
