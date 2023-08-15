#include "main.h"

/**
 * Function that prints the alphabet - I sometimes suffer from insomnia.
 * And when I can't fall asleep, I play what I call the alphabet game
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
