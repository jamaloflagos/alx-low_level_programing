#include "main.h"

/**
 * _memset- Function to fill memory with a constant byte
 *
 * @s: Pointer to the memory area
 * @n: Constant byte to fill with
 * @b: Number of bytes to fill
 *
 * Return: Pointer to the memory area 's' (after filling)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}

	return (s);
}
