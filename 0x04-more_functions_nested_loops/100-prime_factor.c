#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int num = 612852475143, count;

	for (count = 3; num > 1; count ++)
	{
		while (num % count == 0)
		{
			num = num / count;
			if (num == count)
			{
				printf("%lu\n", count);
			}
		}
	}
	return (0);
}
