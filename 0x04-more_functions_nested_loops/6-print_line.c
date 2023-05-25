#include "main.h"
/**
 * print_line - draws a straight line
 * @n: numbers of time the character '_' should be printed
 * Return: Always 0
 */
void print_line(int n)
{
	int line;


	for (line = 1; line <= n; line++)
	{
		_putchar('_');

		if (n <= 0)
		{
			_putchar(10);
		}
	}

	_putchar(10);
}
