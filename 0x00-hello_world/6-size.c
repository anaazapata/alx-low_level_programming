#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char size_1;
	int size_2;
	long int size_3;
	long long int size_4;
	float size_5;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(size_1));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(size_2));
	printf("Size of long int: %ld byte(s)\n", (unsigned long)sizeof(size_3));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(size_4));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(size_5));

	return (0);
}
