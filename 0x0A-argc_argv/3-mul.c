#include <stdio.h>
#include <stdlib.h>

/**
 * main - print function name.
 * @argc: number of arg in cl
 * @argv: array of arg in cl
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
