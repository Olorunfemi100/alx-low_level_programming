#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: string s
 * @c:  character c
 * Return: Returns a pointer to the first occurrence of the character Always 0
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
