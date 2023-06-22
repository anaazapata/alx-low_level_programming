#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: numbers to sum
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int result = 0;

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(sum, int);
	}

	va_end(sum);
	return (result);
}
