#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Write a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: int width input
 * @height: int height input
 * Return: The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **you;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	you = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		you[a] = malloc(sizeof(int) * width);

		if (you[a] == NULL)
		{
			for (; a >= 0; a--)
				free(you[a]);

			free(you);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			you[a][b] = 0;
	}

	return (you);
}
