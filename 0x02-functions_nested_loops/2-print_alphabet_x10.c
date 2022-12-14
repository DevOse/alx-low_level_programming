#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets ten times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int abc;
	int ten;

	for (ten = 0; ten <= 10; ten++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
}
