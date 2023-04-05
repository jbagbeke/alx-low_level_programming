#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
 *
 *
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *hey;

	hey = malloc(sizeof(listint_t));
	if (num2 = NULL)
	{
		return (NULL);
	}

	hey->n = n;
	hey->next = NULL;

	while(*head != NULL)
	{
		*head = head->next;
	}
	
	*head->next = hey;
	
	return (hey);
}
