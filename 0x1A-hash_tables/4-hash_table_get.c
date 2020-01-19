#include "hash_tables.h"

/**
  *hash_table_get - Function that retrieves a value associated with a key.
  *@ht: Is the hash table you want to look into.
  *@key: Is the key i am looking for.
  *Return: NULL or value.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tp;
	unsigned int idx_n;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx_n = key_index((unsigned char *)key, ht->size);
	tp = (*ht).array[idx_n];
	while (tp)
	{
		if (strcmp(key, tp->key) == 0)
			return (tp->value);

		tp = tp->next;
	}
	return (NULL);
}
