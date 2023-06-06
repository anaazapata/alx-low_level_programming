#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: string to be checked
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int pos, pos1, count = 0;

	for (pos = 0; s[pos] != 0; pos++)
	{
		for (pos1 = 0; accept[pos1] != 0; pos1++)
		{
			if (s[pos] == accept[pos1])
			{
				count++;
				break;
			}
			else if ((accept[pos1 + 1]) == 0)

			{
				return (count);
			}
		}

	}
	return (count);
}
