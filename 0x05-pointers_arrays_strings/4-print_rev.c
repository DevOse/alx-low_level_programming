#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: char
 * Return: 0
 */

void print_rev(char *s)
{
	int b = 0;
	int a;

	while (s[b] != '\0')
	{
		b++;
	}
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
