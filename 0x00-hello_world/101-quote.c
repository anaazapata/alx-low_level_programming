#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: use function write to print to the stdout
 * Return: Always 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
