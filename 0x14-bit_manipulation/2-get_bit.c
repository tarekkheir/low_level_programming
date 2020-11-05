#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n : integer
 * @index : required bit
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return (1 & (n >> index));
}
