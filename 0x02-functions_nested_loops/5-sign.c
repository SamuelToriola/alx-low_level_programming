#include <stdio.h>
#include "main.h"
/**
 * print_sign - the alphabet, in lowercase, followed by a new line.
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int print_sign(int c)
{
	int output = 0;
	char say = '0';

	if (c > 0)
	{
		output = 1;
		say = '+';
	}
	else if (c < 0)
	{
		output = -1;
		say = '-';
	}
	_putchar(say);
	return (output);
	_putchar('\n');
}
