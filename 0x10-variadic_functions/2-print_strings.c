#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that strings numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: no of arguments or strings passed to the function
 * if separator in NULL, don't print
 * If one of the string is NULL, print (nil) instead
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char*);
		if (str == NULL)
			printf("(nill)");
		else
		printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(string);
}
