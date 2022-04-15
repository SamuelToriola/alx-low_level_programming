#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 0 to 14 and add space
 * print 10 times
 * Return 0
 */

void more_numbers(void)
{
	int i;
	int j;
	int count;
	int x;

	i = 48;
	j = 48;
	count = 0;

	for (x = 0; x < 10; x++)
	{
		while (count <= 14)
		{
			if (count == 10)
			{
				i = 49;
			}
			_putchar(i);
			if (count < 10)
			{
				i++;
			}
			else
			{
				_putchar(j);
				j++;
			}
			count++;
		}
		count = 0;
		i = 48;
		j = 48;
		_putchar('\n');
	}
}
