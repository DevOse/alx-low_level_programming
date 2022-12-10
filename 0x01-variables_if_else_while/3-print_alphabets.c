#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int abc = 'a';
	int ABC = 'A';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	while (ABC <= 'Z')
	{
		putchar(ABC);
		ABC++;
	}

	putchar('\n');
	return (0);
}
