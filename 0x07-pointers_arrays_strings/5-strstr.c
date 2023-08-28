#include "main.h"

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: string haystack
 * @needle: substring needle
 * Return: Returns a pointer to the beginning of the located
 * substring always 0 success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
