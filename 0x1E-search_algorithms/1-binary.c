#include "search_algos.h"

/**
 * Prints the contents of an array.
 * @array: The source of the array to print.
 * @l: The left index of the array.
 * @r: The right index of the array.
 * binary_search - Searches a value in a sorted array using a binary search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}

int binary_search_index(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (!array)
		return (-1);
	print_array(array, l, r);
	m = l + ((r - l) / 2);
	if (l == r)
		return (*(array + m) == value ? (int)m : -1);
	if (value < *(array + m))
		return (binary_search_index(array, l, m - 1, value));
	else if (value == *(array + m))
		return ((int)m);
	else
		return (binary_search_index(array, m + 1, r, value));
}

int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}
