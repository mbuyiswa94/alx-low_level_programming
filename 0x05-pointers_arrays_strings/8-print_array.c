#include "main.h"

void print_array(int *a, int n)
{
	if (a == NULL || n <= 0)
	{
	printf("Invalid input.\n");
	return;
	}

	for (int i = 0; i < n; i++)
	{
	if (i > 0)
	{
	printf(", ");
	}
	printf("%d", a[i]);
	}

	printf("\n");
}

