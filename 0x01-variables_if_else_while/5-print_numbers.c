#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	numbers = 0;
	while (numbers <= 9)
	{
		printf("%d", numbers);
		numbers++;
	}
	printf("\n");
	return (0);
}
