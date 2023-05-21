#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except q and e
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}

	putchar(10);
	return (0);
}
