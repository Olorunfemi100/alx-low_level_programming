#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: memory area dest
 * @src: memory area src
 * @n: n bytes
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;

	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
