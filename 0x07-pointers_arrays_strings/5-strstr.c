#include "main.h"

/**
 * _strstr- Search for a string
 *
 * @haystack: String to dearchfrom
 * @needle: String to search
 *
 * Return: Pointer ot NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}

	return (0);
}
