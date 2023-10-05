#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 * or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
     // Creates a new HashTable.
     hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
     if (table == NULL)
         return NULL;
     table->size = size;
     if (size == 0)
         return table;
     table->array = (hash_node_t**) calloc(table->size, sizeof(hash_node_t*));
     if (table->array == NULL)
         return NULL;
     for (int i = 0; i < table->size; i++)
         table->array[i] = NULL;

     return table;
}