#include "holberton.h"
/**
 *_strstr - check code
 *@haystack: letter
 *@needle: letter
 *Return: value
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
        int j;
	int tmp;

	i = 0;
	tmp = 0;
        while (haystack[i])
        {
                j = 0;
		tmp = i;
                while (needle[j] == haystack[i])
                {
			return (&haystack[tmp]);
                        j++;
                }

                i++;
        }
        return (0);
}
