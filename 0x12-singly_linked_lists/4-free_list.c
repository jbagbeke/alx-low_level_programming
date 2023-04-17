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

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
