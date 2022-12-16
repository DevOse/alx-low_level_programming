#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: int
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 1; a <= n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
