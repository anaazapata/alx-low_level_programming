#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int len;

	for (len = 0; s1[len] != 0 && s2[len] != 0; len++)
		if (s1[len] != s2[len])
			return (s1[len] - s2[len]);

	return (0);
}
