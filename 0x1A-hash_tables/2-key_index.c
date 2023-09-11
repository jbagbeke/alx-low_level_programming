#include "hash_tables.h"

/**
 * key_index - Returns index of a string in a hash table using djd2 hash function
 * @key: The key whose index in the table is to be determined
 * @size: Size of the hash table to be created
 *
 * Return: Index of key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_table_t *hash_tab;
	unsigned long int index;

	hash_tab = hash_table_create(size);

	if (hash_tab == NULL)
	{
		fprintf(stderr, "Error creating hash table\n");
		exit(EXIT_FAILURE);
	}

	index = hash_djb2(key);

	return (index);
}
