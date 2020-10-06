#include "holberton.h"
/**
 *_strstr - check code
 *@haystack: letter
 *@needle: letter
 *Return: value
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int tmp = 0;

	if (haystack[i] != 0)
	{
		while (haystack[i])
		{
			j = 0;
			tmp = i;

			while (needle[j] == haystack[i])
			{
				if (needle[j] == '\0')
				{
					return (&haystack[tmp]);
				}

				j++;
				i++;
			}

			i = tmp;
			i++;
		}
	}
	return (0);
}
