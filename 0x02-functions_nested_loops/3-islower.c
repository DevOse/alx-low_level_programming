#include "main.h"

/**
 * _islower - checks lowercase characters
 * @c: int c
 * Return: Only 0 if lowercase
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
