#include "main.h"
#include <stdio.h>

/**
 * print_chessboard- Print chessboard from a 2D Array
 *
 * @a: @D Array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int j = 0;

	for (int i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}

		_putchar(a[i / 8][i - j]);
	}

	_putchar('\n');
}

