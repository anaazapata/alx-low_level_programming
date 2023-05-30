#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: pointer to string
 * Return: Always 0
 */
void puts2(char *str)
{
	int len, even_char;

	for (len = 0; str[len] != 0; len++)
	{
	}

	for (even_char = 0; even_char < len; even_char++)
	{
		if (even_char % 2 == 0)
		{
			_putchar(str[even_char]);
		}
	}
	_putchar(10);
}
