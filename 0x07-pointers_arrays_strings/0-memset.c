#include "main.h"

/**
 *_memset - fills the first n bytes of the memory area pointed
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
