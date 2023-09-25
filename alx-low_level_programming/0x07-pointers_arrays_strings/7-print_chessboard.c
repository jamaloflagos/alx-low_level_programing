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
	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 7; j++)
		{
			printf("%c", a[i][j]);
		}

		printf("\n");
	}
}

