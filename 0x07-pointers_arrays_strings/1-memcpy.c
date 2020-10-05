#include "holberton.h"
/**
 *_memcpy - check code
 *@dest: letter
 *@src: letter
 *@n: letter
 *Return: value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
