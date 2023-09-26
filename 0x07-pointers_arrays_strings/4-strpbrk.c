#include "main.h"
#include <stddef.h>

/**
 * _strpbrk- Searching for string
 *
 * @s: Pointer to the string to search from
 * @accept: Pointer to the string to be searched
 *
 * Return: Pointer to the string if found otherwise NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *s_p = s;

	while (*s_p != '\0')
	{
		char *accept_p = accept;

		while (*accept_p != '\0')
		{
			if (*s_p == *accept_p)
			{
				return (s_p);
			}

			accept_p++;
		}

		if (*s_p == '\0')
			break;

		s_p++;
	}

	return (NULL);
}
