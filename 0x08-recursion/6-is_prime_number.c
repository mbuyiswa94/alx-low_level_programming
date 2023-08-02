#include "main.h"

/**
 * is_prime_recursive - Recursive helper function to check if a number is prime
 * @n: The input integer to check
 * @i: The divisor to check against n
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recursive(int n, int i)
{
	if (n <= 1)
	return (0);

	if (i * i > n)
	return (1);

	if (n % i == 0)
	return (0);

	return (is_prime_recursive(n, i + 1));
}
