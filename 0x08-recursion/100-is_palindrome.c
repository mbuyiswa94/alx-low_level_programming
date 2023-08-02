#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to the input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	char *start = s;
	char *end = s;

	if (s == NULL || *s == '\0')
	{
	return (1);
	}

	while (*end != '\0')
	{
	end++;
	}
	end--;

	while (start < end)
	{
	if (*start != *end)
	{
	return (0);
	}
	start++;
	end--;
	}

	return (1);
}

