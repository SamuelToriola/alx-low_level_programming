#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && src[count] != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	for ( ; count < n; count++)
		dest[count] = '\0';

	return (dest);
}
