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
	unsigned long int index;
	
	index = hash_djb2(key) % size;

	return (index);
}
