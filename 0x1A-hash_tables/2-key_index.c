#include "hash_tables.h"

/**
 * key_index - Returns index of a key in a hash table using djd2 hash function
 * @key: The key whose index in the table is to be determined
 * @size: Size of the hash table to be created
 *
 * Return: Index of key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_table_t *hash_tab;
	unsigned long int i, index;

	if (!(size > 0))
	{
		fprintf(stderr, "Invalid Size of Hash Table");
		return (-1);
	}

	hash_tab = malloc(sizeof(hash_table_t));

	if (!hash_tab)
		return (-1);

	hash_tab->size = size;
	hash_tab->array = malloc(size * sizeof(hash_node_t *));

	if (!hash_tab->array)
		return (-1);

	index = hash_djb2(key);

	for (i = 0; i < size; i++)
	{
		hash_tab->array[i] = NULL;
	}

	return (index);
}
