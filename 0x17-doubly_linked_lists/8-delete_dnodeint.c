#include "lists.h"
/**
 * delete_dnodeint_at_index - dels node at idx
 * @head: Pointer to first node of d-list
 * @index: index of node to delete
 * Return: 1(Success), 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1, *ptr2, *ptr3;

	ptr1 = *head;
	if (ptr1 == NULL)
		return (-1);
	if (index == 0)
	{
		if (ptr1->next != NULL)
		{
			ptr2 = ptr1->next;
			ptr2->prev = NULL;
			*head = ptr2;
		}
		free(ptr1);
		return (1);
	}

	while (index >= 1)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->next;
		if (!ptr1)
			return (-1);
		index--;
	}

	if (ptr1->next == NULL)
		ptr2->next = NULL;
	else
	{
		ptr3 = ptr1->next;
		ptr2->next = ptr3;
		ptr3->prev = ptr2;
	}
	free(ptr1);
	return (1);
}
