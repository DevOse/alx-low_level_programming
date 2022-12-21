#include "main.h"
/**
 * rev_string - prints a string, in reverse, followed by a new line
 * @s: char
 * Return: 0
 */

void rev_string(char *s)
{
	int length1 = 0;
	int length2 = 0;
	int c;
	char rev;

	while (s[length1] != '\0')
	{
		length1++;	}
	length2 = length1 - 1;
	for (c = 0; c < length1 / 2; c++)
	{
		rev = s[c];
		s[c] = s[length2];
		s[length2] = rev;
		length2 -= 1;
	}
}
