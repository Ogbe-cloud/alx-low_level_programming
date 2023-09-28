#include <stdio.h>

/**
 * _print_rev_recursion - prints a string reverse
 *
 * @s: the string to reverse
 *
 * RETURN: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
