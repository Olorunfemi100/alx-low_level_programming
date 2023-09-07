#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Write a function that reallocates a memory block using malloc and free
 * @ptr: void pointer to the memory previsouly allocated
 * @old_size: int old size of the allocated memory
 * @new_size: int new size of the new memory
 * Return: If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			ptr1[a] = old_ptr[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			ptr1[a] = old_ptr[a];
	}

	free(ptr);
	return (ptr1);
}

