#include "main.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: number of bytes in the initial segment of s
 * @accept: bytes accept
 * Return: Returns the number of bytes in the initial segment of s always 0 Success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
