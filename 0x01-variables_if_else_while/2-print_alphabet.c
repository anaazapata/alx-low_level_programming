#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}

	putchar(10);
	return (0);
}
