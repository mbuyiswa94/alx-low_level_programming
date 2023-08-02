#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @start: The starting index of the search range.
 * @end: The ending index of the search range.
 *
 * Return: The natural square root of @n within the search range
 */
int _sqrt_helper(int n, int start, int end)
{
	if (start <= end)
	{
	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
	{
	return (mid);
	}
	else if (square < n)
	{
	return (_sqrt_helper(n, mid + 1, end));
	}
	else
	{
	return (_sqrt_helper(n, start, mid - 1));
	}
	}
	return (end);
}
