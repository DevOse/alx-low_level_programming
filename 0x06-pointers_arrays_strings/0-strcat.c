#include <stdio.h>
#include "main.h"

/**
 *_strcat - Concatenates two strings.
 *@dest: first string
 *@src: second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int l1;
	int l2;

	l1 = 0;
	while (dest[l1] != '\0')
	{
		l1++;
	}
	l2 = 0;
	while (src[l2] != '\0')
	{
		dest[l1] = src[l2];
		l1++;
		l2++;
	}
	dest[l1] = '\0';
	return (dest);
}
