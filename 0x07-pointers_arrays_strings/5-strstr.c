#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
	return (haystack);

	while (*haystack)
	{
	char *h = haystack;
	char *n = needle;

	while (*h && *n && (*h == *n))
	{
	h++;
	n++;
	}

	if (!*n)
	return (haystack);

	haystack++;
	}

	return (NULL);
}
