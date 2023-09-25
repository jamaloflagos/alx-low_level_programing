#include "main.h"

/**
 * print_sign - Entry
 *
 * Description: Print sign
 *
 * @n: Parameter
 *
 * Return: after checking @n returns 1 or 0
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)

	{
		_putchar('0');
		return (0);
	}
	else

	{
		_putchar('-');
		return (-1);
	}
}
