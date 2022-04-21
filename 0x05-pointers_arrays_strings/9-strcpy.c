#include "main.h"

/**
 *_strcpy - a function that copies the string pointed to by src, including
 *the terminating null byte, to the buffer pointed to by dest.
 *
 *@src: variable that holds the string
 *
 *@dest: variable receiving the string
 *
 *Return: The string is returned as value.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
