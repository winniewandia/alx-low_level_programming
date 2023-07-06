#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: Size of the array
 *
 * Return: Pointer to the newly created hash table, otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

/**
 * free_node - frees each node
 * @node: Node to be freed
 */

void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node->next);
	free(node);
}

/**
 * free_table - Function to free allocated memory to the table
 * @table: Table to be freed
 */

void free_table(hash_table_t *table)
{
	unsigned long int i;
	hash_node_t *item;

	for (i = 0; i < table->size; i++)
	{
		item = table->array[i];
		if (item)
		{
			free_node(item);
		}
	}
	free(table->array);
	free(table);
}
