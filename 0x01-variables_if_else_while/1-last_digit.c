#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastVal;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastVal = n % 10;
	if (lastVal > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastVal);

	}
	else if (lastVal == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastVal);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastVal);
	}
	return (0);
}
