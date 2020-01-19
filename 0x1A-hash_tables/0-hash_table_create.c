#include "hash_tables.h"

/**
  *hash_table_create - Create a hash table.
  *@size: size a hash table.
  *Return: A pointer to the newly created hash table.
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_h_t;

	new_h_t = malloc(sizeof(hash_table_t));
	if (new_h_t == NULL)
		return (NULL);

	new_h_t->size = size;
	new_h_t->array = malloc(sizeof(hash_node_t *) * size);

	if (new_h_t->array == NULL)
	{
		free(new_h_t);
		return (NULL);
	}

	return (new_h_t);
}
