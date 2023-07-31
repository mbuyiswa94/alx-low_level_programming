#include "main.h"

/**
 * _memcpy - function copies @n from memory area @src
 * to memory @dest
 *
 * @n: function copies
 *
 *
 * @src: byte from memory area
 *
 * Return: a pointer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
