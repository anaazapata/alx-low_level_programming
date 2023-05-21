#include <stdio.h>
/**
 * main - Prints all signle digit numbers of base 10
 * starting from 0
 * Return: Always 0
 */
int main(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	putchar(10);
	return (0);
}

