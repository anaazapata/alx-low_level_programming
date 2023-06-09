#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num, n, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (n = 0; argv[num][n] != 0; n++)
		{
			if (argv[num][n] < 48 || argv[num][n] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);
	return (0);
}
