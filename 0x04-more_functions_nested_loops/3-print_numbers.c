#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print 0 to 9 and ass space
 *
 * Return 0
 */

void print_numbers(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;

	}
	_putchar('\n');
}
