#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: first input of type char
 * @b: second input of typr char.
 * @n: Third input of tupe unsigned int
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
