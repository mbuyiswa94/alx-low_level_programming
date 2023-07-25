#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculates the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
	len++;
	str++;
	}
	return (len);
}
