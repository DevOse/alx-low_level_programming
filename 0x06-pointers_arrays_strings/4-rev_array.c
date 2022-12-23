#include "main.h"
/**
 * reverse_array - reversse an array
 * @a: Pointer
 * @n: Pointer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int y;
	int z;

	n = n - 1;
	z = 0;
	while (z <= n)
	{
		y = a[z];
		a[z++] = a[n];
		a[n--] = y;
	}
}
