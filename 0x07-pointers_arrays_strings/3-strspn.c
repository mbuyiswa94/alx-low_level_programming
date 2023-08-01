#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The input string.
 * @accept: The characters to be accepted.
 *
 * Return: The number of bytes in the initial segment of `s`
 *         which consist only of bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s && *accept)
	{
	if (*s == *accept)
	{
	length++;
	s++;
	accept++;
	}
	else
	{
	break;
	}
	}
	return (length);
}
