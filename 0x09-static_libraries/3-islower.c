#include "main.h"

/**
 * _islower - Checks if c is lowercase
 *
 * @c: The character in ASCII code
 *
 * Return: void
 */

int _islower(int c)
{
	if (c >= 99 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
