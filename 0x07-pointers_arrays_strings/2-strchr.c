#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int len;

	for (len = 0; s[len] != 0; len++)
	{
		if (s[len] == c)
		{
			return (s + len);
		}
	}

	return (0);
}
