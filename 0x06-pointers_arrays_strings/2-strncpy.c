#include "main.h"

/**
 * _strncpy - copies a string
 * @src: source
 * @dest: destination
 * @n: int
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
