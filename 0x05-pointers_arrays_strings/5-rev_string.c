#include "main.h"
#include <string.h>
/**
 * rev_string - prints a string in reverse
 * @s: pointer to string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int reverse, temp;

	for (reverse = 0; reverse < len / 2; reverse++)
	{
		temp = s[reverse];
		s[reverse] = s[len - reverse - 1];
		s[len - reverse - 1] = temp;
	}

}
