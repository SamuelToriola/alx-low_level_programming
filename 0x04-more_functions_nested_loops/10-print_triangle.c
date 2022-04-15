#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print triangle according to input
 * @size: height of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int space;
	int hash;
	int count;

	space = size - 1;
	hash = 1;
	count = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (count < size)
	{
		int spacedec = space;
		int hashinc = hash;

		while (spacedec > 0)
		{
			_putchar(32);
			spacedec--;
		}
		while (hashinc > 0)
		{
			_putchar(35);
			hashinc--;
		}
		_putchar('\n');
		count++;
		space--;
		hash++;
	}
}
