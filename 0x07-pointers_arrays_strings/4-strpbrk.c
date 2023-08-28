#include "main.h"

/**
 * _strpbrk - Write a function that searches a string
 * for any of a set of bytes.
 * @s: string s
 * @accept: string accept
 * Return: Returns a pointer to the byte in s that matches one of the
 * bytes in accept always 0 success
 */

char *_strpbrk(char *s, char *accept)
{
		int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}
	return ('\0');
}
