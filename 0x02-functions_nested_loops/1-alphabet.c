#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int abc;
	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
