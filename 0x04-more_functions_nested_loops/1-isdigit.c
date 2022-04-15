#include "main.h"
/**
 *_isdigit - a function that checks for a digit 0 through 9
 *@c: a variable that stores digits or letters
 *main - checks for a digit 0 through 9
 *Return: If c is a number, returns 1. Else, returns 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

