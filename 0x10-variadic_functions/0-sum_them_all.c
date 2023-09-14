#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: int n.
 * @...:  -.0
 * Return: If n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ab;
	unsigned int a, sum = 0;

	va_start(ab, n);
	for (a = 0; a < n; a++)
		sum += va_arg(ab, int);
	va_end(ab);
	return (sum);
}
