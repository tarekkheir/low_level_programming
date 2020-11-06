#include "holberton.h"
/**
 *_pow_binary - return the binary pow
 *@n: integer
 *@pow: pow of integer
 *Return: integer
 */
unsigned int _pow_binary(unsigned int n, int pow)
{
	if (pow == 0)
		return (1);
	if (pow == 1)
		return (n);
	n = n * 2;
	return (_pow_binary(n, pow - 1));
}
/**
 *_strlen - length of pointer
 *
 *@s: letter that we use
 *Return: always 0
 */
int _strlen(const char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}
/**
 *binary_to_uint - convert integer into binary
 *@b: string
 *Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	int pui = 0;
	unsigned int result = 0;
	int len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	if (len == 0)
		return (0);
	len--;
	while (len >= 0)
	{
		if (b[len] == 48)
		{
			len--;
			pui++;
		}
		else if (b[len] == 49)
		{
			result = result + _pow_binary(2, pui);
			pui++;
			len--;
		}
		else
			return (0);

	}
	return (result);
}
