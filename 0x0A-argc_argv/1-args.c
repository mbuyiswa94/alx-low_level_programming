#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of pointers to the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num_args = argc - 1;

	printf("%d\n", num_args);
	return (0);
}

