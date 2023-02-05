#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * If n does not have a natural square root, return -1
 * @n: number
 * Return: sqaure root
 */

int _sqrt_recursion(int n)
{
	int rec(int n, int sqrt);

	int sqrt = 1;

	return (rec(n, sqrt));
}

/**
 * rec - helps the _sqrt_recursion function to store two values in the argument
 * @sqrt: squareroot
 * @n: number
 * Return: squaroot
*/
int rec(int n, int sqrt)
{
	if (sqrt * sqrt == n)
	{
		return (sqrt);
	}
	else if (sqrt < n)
	{
		return (rec(n, ++sqrt));
	}
	else
	{
		return (-1);
	}
}
