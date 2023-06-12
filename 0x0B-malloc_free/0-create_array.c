#include "main.h"
/**
 * *create_array - creates an array of char
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(*s) * size);

	if (size <= 0)
	{
		return (NULL);
	}

	if (s == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
