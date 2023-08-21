#include "main.h"

/**
 * _puts - Write a function that prints a string,
 * followed by a new line, to stdout.
 * @str: str print then new line
 *
 * Return: input
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	/**
	 * new line
	 */
	_putchar('\n');
}
