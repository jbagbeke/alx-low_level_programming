#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table
 * @ht: The hash table
 * @key: Key of element to be added
 * @value: Value associated with key of element
 * Return: 0(Failure), 1 otherwise
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node, *traverse;
	char *value_copied;

	if (strlen(key) == 0)
		return (0);

	hash_node  = malloc(sizeof(hash_node_t *));
	value_copied = malloc((strlen(value) + 1) * sizeof(char));

	if (!value_copied || !hash_node)
		return (0);

	strcpy(value_copied, value);

	hash_node->key = (char *)key;
	hash_node->value = value_copied;
	hash_node->next = NULL;

	if (ht->array[0] == NULL)
	{
		ht->array[0] = hash_node;
	}

	if (ht->array[0] != NULL)
	{
		traverse = ht->array[0];

		while (traverse->next != NULL)
			traverse = traverse->next;

		traverse->next = hash_node;
	}

	return (1);
}
