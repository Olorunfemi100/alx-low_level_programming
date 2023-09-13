#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Write a function that prints a name.
 * @name: char name to add
 * @f: pointer to function
 * Return: -
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
