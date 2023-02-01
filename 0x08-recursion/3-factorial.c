#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * if n is lower than 0, return -1 to indicate an error
 * Factorial of 0 is 1
 * @n: given number
 * Return: factorial of given number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);
	else
	{
		return (n * factorial(n - 1));
	}
}
