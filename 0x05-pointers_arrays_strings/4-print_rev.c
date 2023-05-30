#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: pointer to string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len,  reverse;

	for (len = 0; s[len] != 0; len++)
	{
	}

	for (reverse = len - 1; reverse >= 0; reverse--)
	{
		_putchar(s[reverse]);
	}

	_putchar(10);
}
