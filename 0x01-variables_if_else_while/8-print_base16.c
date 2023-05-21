#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	char hexa;

	for (hexa = 48; hexa <= 57; hexa++)
	{
		putchar(hexa);
	}

	for (hexa = 97; hexa <= 102; hexa++)
	{
		putchar(hexa);
	}

	putchar(10);

	return (0);
}
