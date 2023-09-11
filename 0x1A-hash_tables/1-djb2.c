#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_it;
	int b;

	hash_it = 5381;
	while ((b = *str++))
	{
		hash_it = ((hash_it << 5) + hash_it) + b;
	}

	return (hash_it);
}
