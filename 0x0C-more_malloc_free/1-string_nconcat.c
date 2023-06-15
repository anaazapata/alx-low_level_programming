#include "main.h"

unsigned int len_str(char *);
/**
 * *string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: bytes
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = len_str(s1);
	size2 = len_str(s2);

	if (n >= size2)
		n = size2;

	concat = malloc(sizeof(char) * size1 + n + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		concat[i + j] = s2[j];
	}

	concat[i + j] = 0;
	return (concat);
}

/**
 * len_str - length of string
 * @s: pointer to string
 * Return: Always 0
 */
unsigned int len_str(char *s)
{
	unsigned int length;

	for (length = 0; s[length] != 0; length++)
	{
	}

	return (length);
}
