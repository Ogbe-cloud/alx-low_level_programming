#include "main.h"

/**
 * print_sign - Checks if n is a sign
 *
 * @n: The character in ASCII code
 *
 * Return: void
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
