#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int spaces, newline;

	if (size <= 0)
	{
		printf("\n");
	}

	for (spaces = 0; spaces < size; spaces++)
	{
		for (newline = 0; newline < spaces; newline++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
