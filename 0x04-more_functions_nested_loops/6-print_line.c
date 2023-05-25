#include "main.h"
/**
 * print_line - draws a straight line
 * @n: numbers of time the character '_' should be printed
 * Return: Always 0
 */
void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (line = 0; line <= n; line++)
		_putchar('_');

	_putchar(10);
}
