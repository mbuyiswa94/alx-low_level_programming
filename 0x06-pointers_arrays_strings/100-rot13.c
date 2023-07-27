#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char c;

	while (*ptr)
	{
		c = *ptr;

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			*ptr = (c - base + 13) % 26 + base;
		}

		ptr++;
	}

	return (str);
}
