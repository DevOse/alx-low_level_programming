#include "main.h"

/**
 * print_number -  function that prints an integer
 * @n: int
 * Return: void
 */

void print_number(int n)
{
	int lastDigit;
	int reversed = 0;
	int c;

	if (n < 0)
		{
			_putchar('-');
			lastDigit = '0' - (n % 10);
			n /= -10;
		}
	else
	{
		lastDigit = n % 10 + '0';
		n /= 10;
	}

	while (n > 0)
	{
		n /= 10;
	}
	while (reversed > 0)
	{
		c = reversed % 10 + '0';
		_putchar(c);
		reversed /= 10;
	}
	_putchar(lastDigit);
}
