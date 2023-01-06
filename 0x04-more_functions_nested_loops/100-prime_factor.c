#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int num, maxPrime, oddPrime;

	num = 612852475143;
	maxPrime = 0;
	oddPrime = 3;

	while (num % 2 == 0)
	{
		maxPrime = 2;
		num = num / 2;
	}
	while (num != 1)
	{
		while (num % oddPrime == 0)
		{
			maxPrime = oddPrime;
			num =  num / oddPrime;
		}
		oddPrime = oddPrime + 2;
	}
	printf("%lu\n", maxPrime);
	return (0);
}
