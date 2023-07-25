#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char str1[] = "Hello, World!";
	char str2[] = "Testing";
	char str3[] = "Programming";

	puts_half(str1);
	puts_half(str2);
	puts_half(str3);

	return (0);
}
