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
	char buffer[15];

	_memset(buffer, 'J', 7);
	printf("Result: %s", buffer);
	return (0);
}
