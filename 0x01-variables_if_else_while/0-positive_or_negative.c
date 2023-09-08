#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - main initialization
*
*Return: is positive or is zero or is negative
*/
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n > 0)
	{
		printf("%d", n);
		printf(" is positive\n");
	}
	else if (n == 0)
	{
		printf("%d", n);
		printf(" is zero\n");
	}
	else
	{
		printf("%d", n);
		printf(" is negative\n");
	}
	return (0);
}
