#include "main.h"
/**
 * void *_calloc - allocates memory for an array using malloc
 * @nmemb: elements of the array
 * @size: size of the array
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, mul;
	char *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	mul = nmemb * size;

	for (i = 0; i < mul; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
