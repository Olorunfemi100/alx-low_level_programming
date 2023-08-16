#include "main.h"

/**
 * _islower - islower
 * Return: Display 1 if c is lowercase or Returns 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

