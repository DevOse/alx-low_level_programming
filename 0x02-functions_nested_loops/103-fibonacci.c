#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int c = 0;
	int sum = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%i\n", sum);
	return (0);
}
