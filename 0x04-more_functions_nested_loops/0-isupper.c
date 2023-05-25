#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: letter to be checked
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c <= 90)
		return (1);
	else
		return (0);
}
