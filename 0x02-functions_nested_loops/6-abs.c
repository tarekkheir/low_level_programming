#include "holberton.h"
/**
 *_abs -check code
 *@r: letter that we use
 *Return: always 0
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else if (r == 0)
	{
		return (0);
	}
	else if (r > 0)
	{
		return (r);
	}
	return (0);
}
