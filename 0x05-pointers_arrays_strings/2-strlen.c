#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: str s len
 *
 * Return: length of string s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
