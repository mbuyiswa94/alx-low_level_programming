#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	/* Check if the character is between 'A' (65) and 'Z' (90) in ASCII table */
	if (c >= 65 && c <= 90)
	{
	return (1); /* Uppercase character found */
	}
	else
	{
	return (0); /* Not an uppercase character */
	}
}
