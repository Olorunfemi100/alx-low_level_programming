#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 * Return: returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int value = 1;
	char *c = (char *)&value;

	return (*c);
}
