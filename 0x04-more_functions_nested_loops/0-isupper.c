#include "holberton.h"
/**
 * _isupper - check its an uppercase or not
 *
 *@c: letter that we use
 *Return: always 0
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
