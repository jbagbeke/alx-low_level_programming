#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - We're free some nodes hehehe
 *@head: Pointer to the head node
 *Return: Void
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *hey;
	
	hey = head;

	while (hey != NULL)
	{
		hey = hey->next;
		free(head);
		head = hey;
	}
}
