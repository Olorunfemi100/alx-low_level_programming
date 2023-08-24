#include "main.h"
/**
 * reverse_array - Write a function that reverses
 * the content of an array of integers.
 * @a: array
 * @n: n is the number of elements of the array
 * Return: Return in reverse content of array
 */

void reverse_array(int *a, int n)
{
	int b;

	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
