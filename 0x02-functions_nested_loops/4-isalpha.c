#include "main.h"

/**
 * _isalpha - Checks if c is lowercase
 *
 * @c: The character in ASCII code
 *
 * Return: void
 */

int _isalpha(int c)
{
	if (c >= 99 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
