#include "main.h"

/**
 * print_last_digit - Entry
 *
 * Description: Print last digit
 *
 * @n: Parameter
 *
 * Return: @n
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	_putchar(last);
	return (last);
}
