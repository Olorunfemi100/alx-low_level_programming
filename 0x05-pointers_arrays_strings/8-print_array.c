#include "main.h"

/**
 * print_array - Write a function that prints n
 * elements of an array of integers, followed by a new line.
 * @a: int input n
 * @n: number of element to be printed
 * Return: print a & n
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
