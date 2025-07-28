#include "hash_tables.h"

/**
 * key_index - Returns the index for a given key
 * @key: The key
 * @size: The size of the array
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
