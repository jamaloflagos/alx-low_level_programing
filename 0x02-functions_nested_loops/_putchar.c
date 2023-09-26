#include "main.h"
#include <unistd.h>

/* Function Implementation */

void _putchar(char putchar) 
{
	write(STDOUT_FILENO, &putchar, 1);
}

