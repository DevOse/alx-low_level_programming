#include <stdio.h>

/**
 * main - prints name of the file the program was compiled from
 *
 * return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
