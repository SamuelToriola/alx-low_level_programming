lines (13 sloc)  254 Bytes
   
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print function name.
 * @argc: number of arg in cl
 * @argv: array of arg in cl
 * Return: 0
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
