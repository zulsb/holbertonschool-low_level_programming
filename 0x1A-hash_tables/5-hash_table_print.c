#include "hash_tables.h"

/**
  *hash_table_print - Function that prints a hash table.
  *@ht: Is the hash table.
  *Return: If ht is NULL, dont print anything.
  */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tp;
	unsigned int idx_n;
	char *s;

	s = "";

	if (ht == NULL)
		return;
	printf("{");

	idx_n = 0;
	while (idx_n < ht->size)
	{
		tp = ht->array[idx_n];
		while (tp)
		{
			printf("%s'%s': '%s'", s, tp->key, tp->value);
			s = ", ";
			tp = tp->next;
		}

		idx_n++;
	}
	printf("}\n");
}
