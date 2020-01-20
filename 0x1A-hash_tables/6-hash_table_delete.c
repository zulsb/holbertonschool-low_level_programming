#include "hash_tables.h"

/**
  *hash_table_delete - Function that deletes a hash table.
  *@ht: Is the hash table.
  *Return: Void.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tp, *nd;
	unsigned int idx_n;

	if (ht == NULL)
		return;

	idx_n = 0;
	while (idx_n < ht->size)
	{
		tp = ht->array[idx_n];
		while (tp)
		{
			nd = tp;
			free(tp->key);
			free(tp->value);
			tp = tp->next;
			free(nd);
		}

		idx_n++;
	}

	free(ht->array);
	free(ht);
}
