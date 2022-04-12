#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 0;

	while (ch <= 9)
	{
		printf("%d", ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
