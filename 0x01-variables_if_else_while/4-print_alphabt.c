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

	while (abc <= 'z')
	{
		if ((abc != 'e') && (abc != 'q'))
		{
			putchar(abc);
		}
		abc++;
	}
	putchar('\n');
	return (0);
}
