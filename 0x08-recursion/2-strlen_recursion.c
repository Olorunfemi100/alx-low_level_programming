#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: char s
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length +=
			_strlen_recursion(s + 1);
	}
	return (length);
}
