#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: int n
 * Return: Zero when n is zero
 */

int print_sign(int n)
{
	int c;

	if (n > 0)
	{
		_putchar('+');
		return (+1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{_putchar ('0');
	return (0);
	}
}
