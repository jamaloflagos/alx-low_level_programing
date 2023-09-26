#include "main.h"

/**
 * _memcpy- Function to copy value from one memory area to another
 *
 * @dest: Memory area to copy to
 * @src: Memory area to copy from
 * @n: Number of values to copy
 *
 * Return: Pointer to memory area 'dest' after copying to it
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
