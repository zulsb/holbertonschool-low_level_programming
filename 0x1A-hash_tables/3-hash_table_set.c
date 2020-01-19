#include "hash_tables.h"

/**
  *hash_table_set - Function that adds an element to the hash table.
  *@ht: Is the hash table you want to add or update the key/value to.
  *@key: Is teh key.
  *@value: Is the value associated with the key.
  *Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_nd, *tp;
	unsigned int idx_n;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx_n = key_index((const unsigned char *) key, ht->size);
	tp = (*ht).array[idx_n];
	while (tp)
	{
		if (strcmp(tp->key, key) == 0)
		{
			free(tp->value);
			tp->value = strdup(value);
			return (1);
		}
		tp = tp->next;
	}
	new_nd = malloc(sizeof(hash_node_t));
	if (new_nd == NULL)
		return (0);
	new_nd->key = strdup(key);
	new_nd->value = strdup(value);
	if (ht->array[idx_n] == NULL)
	{
		new_nd->next = NULL;
		ht->array[idx_n] = new_nd;
		return (1);
	}

	new_nd->next = ht->array[idx_n];
	ht->array[idx_n] = new_nd;
	return (1);
}
