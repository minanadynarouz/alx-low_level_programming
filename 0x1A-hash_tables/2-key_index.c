#include "hash_tables.h"

/**
 * key_index - provide index for a key
 * @key: the key of hash table
 * @size: is the size of the array of the hash table
 * Return: Key/value pair to be stored in hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;
	return (index);
}
