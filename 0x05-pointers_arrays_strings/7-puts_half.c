#include "main.h"

/**
 * puts_half - Write a function that prints
 * half of a string, followed by a new line.
 * @str: input string character
 * Return: if odd, print n char of str
 */

void puts_half(char *str)
{
	int a, n, length_of_the_string;

	length_of_the_string = 0;
	for (a = 0; str[a] != '\0'; a++)
		length_of_the_string++;
	n = (length_of_the_string / 2);
	if ((length_of_the_string % 2) == 1)
		n = ((length_of_the_string + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
