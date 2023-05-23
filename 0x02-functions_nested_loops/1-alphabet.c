#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alpha = 97;

	while (alpha <= 122)
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar(10);
}
