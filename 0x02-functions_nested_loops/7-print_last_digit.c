
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * main - evaluates last digit
 *
 *@r: stores the last digit and goes through the condtional statements
 *
 * Return: the value of the last digit
 */

int print_last_digit(int r)
{
	int remainder = r % 10;

	if (r < 0)
	{
		r = r * -1;

		_putchar(r % 10 + '0');
		return (r % 10);
	}
	else
	{
		_putchar(remainder + '0');
		return (r % 10);
	}
}
