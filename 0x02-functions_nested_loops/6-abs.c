#include "main.h"
/**
 * abs - computes the absolute value of an integer
 * @absolute_value: absolute value of an integer
 * Return: Always 0
 */

int _abs(int absolute_value)
{
	if (absolute_value < 0)
	{
		absolute_value = (-1) * absolute_value;
	}
	return (absolute_value);
}
