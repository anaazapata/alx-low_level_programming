#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9
 * do not print 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}

	_putchar(10);
}
