#include "main.h"
/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: memory area pointed to by s
 * @b: constant byte b
 * @n: number of bytes
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
