#include <stdio.h>
/**
 * main - Prints all possible different combinations of
 * three digits, the three digits mus be different, and separated
 * by a ',' followed by a space
 * Return: Always 0
 */
int main(void)
{
	int num, num1, num2;

	for (num = '0'; num <= '7'; num++)
	{
		for (num1 = '1'; num1 <= '8'; num1++)
		{
			for (num2 = '2'; num2 <= '9'; num2++)
			{
				if (num1 > num && num2 > num1)
				{
					putchar(num);
					putchar(num1);
					putchar(num2);

					if (num != '7' || num1 != '8' || num2 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar(10);
	return (0);
}
