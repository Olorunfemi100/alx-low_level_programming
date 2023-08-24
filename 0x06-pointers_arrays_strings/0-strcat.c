#include "main.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: input
 * @src: input
 * Return: Returns a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int a;

	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
