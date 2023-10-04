#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory
 *
 * @str: a list
 *
 * Return: a new string of str duplicate
 * or null if str = NULL
 * or null if isufficient memory
 */

char *_strdup(char *str)
{
	char *strDup;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strDup = malloc(sizeof(*str) * i);
	if (strDup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}
	return (strDup);
}
