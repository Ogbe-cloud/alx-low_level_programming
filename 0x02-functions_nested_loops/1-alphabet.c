#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 97 ; alpha <= 122 ; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
