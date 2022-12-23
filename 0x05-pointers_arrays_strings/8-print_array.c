#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: int
 * Return: void
 */

void print_array(int *a, int n)
{
	int elements;

	for (elements = 0; elements < n; elements++)
	{
		printf("%d", a[elements]);
		if (elements != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
