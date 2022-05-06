#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of memory
 * @c: character
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int count = 0;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(c));

	if (ar == NULL)
		return (NULL);

	while (count < size)
	{
		ar[count] = c;
		count++;
	}
	return (ar);
}
