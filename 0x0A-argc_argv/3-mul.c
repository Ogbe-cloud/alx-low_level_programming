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
	int a, b, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
/* atoi convert a string to an int */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
