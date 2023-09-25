#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: Check if the parameter c is in lowercase
 *
 * @c: parameter
 *
 * Return: if @c is lowercase return 1 otherwise 0
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else

	{
		return (0);
	}
}
