#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
	return (NULL);
	}

	int length = 0;

	while (str[length] != '\0')
	{
	length++;
	}

	char *duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate != NULL)
	{
											for (int i = 0; i <= length; i++)
	{
	duplicate[i] = str[i];
	}
	}

	return (duplicate);
}
