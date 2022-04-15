#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper - check if input is uppercase
 * @c: input is an alphabet
 * Return: -1 if uppercase, 0 if lowercase
 */

int _isupper(int c)
{
	int output = 0;

	if (isupper(c))
	{
		output = 1;
	}
	return (output);
}
