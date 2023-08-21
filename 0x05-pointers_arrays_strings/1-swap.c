#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: int a (input)
 * @b: int b (input)
 * Return: int a, int b
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
