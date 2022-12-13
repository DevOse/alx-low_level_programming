#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
*/

int main(void)

{
	int unit = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (unit = '0'; unit <= '9'; unit++)
		{
			if ((unit != tens) || (tens < unit))
			{
				putchar(tens);
				putchar(unit);
				if (unit < '9' && tens < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
