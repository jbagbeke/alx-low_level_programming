#include "lists.h"
/**
 *free_list - Function to free linked list
 *@head: Pointer to first node
 *Return: Void
 *
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
	{
	return;
	}

	ptr = head;

	while (ptr->next != NULL)
	{
	ptr = ptr->next;
	free(head);
	head = ptr;
	}
}
