#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculate the factorial of a given number
 * @n: The number for which the factorial is to be calculated
 *
 * Return: The factorial of the number.
 * If n is lower than 0, return -1 to indicate an error.
 * Factorial of 0 is 1.
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
