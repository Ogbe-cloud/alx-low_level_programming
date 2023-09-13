#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer.
 *
 * @r: The character in ASCII code
 *
 * Return: void
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (r *= -1);
	}
	else
	{
		return (r);
	}
	return (0);
}
