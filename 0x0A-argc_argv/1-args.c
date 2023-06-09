#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the number of arguments passed into it
 * @argv: argument vector
 * @argc: argument count
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
