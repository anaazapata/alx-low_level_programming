#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 122; alpha >= 97; alpha--)
	{
		putchar(alpha);
	}

	putchar(10);
	return (0);
}
