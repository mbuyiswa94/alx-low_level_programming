#include "main.h"

/**
 * print_number - Function to print an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int reversed = 0;
	int is_negative = 0;

	if (n < 0)
	{
	is_negative = 1;
	n = -n;
	}

	while (n > 0)
	{
	reversed = reversed * 10 + (n % 10);
	n /= 10;
	}

	if (reversed == 0)
	{
	_putchar('0');
	return;
	}

	while (reversed > 0)
	{
	_putchar('0' + (reversed % 10));
	reversed /= 10;
	}

	if (is_negative)
	{
	_putchar('-');
	}
}
