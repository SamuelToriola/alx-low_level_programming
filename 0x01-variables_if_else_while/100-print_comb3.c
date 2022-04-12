#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first = 0;
	int second = 1;

	while (first <= 8)
	{
		int num1 = first;
		int num2 = second;

		while (num1 <= 8)
		{
			putchar(first + '0');
			putchar(num2 + '0');
			if (first != 8)
			{
			putchar(',');
			putchar(' ');
			}
			num1++;
			num2++;
		}
		first++;
		second++;
	}
	putchar('\n');
	return (0);
}
