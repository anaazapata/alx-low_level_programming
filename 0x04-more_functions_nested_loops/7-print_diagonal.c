#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int row, spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= n; row++)
		{
			for (spaces = 0; spaces <= row; spaces++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
