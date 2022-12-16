#include "main.h"

/**
 * print_line - prints a line
 * @n: int
 * Return: always 0
 */

void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
		_putchar('_');
	_putchar('\n');
}

