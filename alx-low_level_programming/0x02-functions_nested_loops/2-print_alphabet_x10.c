#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)

{
	char alphabets;
	int i;

	for (i = 0; i <= 9; i++)

	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)

		{
			_putchar(alphabets);
		}

		_putchar('\n');
	}
}
