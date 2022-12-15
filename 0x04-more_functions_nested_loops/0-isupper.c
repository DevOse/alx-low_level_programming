#include "main.h"

/**
 *  _isupper - Prints uppecase letters
 *  @c: int
 *  Return: If uppercase, return 1, else, return 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
