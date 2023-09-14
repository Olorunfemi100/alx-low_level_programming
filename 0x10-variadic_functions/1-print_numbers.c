#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Write a function that prints numbers,
 * followed by a new line.
 * @separator: char *seperator is string to be printed between numbers.
 * @n: int n is the number of integers passed to the function.
 * @...: -
 * Return: If separator is NULL, don’t print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
