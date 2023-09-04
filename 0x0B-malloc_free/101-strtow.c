#include <stdlib.h>
#include "main.h"

/**
 * count_word - Write a function that splits a string into words.
 * @s: char string
 * Return: Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */
int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}

	return (b);
}

/**
 * **strtow - Write a function that splits a string into words.
 * @str: string to split
 * Return: Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, a = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (a)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - a;
				k++;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
