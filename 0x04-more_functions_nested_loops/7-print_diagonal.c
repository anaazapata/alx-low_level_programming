#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character should be printed
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int space, diagonal;

	if (n <= 0)
	{
		_putchar(10);
	}
	
	for (diagonal = 1; diagonal <= n; diagonal++)
	{
		for (space = 0; space <= diagonal; space++)
		{
			_putchar(' ');
		}
		
		_putchar('\\');
		_putchar(10);

	}
}
