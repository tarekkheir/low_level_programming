#include "hash_tables.h"

/**
 * key_index - this function give you the index of a key
 * @key: key
 * @size: size of the array of size table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int i = 0;

    i = hash_djb2(key) % size;
    return (i);
}