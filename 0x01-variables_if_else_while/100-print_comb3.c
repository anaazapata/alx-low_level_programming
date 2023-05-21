#include <stdio.h>
/**
 * main - Prints all possible different combos of two digits
 * separated by a ',' followed by a space, the two digits must be different
 * Return: Always 0
 */
int main(void)
{
	int num, num1;

	for (num = '0'; num <= '8'; num++)
	{
		for (num1 = '1'; num1 <= '9'; num1++)
		{
			if (num <  num1)
			{
				putchar(num);
				putchar(num1);

				if (num != '8' && num1 != '9')
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
