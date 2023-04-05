#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *hey;
	hey = *head;

	if (head == NULL)
	{
		return;
	}

	while (hey != NULL)
	{
		hey = hey->next;
		free(*head);
		*head = hey;
	}
	*head = NULL;
}
