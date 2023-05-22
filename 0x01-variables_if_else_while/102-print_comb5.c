#include <stdio.h>
/**
 * main - Prints all possible combinations of two digit numbers
 * Numbers should range from 0 to 99, the two numbers should be
 * sepated by a space
 * Return: Always 0
 */
int main(void)
{
	int num, num1;

	for (num = 0; num <= 98; num++)
	{
		for (num1 = num + 1; num1 <= 99; num1++)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');

			putchar(' ');

			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');

			if (num / 10 != 9 || num % 10 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
