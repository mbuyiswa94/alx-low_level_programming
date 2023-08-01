#include "main.h"

/**
 * _strpbrk - Locates the first occurrence of any character from accept
 *            in the string s.
 * @s: The string to be searched.
 * @accept: The string containing characters to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in
 *         accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr_s = s;

	while (*ptr_s != '\0')
	{
	char *ptr_accept = accept;

	while (*ptr_accept != '\0')
	{
	if (*ptr_s == *ptr_accept)
	return (ptr_s);

	ptr_accept++;
	}
	ptr_s++;
	}

	return (NULL);
}
