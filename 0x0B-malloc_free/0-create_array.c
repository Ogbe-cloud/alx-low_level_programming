#include "main.h"

/**
 * create_array - a function that creates an array of chars and
 * initializes it with a specific char
 *
 * @size: an unsigned int
 * @c: a char
 *
 * Return: NULL if size = 0
 * or a pinter to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(sizeof(c) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (t == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
