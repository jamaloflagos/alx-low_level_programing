#include "main."

/**
 * _puts_recursion- Prints string then add new line
 *
 * @s: String to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\0');
}
