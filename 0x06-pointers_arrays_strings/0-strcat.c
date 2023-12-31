#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, src_len = 0, i;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;

	for (i = 0; i < src_len; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
