#include "hash_tables.h"
/**
*hash_table_create - creates a hashtable
*
*@size: size of the hashtable
*
*Return: hashtable created
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int i = 0;

	if (!size)
		return (NULL);

	hashTable =  malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_node_t) * size);
	if (hashTable->array == NULL)
		return (NULL);

	while (i++ < size)
		hashTable->array[i] = NULL;

	return (hashTable);
}
