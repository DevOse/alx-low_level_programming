#include "main.h"
/**
 * _isdigit - Checks for digit
 * @c: int
 * Return: If c is a digit, return 1, else, return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
