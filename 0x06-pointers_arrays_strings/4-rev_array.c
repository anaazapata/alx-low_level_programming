#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: elements of array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int temp, i;


	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
