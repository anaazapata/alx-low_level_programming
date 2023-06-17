#include "main.h"
/**
 * char *_strncpy - copies a string
 * @dest: dest string
 * @src: org string
 * @n: bytes
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = 0;
		i++:
	}

	return (dest);
}
