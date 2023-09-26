#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: function to print alphabets
 *
 * Return: void
 */

void print_alphabet(void)

{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
