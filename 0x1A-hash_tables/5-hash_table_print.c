#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table to be printed
 * Return: None
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int ind = 0;
	char *hash_key, *hash_val;
	hash_node_t *print_it;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			hash_key = strdup(ht->array[i]->key);
			hash_val = strdup(ht->array[i]->value);

			if (!hash_val || !hash_key)
			{
				printf("}\n");
				break;
			}

			print_it = ht->array[i];

			while (print_it != NULL)
			{
				if (ind == 1)
					printf("cd, ");

				printf("'%s': '%s'", hash_key, hash_val);
				print_it = print_it->next;
				if (print_it != NULL)
					printf(", ");
			}

			ind = 1;
		}
	}
	printf("}\n");
}
