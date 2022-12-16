#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: int
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		for (a = 0; a <= size; a++)
		{
			_putchar(35);
		}

	}
	else
	{
		_putchar('\n');
	}
}
