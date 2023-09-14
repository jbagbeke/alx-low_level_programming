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
	unsigned long int index;
	hash_node_t *hash_node;
	char *value_copied, *key_copied;

	if (strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	hash_node  = malloc(sizeof(hash_node_t));

	value_copied = strdup(value);
	key_copied = strdup(key);

	if (!value_copied || !key_copied)
	{
		free(hash_node);
		return (0);
	}

	hash_node->key = key_copied;
	hash_node->value = value_copied;
	hash_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = hash_node;
		return (1);
	}
	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = value_copied;
			return (1);
		}
		hash_node->next = ht->array[index];
		ht->array[index] = hash_node;
	}

	return (1);
}
