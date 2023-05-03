#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n element of an array of integers,
 * followed by a new line.
 * @a: This is an input array
 * @n: This is the length of the array
 *
 *
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
