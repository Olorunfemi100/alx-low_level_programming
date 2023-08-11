#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */
#include <string.h>

/* betty style doc for function main goes there */
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
