#include "main.h"

int _putchar(char c);

int _isdigit(int c)

{
	/* Check if c is within the ASCII range for digits '0' to '9' */
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
