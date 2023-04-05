#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 *get_nodeint_at_index - Function to nth node of linked list
 *@head: Pointer to first node of list
 *@index: Position of node
 *Return: NULL
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num1 = 0;
	listint_t *hey = head;

	while (hey && num1 < index)
	{
	hey = hey->next;
	num1++;
	}
	return (hey ? hey : NULL);
}

