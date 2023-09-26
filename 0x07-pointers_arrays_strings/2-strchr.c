#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function that locates a character in a string
 *
 * @s: String to check
 * @c: Character to locate
 *
 * Return: Pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}
