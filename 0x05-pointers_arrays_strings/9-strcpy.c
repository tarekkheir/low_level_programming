#include "holberton.h"
/**
 *_strcpy - check code
 *@dest: letter
 *@src: letter
 *Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != 0)
	{
		dest[n] = src[n];
		n++;
	}

	return (dest);
}
