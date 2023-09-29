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
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\0');
}
