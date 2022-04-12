#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 0;
	char cH = 'a';

	while (ch <= 9)
	{

		putchar(ch + '0');
		ch++;
	}
	while (cH <= 'f')
	{
		putchar(cH);
		cH++;
	}

	putchar('\n');
	return (0);
}
