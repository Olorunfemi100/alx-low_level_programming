#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: char s1 input
 * @s2: char s2 input
 * Return: point to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, bc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = bc = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[bc] != '\0')
		bc++;
	conct = malloc(sizeof(char) * (a + bc + 1));

	if (conct == NULL)
		return (NULL);
	a = bc = 0;
	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}

	while (s2[bc] != '\0')
	{
		conct[a] = s2[bc];
		a++, bc++;
	}
	conct[a] = '\0';
	return (conct);
}
