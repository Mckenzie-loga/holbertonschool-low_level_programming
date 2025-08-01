#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string (unique in the HashTable)
 * @value: The value corresponding to a key
 * @next: A pointer to the next node in case of collision
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size. Each cell of this array is a pointer to
 *         the first node of a linked list, because we will handle collisions
 *         using chaining.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */
