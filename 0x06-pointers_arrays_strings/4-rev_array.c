#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: Pointer
 * @n: int
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int y;
	int z;

	for (y = 0; y < n; y++)
			{
				n--;
				z = a[y];
				a[y] = a[n];
				a[n] = z;
			}
}

