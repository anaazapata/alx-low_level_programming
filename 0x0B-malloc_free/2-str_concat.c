#include "main.h"

char len_str(char *s);
/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, size1, size2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	size1 = len_str(s1);
	size2 = len_str(s2);

	str = malloc(sizeof(char) * (size1 + size2 + 1));

	if (str == 0)
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; s2[j] != 0; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i + j] = 0;

	return (str);
}

/**
 * len_str - length of string
 * @s: pointer to string
 * Return: length of string
 */

char len_str(char *s)
{
	int len;

	for (len = 0; s[len] != 0; len++)
	{
	}
	return (len);
}
