#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Testing functions
 *
 * Return: 0
 */

int main(void)
{
	char str1[] = "Jamal";
	char str2[] = "Toyin";
	char *res = _strcat(str1, str2);

	printf("Result: %s", res);

	return (0);
}
