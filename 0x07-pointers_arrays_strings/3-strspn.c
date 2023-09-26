#include "main.h"

/**
 * _strspn- Get the length of a prefix substring
 *
 * @s: Pointer to the string to be checked
 * @accept: Pointer to the string containing characters to be accepted
 *
 * Return: unsigned int (the length of the substring)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = 0;
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				n++;
				break;
			}

			p++;
		}

		if (*p == '\0')
			break;

		s++;
	}
	return (n);
}
