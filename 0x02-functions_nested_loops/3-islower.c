#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 * @c: checks for lowercase character.
 * Return: Display 1 if c is lowercase or Returns 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

