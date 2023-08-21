#include "main.h"

/**
 * _atoi - Write a function that convert a
 * string to an integer.
 * @s: convert str to int
 *
 * Return: print int converted from str
 */

int _atoi(char *s)
{
	int a, b, c, len_char, d, figure;

	a = 0;
	b = 0;
	c = 0;
	len_char = 0;
	d = 0;
	figure = 0;
	while (s[len_char] != '\0')
		len_char++;
	while (a < len_char && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			figure = s[a] - '0';
			if (b % 2)
				figure = -figure;
			c = c * 10 + figure;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
