#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: input
 * @src: input
 * @n: input
 * Return: A a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int a;

	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[j] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
