#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array.
 *
 * Return: pointer to the new hash table.NULL if an error occurs.
*/

hash_table_t *hash_node_create(unsigned long int size)
{
    hash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
          return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
             return (NULL);
    for (i = 0; i < size; i++)
            ht->array[i] = NULL;

    return (ht);
}