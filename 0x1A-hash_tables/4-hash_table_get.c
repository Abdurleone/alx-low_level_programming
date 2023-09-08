#include "hash_tables.h"

/**
 * hash_table_set - Retrieve the value associated with a key in a hash table.
 * @ht: pointer to the hash table.
 * @key: key to get the value of
 *
 * Return: value associated with key in ht. and NULL if key not matched - NULL.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int idx;
    hash_node_t *current_node;

    if (ht == NULL || *key == 48 || key == NULL)
             return (NULL);

    index = key_index((const unsigned char *)key, ht->size);

    if (index >= ht->size)
            return (NULL);

    for (current_node = ht->array[idx];
		    current_node && strcmp(current_node->key, key) != 0;
		    current_node = current_node->next)
	    ;

    if (current_node == NULL)
    {
	    return (NULL);
    }
    else
    {
	    return (current_node->value);
    }
}
