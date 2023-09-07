#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Write a function that allocates memory for an
 * array, using malloc.
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - Write a function that allocates memory for an
 * array, using malloc.
 * @nmemb: unsigned int nmemb
 * @size: unsigned int size
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
