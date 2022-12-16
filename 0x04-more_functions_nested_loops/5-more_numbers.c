#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 *Return: Always 0
 */

void more_numbers(void)
{
	int a;
	int b;

	a = 0;

	while (a < 10)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar((b%10)+48);
		}
		_putchar('\n');
		a++;
	}
}
