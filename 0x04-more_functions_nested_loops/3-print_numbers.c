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

	i = 0;

      for  (i = 0;i < 10;i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
