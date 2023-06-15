#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc
 * and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 * Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nmem;
	char *ptrold = ptr;
	unsigned int i;

	if (new_size == 0 && ptrold != NULL)
	{
		free(ptrold);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptrold);

	nmem = malloc(new_size);

	if (nmem == NULL)
		return (NULL);

	if (ptrold == NULL)
		return (nmem);

	for (i = 0; i < old_size; i++)
		nmem[i] = ptrold[i];

	free(ptr);

	return (nmem);
}
