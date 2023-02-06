#include "main.h"

/**
 * test - Checks if input is a prime number
 * @b: number to be checked
 * @a: variable used to test b
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int test(int a, int b)
{
	int c;

	c = b % a;

	if (b <= 1)
	{
		return (0);
	}
	if ((a < b) && (c == 0))
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (test(a + 1, b));
	}
}
/**
 * is_prime_number - Checks if input is a prime number
 * @n: number to be checked
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (test(2, n));
}
