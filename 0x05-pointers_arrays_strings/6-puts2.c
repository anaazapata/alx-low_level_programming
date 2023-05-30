#include "main.h"
/**
 * void puts2 - prints every other character of a string
 * starting with the first character
 * @s: pointer to string
 * Return: Always 0
 */
void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != 0; len++)
	{
		if (str[len] % 2 == 0)
		{
			_putchar(str[len]);
		}
	}
	_putchar(10);
}
