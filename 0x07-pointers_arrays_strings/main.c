#include <stdio.h>
#include "main.h"

/**
 * main- Entry point
 *
 * Description: Test functions
 *
 * Return: 0
 */

int main(void)
{
	/*char buffer[15];
	char copy_from[] = "Ishaq Jamal";
	char copy_to[15];
	_memset(buffer, 'H', 7);
	printf("Result: %s", buffer);
	printf("\n");
	_memcpy(copy_to, copy_from, 5);
	printf("Copy: %s", copy_to);
	printf("\n");

	char *f = _strchr("Hello", 'e');
	printf("%s", f);

	char *str = "hello, world";
    char *sub = "oleh";
	unsigned int n = _strspn(str, sub);
	printf("Sub: %u", n);

	char *s = "hello, world";
    	char *f = "world";

    	char *t = _strstr(s, f);
    	printf("%s\n", t);

	char arr[8][8] = {
		{1, 2, 3, 4, 5, 6, 7, 8},
		{1, 2, 3, 4, 5, 6, 7, 8},
		{1, 2, 3, 4, 5, 6, 7, 8},
		{1, 2, 3, 4, 5, 6, 7, 8},
		{1, 2, 3, 4, 5, 6, 7, 8},
		{1, 2, 3, 4, 5, 6, 7, 8},
		{1, 2, 3, 4, 5, 6, 7, 8},
		{1, 2, 3, 4, 5, 6, 7, 8},
	};*/

	char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
	print_chessboard(board);

	return (0);
}
