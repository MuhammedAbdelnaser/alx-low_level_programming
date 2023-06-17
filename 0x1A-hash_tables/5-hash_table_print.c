#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int c;
	hash_node_t *tmp;
	char flag = 0; /* 0 while no data has been printed yet */

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for (c = 0; c < ht->size; c++)
	{
		tmp = ht->array[c];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
