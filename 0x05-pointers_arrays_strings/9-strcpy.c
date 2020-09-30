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
	char tmp;

	while (src[n] != 0)
	{
		tmp = dest[n];
		dest[n] = src[n];
		src[n] = tmp;
		n++;
	}

	return (dest);
}
