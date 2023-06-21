#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @size: size of array
 * @action: pointer to function
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	int i;

	if (array == NULL || action == NULL || size <= 0)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
