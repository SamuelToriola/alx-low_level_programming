#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string input
 * Return: retun str
 */

void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
