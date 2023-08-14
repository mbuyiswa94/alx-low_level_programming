#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	if (argc != 3)

	printf("Error\n");
	return (1);

	printf("%d\n", _atoi(argv[1])); * _atoi(argv[2]);
	return (0);
}


