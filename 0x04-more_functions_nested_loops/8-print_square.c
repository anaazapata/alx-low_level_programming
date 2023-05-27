#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 * Return: Always 0
 */
void print_square(int size)
{
	int square, newline;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (newline = 0; newline < size; newline++)
		{
			for (square = 0; square < size; square++)
			{
				_putchar('#');
			}

			_putchar(10);
		}
		
	}
}
