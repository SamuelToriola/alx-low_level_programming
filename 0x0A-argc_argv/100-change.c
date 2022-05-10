#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int count, change = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	while (change >= 1)
	{
		if (change >= 25)
			change -= 25;
		else if (change >= 10)
			change -= 10;
		else if (change >= 5)
			change -= 5;
		else if (change >= 2)
			change -= 2;
		else
			change -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
