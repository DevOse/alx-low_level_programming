#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: int c
 * Return: Returns 1 if alphabets but 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
