#include "lists.h"
/**
 *add_node_end - Function to add node at end of list
 *@head: Pointer to first node
 *@str: String to be contained in new node
 *Return: Address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *ptr;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
	{
	return (NULL);
	}

	new_list->len = strlen(str);
	new_list->next = NULL;
	new_list->str = strdup(str); 

	if (*head == NULL)
	{
	*head = new_list;
	return (*head);
	}
	ptr = *head;

	while (ptr->next != NULL)
	{
	ptr = ptr->next;
	}
	ptr->next = new_list;
	return (ptr->next);
}
