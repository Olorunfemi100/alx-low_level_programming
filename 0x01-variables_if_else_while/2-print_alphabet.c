#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line..
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
/* For a new line character. */
	putchar('\n');
	return (0);
}

