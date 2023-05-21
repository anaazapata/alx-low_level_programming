#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - assign a random number to varibale n each time it is
 * executed, prints the last digit of the numer stored
 * Return: Always 0
 */
int main(void)
{
	int n;
	int lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;

	if (lastdigit > 5)
		printf("Last digit of %d is %d  and is greater than 5\n", n, lastdig);
	else if (lastdigit == 0)
		printf("Last digit of %d is %d  and is 0\n", n, lastdig);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);

	return (0);
}
