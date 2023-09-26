#include "main.h"
#include <stdio.h>

/**
 * _strcat: Concatenate two strings
 *
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to a character
 */
char *_strcat( char *dest, char *src) 
{
	while (*dest != '\0') {
		dest++;
	}

	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	char *res = dest;
	printf("Dest: %s", res);
	return dest;
}
