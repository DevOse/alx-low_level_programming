#include "main.h"
/**
 * print_square - prints squares
 * @size: int
 * Return: void
 */

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
