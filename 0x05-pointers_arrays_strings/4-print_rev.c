#include "main.h"

/**
 *print_rev - a function that prints a string in reverse
 *@s: a variable that holds the string to be reversed.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for ( ; i != 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
