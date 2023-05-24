#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: natural number
 * Return: Always 0
 */

void print_to_98(int n)
{
	int numbers;

	for (numbers = n; numbers <= 98; numbers++)
	{
		printf("%d, ", numbers);

	}
	printf("\n");

}
