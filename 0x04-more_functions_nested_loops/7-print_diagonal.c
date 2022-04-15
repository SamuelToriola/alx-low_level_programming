#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: integer of any number
 *
 * Return - 0
 */

void print_diagonal(int n)
{
	int space = n - 1;
	int count = space - 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n > 0)
	{
		int inc = count;

		while (inc < space)
		{
			if (space - inc != 1)
			{
				_putchar(32);
			}
			inc++;
		}
		_putchar(92);
		_putchar('\n');
		n--;
		count--;
	}
}

