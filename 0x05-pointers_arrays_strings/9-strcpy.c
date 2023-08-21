#include "main.h"

/**
 * char *_strcpy - Write a function that copies
 * the string pointed to by src, including the
 * terminating null byte (\0), to the buffer
 * pointed to by dest
 * @dest: copy string that pointed by src
 * @src: copy str
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
