#include <stdio.h>
/**
 * print_alphabet - the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

}
