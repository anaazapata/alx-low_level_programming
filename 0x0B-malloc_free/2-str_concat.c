#include "main.h"

int len_str(char *s);
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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = len_str(s1);
	size2 = len_str(s2);

	str = malloc(sizeof(char) * (size1 + size2 + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		str[i + j] = s2[j];
	}

	str[i + j] = 0;


	return (str);
}

/**
 * len_str - length of string
 * @s: pointer to string
 * Return: length of string
 */

int len_str(char *s)
{
	int len;

	for (len = 0; s[len] != 0; len++)
	{
	}
	return (len);
}
