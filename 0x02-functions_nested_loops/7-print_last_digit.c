#include "main.h"

/**
 * print_last_digit - There are only 3 colors, 10 digits,
 * and 7 notes; it's what we do with them that's important
 * @n: prints the last digit of a number.
 * Return: value of the last digit of a number
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
