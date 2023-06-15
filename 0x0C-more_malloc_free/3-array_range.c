#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: value
 * @max: value
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
