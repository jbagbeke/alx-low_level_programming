#include "lists.h"

/**
 *add_node - Function to add new node
 *@head: head to point to first node
 *@str: String to be duplicated into new node
 *Return: New node's address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL || str == NULL)
	{
		return (NULL);
	}

	new_list->len = strlen(str);
	new_list->str = strdup(str);
	new_list->next = *head;
	*head = new_list;

	while (new_list != NULL)
	{
		new_list = new_list->next;
	}
	free(new_list);
	return (new_list);
}
