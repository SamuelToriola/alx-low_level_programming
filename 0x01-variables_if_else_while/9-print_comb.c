#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 0;

	while (ch <= 9)
	{

		putchar(ch + '0');
		if (ch != 9)
		{
		putchar(',');
		putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
