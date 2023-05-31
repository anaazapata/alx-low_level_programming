#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: Alwaya 0
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;

			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}

			else if (col != 0)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(product + '0');
			}

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}

		_putchar(10);
	}
}
