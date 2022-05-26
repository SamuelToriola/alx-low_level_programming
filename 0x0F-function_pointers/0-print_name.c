#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: input name.
 * @f: function input
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
