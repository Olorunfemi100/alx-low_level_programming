#include <stdio.h>

/**
 * main - In computer class, the first assignment was to
 * write a program to print the first 100 Fibonacci numbers.
 * Instead, I wrote a program that would steal passwords of students.
 * My teacher gave me an A
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
