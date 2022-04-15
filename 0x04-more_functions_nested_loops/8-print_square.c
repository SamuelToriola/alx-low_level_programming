#include <stdio.h>
#include "main.h"

/**
 * print_square -  prints a square, followed by a new line.
 *
 * @size: size of square
 *
 * Return: 0
 */

void print_square(int size)
{
	int len;
	int bre;

	len = size;
	bre = size;
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (len > 0)
	{
		while (bre > 0)
		{
			_putchar(35);
			bre--;
		}
		len--;
		bre = size;
		_putchar('\n');
	}
}
