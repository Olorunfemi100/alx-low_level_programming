#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: The line should end with a \n
 * Return: The line should end with a \n If n is 0 or less,
 * the function should only print \n
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
