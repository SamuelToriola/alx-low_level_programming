#include <stdio.h>
#include <string.h>

/**
 * _strlen -length of a string.
 *
 * @s: input is a character
 * Return: return the length of s
 */

int _strlen(char *s)
{
	int count  = 0;

	while (*(s + count) != '\0')
		count++;

	return (count);
}
