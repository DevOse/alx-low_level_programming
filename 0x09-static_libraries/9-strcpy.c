#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function copies string pointed to src and dest
 * @dest: Pointer parameter
 * @src: poiter parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; *(src + a) != '\0'; a++)
	{
		dest[a] = *(src + a);
	}
	dest[a] = '\0';

	return (dest);
}
