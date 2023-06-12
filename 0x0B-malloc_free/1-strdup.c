#include "main.h"
/**
 * *_strdup - retruns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter
 * @str: original string
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *s1;
	int len, i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != 0; len++)
	{
	}

	s1 = malloc(sizeof(char) * (len + 1));

	if (s1 == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
	{
		s1[i] = str[i];
	}
	return (s1);
}
