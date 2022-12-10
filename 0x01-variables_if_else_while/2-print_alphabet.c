#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always o Success)
*/
int main(void)
{
	int abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
