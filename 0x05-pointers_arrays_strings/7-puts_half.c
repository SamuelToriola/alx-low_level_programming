#include "main.h"

/**
 *puts_half - a function that prints out half of a string.
 *@str: Variable that holds the string to be printed.
 */

void puts_half(char *str)
{
	int i;

	for (i = 1; str[i] != '\0'; i++)
		;
	i++;
	for (i = i / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
