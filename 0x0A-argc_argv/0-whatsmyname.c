#include "main.h"

/**
 * main - a function that prints out the name
 * of the file
 *
 * @argc: an integer that holds the number of
 * items being passed into...
 * @argv: an array that hold all the items that's being
 * passed into..
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
