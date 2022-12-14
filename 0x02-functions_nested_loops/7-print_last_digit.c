#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: int
 * Return: Returns the last digit of a number
 */

int print_last_digit(int a)
{
	int b = a % 10;

	if (b < 0)
	{
		b = b * -1;
		_putchar(b);
	}
	else
		_putchar(b);
	return (b);
}
