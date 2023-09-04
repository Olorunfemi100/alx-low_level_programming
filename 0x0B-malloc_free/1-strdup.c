#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Write a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: char str
 * Return: Returns NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *aaa;
	int b, c = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;

	aaa = malloc(sizeof(char) * (b + 1));

	if (aaa == NULL)
		return (NULL);

	for (c = 0; str[c]; c++)
		aaa[c] = str[c];

	return (aaa);
}
