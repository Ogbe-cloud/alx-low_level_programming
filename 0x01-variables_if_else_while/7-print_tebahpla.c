#include <stdio.h>

/**
 * main - prints the alphabets in reversible
 * Return: Always 0
 */
int main(void)

{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
