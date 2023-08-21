#include "main.h"

/**
 * print_rev - Write a function that prints a string,
 * in reverse, followed by a new line.
 * @s: str in reverse then a new line
 * Return: input reversed
 */

void print_rev(char *s)
{
	int length = 0;

	int b;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (b = length; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
