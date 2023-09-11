#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table with struct defined in header
 * @size: Size of hash_table to be created
 * Return: The hash table that was created
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tab;
	int i;

	if (!(size > 0))
	{
		fprintf(stderr, "Invalid Size of Hash Table\n");
		return (NULL);
	}

	hash_tab = malloc(sizeof(hash_table_t));

	if (!hash_tab)
		return (NULL);

	hash_tab->size = size;

	hash_tab->array = malloc(size * sizeof(hash_node_t *));

	if (!hash_tab)
		return (NULL);

	for (i = 0; i < size; i++)
		hash_tab->array[i] = NULL;

	return (hash_tab);
}
