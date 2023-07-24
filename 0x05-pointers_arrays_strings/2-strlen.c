#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int length = 0;

	/* Loop through the string until the null terminator is found */
	while (*s)
	{
	length++;
	s++;
	}

	return (length);
}
