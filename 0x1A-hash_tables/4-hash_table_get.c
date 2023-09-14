#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table containing key-value pair
 * @key: Key whose value is to be searched for
 * Return: The value associated with key or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *value_found;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index  = key_index((const unsigned char *)key, ht->size);

	value_found = ht->array[index];

	if (value_found == NULL)
		return (NULL);

	do {
		if (strcmp(value_found->key, key) == 0)
			return (value_found->value);

		value_found = value_found->next;
	} while (value_found != NULL);

	return (NULL);
}
