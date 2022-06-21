#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -executes a function given as a parameter.
 * @array: array input.
 * @size: size of array.
 * @action: function input.
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
