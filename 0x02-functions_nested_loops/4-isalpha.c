#include "main.h"

/**
 * _isalpha - isalpha
 * @c: checks for alphabetic character.
 * Return: View 1 if c is a letter, lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
