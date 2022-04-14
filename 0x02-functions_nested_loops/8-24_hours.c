#include "main.h"
/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 * main - prints out all minutes of the day from 00:00 till 23:59
 * Return: no value
 */

void jack_bauer(void)
{
	int i = 0, j = 0, k, l, f, s;

	while (i <= 23)
	{
		while (j <= 59)
		{
			s = j % 10;
			f = j / 10;
			l = i % 10;
			k = i / 10;
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar(':');
			_putchar(f + '0');
			_putchar(s + '0');
			_putchar('\n');
			if (j == 59)
			{
				j = 0;
				break;
			}
			j++;
		}
		i++;
	}
}
