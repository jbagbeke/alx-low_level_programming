#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *hey;
	int num1;

	if (head != NULL)
	{
		hey = *head;
		num1 = (*head)->n;
		hey = hey->next;
		free(*head);
		*head = hey;
		hey = NULL;
	}
	else
	{
		return (0);
	}

	return (num1);
}
