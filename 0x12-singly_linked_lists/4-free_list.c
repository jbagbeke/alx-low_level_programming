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

	while (ptr->next != NULL)
	{
		ptr = head;
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
