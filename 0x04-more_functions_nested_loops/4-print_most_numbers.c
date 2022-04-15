#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print 0 to 9 and ass space
 * except 2 and 4 .
 *
 * Return 0
 */

void print_most_numbers(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		if (!(i == 50 || i == 52))
		{
			_putchar(i);
		}
		i++;

	}
	_putchar('\n');
}
