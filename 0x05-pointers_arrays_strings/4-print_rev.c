#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: char
 * Return: 0
 */

void print_rev(char *s)
{
	int a = 0;
	int b = a - 1;

	while (s[a] != 0)
	{
		a++;
	}
	for (; b >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
