#include <stdio.h>

int main(void)
{
	int num;
	int multiple;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (multiple = 1; multiple <= 12; multiple++)
	{
		printf("%d\n", (num * multiple));
	}
	return (0);
}
