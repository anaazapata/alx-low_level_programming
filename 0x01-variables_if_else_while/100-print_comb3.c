#include <stdio.h>
/**
 * main - Prints all possible different combos of two digits
 * separated by a ',' followed by a space, the two digits must be different
 * Return: Always 0
 */
int main(void)
{
	char num, num1;

	for (num = 48; num <= 56; num++)
	{
		for (num1 = 49; num1 <= 57; num1++)
		{
			if (num <  num1)
			{
				putchar(num);
				putchar(num1);

				if (num != 56 && num1 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar(10);
	return (0);
}
