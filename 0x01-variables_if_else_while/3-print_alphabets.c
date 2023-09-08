#include <stdio.h>
/**
 * main - main initialization
 *
 * Return: a-z aphabets
 */
int main(void)
{
	char ch;
	char space = '\n';

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);
	putchar(space);
	return (0);
}
