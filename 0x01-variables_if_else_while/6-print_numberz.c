#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a = '0';

	while ((a < '10') && (a >= '0'))
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
