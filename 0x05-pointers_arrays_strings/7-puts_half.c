#include "main.h"
#include <string.h>

/**
 * puts_half- prints half a string
 * @str: string to be halved
 * Return: void
 */

void puts_half(char *str)
{
	int n, x, y;
	x = strlen(str);

	/**
	 * x is the length of the string
	 * n determines what happens if string length (i.e x) is even or odd
	 * if y = n and less than the string length:
	 * print the string from the point where  y starts
	 */
	n = (x - 1) / 2;

	if (x % 2 != 0)
	{
		n = (x - 1) / 2;
	}
	else
	{
		n = x / 2;
	}
	for (y = n; y < x; y++)
		_putchar(str[y]);
	_putchar('\n');

}
