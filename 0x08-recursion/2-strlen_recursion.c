#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string whose length is to be determined
 * Return: length o string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
		return (0);
}
