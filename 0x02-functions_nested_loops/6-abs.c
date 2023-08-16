#include "main.h"

/**
 * _abs - There is no such thing as absolute value in this world.
 * You can only estimate what a thing is worth to you
 * @n: the absolute value of an integer.
 * Return: the absolute value of integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
