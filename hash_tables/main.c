#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht = hash_table_create(2048);

	hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "hetairas", "collision1");
	hash_table_set(ht, "mentioner", "collision2");

	hash_table_print(ht);

	printf("Get betty: %s\n", hash_table_get(ht, "betty"));
	printf("Get mentioner: %s\n", hash_table_get(ht, "mentioner"));

	hash_table_delete(ht);
	return (0);
}
