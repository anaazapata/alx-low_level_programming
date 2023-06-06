#include "main.h"
/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: orginal string
 * @accept: string to be checked
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int pos, pos1;

	for (pos = 0; s[pos] != 0; pos++)
	{
		for (pos1 = 0; accept[pos1] != 0; pos1++)
		{
			if (s[pos] == accept[pos1])
			{
				return (s + pos);
			}
		}
	}

	return (0);
}
