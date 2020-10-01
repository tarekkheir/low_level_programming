#include "holberton.h"
/**
 *_strcat - check code
 *@dest: letter
 *@src: letter
 *Return: value
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;
	int nb = 0;
	int count = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[nb] != '\0')
	{
		nb++;
	}
	while (count <= nb)
	{
		dest[count + n] = src[count];
		count++;
	}
	dest[count + n] = '\0';
	return (dest);
}
