#include <stdio.h>
/**
 * print_alphabet_x10 - the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	count++;
	}
}
