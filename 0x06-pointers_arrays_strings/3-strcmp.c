#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: First string
 * @s2: Second string
 * Return: Difference
 */

int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}
	b = s1[a] - s2[a];
	return (b);
}
