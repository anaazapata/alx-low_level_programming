#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: dest string
 * @src: org string
 * @n: bytes to be copied
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, concat;

	for (len = 0; dest[len] != 0; len++)
	{
	}

	for (concat = 0; concat < n && src[concat] != 0; concat++)
	{
		dest[len] = src[concat];
		len++;
	}

	dest[len] = 0;
	return (dest);
}
