#include "holberton.h"
/**
 * _islower - check the code
 *@c: is the letter that we test.
 *
 * Return: always 0
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
