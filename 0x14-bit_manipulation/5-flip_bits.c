#include "holberton.h"
/**
 * flip_bits -how many bits is needed to flip from one number to another
 * @n: origin
 * @m: destination
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	int result = 0;

	while (xor)
	{
		result += xor & 1;
		xor >>= 1;
	}
	return (result);
}
